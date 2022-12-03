#ifndef IMC_H
#define IMC_H
#include<iostream>
#include<cctype>

class user{
public:
    double weight,height;
    double calculateIMC(double w, double h );
    std::string resultIMC(double IMC);

};

#endif //IMC_H
