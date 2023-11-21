//
//  Circle.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef Circle_hpp
#define Circle_hpp

#include <stdio.h>
#include "Figure.hpp"

class Circle : public Figure {
    double cx, cy;
    double radius;
public:
    Circle(double x, double y, double r) : cx(x), cy(y), radius(r) {}
    
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif /* Circle_hpp */
