//
//  Figure.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef Figure_hpp
#define Figure_hpp

#include <stdio.h>
#include "GrAttrib.hpp"

class Figure {
protected:
    GrAttrib attrib;
public:
    Figure() : attrib(curAttrib) {}
    
    void setLineColor(const string& c) {
        attrib.setLineColor(c);
    }
    void setFillColor(const string& c) {
        attrib.setFillColor(c);
    }
    
    virtual void move(double dx, double dy) = 0;
    virtual void scale(double s) = 0;
    virtual void draw() const = 0;
};

#endif /* Figure_hpp */
