//
//  MyString.cpp
//  CppProgramming
//
//  Created by heyji on 2023/11/14.
//

#include "MyString.hpp"
#include <iostream>
#include <cstring>

MyString::MyString(int s) : len(s), bufSize(s) {
    buf = new char[s + 1];
    buf[s] = '\0';
}

MyString::MyString() : len(0), bufSize(0)
{
    buf = new char[1];
    buf[0] = '\0';
}

MyString:: MyString(const char* str)
{
    len = bufSize = strlen(str);
    buf = new char[len + 1];
    strcpy(buf, str);
}

MyString:: MyString(const MyString& mstr) : len(mstr.len), bufSize(mstr.len)
{
    buf = new char[len + 1];
    strcpy(buf, mstr.buf);
}

MyString::MyString(MyString&& mstr) : len(mstr.len), bufSize(mstr.bufSize), buf(mstr.buf)
{
    mstr.buf = nullptr;
}

MyString::~MyString()
{
    delete[] buf;
}

int MyString::length() const
{
    return len;
}

MyString& MyString::operator=(const MyString& mstr)
{
    if (bufSize < mstr.len) {
        delete [] buf;
        len = bufSize = mstr.len;
        buf = new char[len + 1];
    }
    else
        len = mstr.len;
    strcpy(buf, mstr.buf);
    return *this;
}

MyString& MyString::operator=(MyString&& mstr)
{
    delete [] buf;
    len = mstr.len;
    bufSize = mstr.bufSize;
    buf = mstr.buf;
    mstr.buf = nullptr;
    return *this;
}

MyString MyString::operator+(const MyString& mstr) const
{
    MyString tmstr(len + mstr.len);
    strcpy(tmstr.buf, buf);
    strcpy(tmstr.buf + len, mstr.buf);
    return tmstr;
}

MyString& MyString::operator+=(const MyString& mstr)
{
    if (bufSize < len + mstr.len) {
        char* tbuf = new char[(bufSize = len + mstr.len) + 1];
        strcpy(tbuf, buf);
        delete [] buf;
        buf = tbuf;
    }
    strcpy(buf + len, mstr.buf);
    len += mstr.len;
    return *this;
}

