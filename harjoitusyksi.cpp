#include <iostream>

void calcSum(int a, int b);
void calcDiv(int a, int b);

int retSum(int a, int b);
float retDiv(float a, float b);

int main(){
    int a,b;
    


    std::cin >> a;
    //std::cout << a;

    std::cin >> b;
    //std::cout << b;

    calcSum(1,5);
    calcDiv(1,5);


    retSum(1,1);
    retDiv(1.0f,1.0f);

}

void calcSum(int a, int b){
    std::cout << a + b;
}

void calcDiv(int a, int b){
    int result = 0;

    result = a / b;

    if (result == 0){
        std::cout << "divided by zero: ERROR " << '\n';

    }
    else {
        std::cout << a / b << '\n';
    }

}

int retSum(int a, int b){
    return a + b;
}

float retDiv(float a, float b){
    float result;

    result = a / b;

    if (result != 0.0f){
        return result;
    }
    else {
        return 0.0f;
        std::cout << "divided by zero: ERROR " << '\n';
    }

}


