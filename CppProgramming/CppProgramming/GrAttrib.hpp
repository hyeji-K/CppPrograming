//
//  GrAttrib.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef GrAttrib_hpp
#define GrAttrib_hpp

#include <iostream>
using namespace std;

class GrAttrib {
    string lineColor;
    string fillColor;
public:
    GrAttrib() : lineColor("검정색"), fillColor("흰색") {}
    GrAttrib(const string& lc, const string& fc) : lineColor(lc), fillColor(fc) {}
    
    void setLineColor(const string& lc) {
        lineColor = lc;
    }
    void setFillColor(const string& fc) {
        fillColor = fc;
    }
    
    string getLineColor() const {
        return lineColor;
    }
    string getFillColor() const {
        return fillColor;
    }
};

extern GrAttrib curAttrib; // 현재 속성을 나타내는 전역 객체 

#endif /* GrAttrib_hpp */
