#include "imc.h"

double user::calculateIMC(double w,double h){
    return (w /(h*h));
}

std::string user::resultIMC(double IMC){
    if(IMC < 18.5 ){
        return "Underweight";
    }
    else if (IMC == 18.5 || IMC < 25.0){
        return "Normal";
    }
    else if (IMC == 25.0 || IMC < 30.0){
        return "Overweight";
    }
    else if (IMC == 30.0 || IMC < 35.0){
        return "Obese";
    }
    else if (IMC > 35.0){
        return "Extremely Obese";
    }
}