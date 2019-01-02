/*******************************************************************************
 * Spencer Nielsen
 * File: newtonsMethodProgram
 * Date: 1/01/19
 * 
 * 
 * 
 */

#include <iostream>
#include <cmath>
#include <string>

int main() {
    
    // define variables
    double number;
    std::string function;
    std::string derivedFunction;
    bool validFunction = false;
    int exponent;
    
    // user enters a number to be put into function
    std::cout << "Enter a number: ";
    std::cin >> number;
    
    // oldx starts as number
    double oldx = number;
    
    // user enters the function
    do {
        std::cout << "Enter your function: ";
        std::cin >> function;
        if(function == "cos" || function == "sin" || function == "exponent") {
            } else if(function == "cos") {
                derivedFunction = "-sin";
            }
            else if(function == "sin") {
                derivedFunction = "cos";
            }
            else if(function == "exponent") {
                std::cout << "Enter an exponent: ";
                std::cin >> exponent;
                
                //derivedFunction = exponent * pow(number, (exponent - 1));
            }
            validFunction = true;
            break;
    } while(validFunction);
    
    std::cout << "Root Found using: ";
    while (true) {
        
        number = number - (cos(number) - number) / (-sin(number) - 1);
        std::cout << number << std::endl;
        if(abs(number - oldx) < 0.00000000001) {
            break;
        }
    }
}