//
//  Triangle.hpp
//  CppProgramming
//
//  Created by heyji on 2023/11/21.
//

#ifndef Triangle_hpp
#define Triangle_hpp

#include <stdio.h>
#include "Figure.hpp"

class Triangle : public Figure {
    double x1, y1, x2, y2, x3, y3;
public:
    Triangle(const double v[3][2]);
    
    void move(double dx, double dy);
    void scale(double s);
    void draw() const;
};

#endif /* Triangle_hpp */
