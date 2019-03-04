#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

/**
* CONST
*/
const char A_MODE = 'a';
const char F_MODE = 'f';
const char M_MODE = 'm';
const char QUIT = 'q';
const char ENTER = '\n';
const char CLEAR = 'c';

const char ADDITION = '+';
const char SUBTRACTION = '-';
const char DIVISION = '/';
const char MULTIPLICATION = '*';
const char SIN = 's';
const char COS = 'c';
const char TAN = 't';
const char COT = 'o';
const char POW = 'p';
const char SQRT = 'n';
const char LOG = 'l';
#define PI 3.14159265
#define val PI/180

/**
* A_MODE
*/
double add(double, double);
double sub(double, double);
double divi(double, double);
double mul(double, double);

/**
* F_MODE
*/
double calsin(double);
double calcos(double);
double caltan(double);
double calcot(double);

/**
* M_MODE
*/
double calpow(double, double);
double callog(double);
double calsqrt(double);

/**
* print function
*/
void printResult(double);
void printInfo();


int main()
{
    printInfo();
    double result = 0;
    double number = 0;
    char op = ENTER;
    char func = ENTER;
    char flag = 'a';
    bool notQuit = true;
    cin >> result;

    while (notQuit) {
        cin >> op;
        if(op == A_MODE){
            flag = A_MODE;
            cout << "You're now in A_MODE" << endl;
            continue;
        }
        else if(op == F_MODE){
                flag = F_MODE;
                cout << "You're now in F_MODE" << endl;
                continue;
            }
        else if(op == M_MODE){
                flag = M_MODE;
                cout << "You're now in M_MODE" << endl;
                continue;
            }
        else if(op == QUIT){
            break;
        }
        else if(op == CLEAR){
            system("cls");
            printInfo();
        }
        if (flag == A_MODE)
        {
            cin >> number;
            switch (op)
            {
                case ADDITION:
                    result = add(result, number);
                    printResult(result);
                    break;
                case SUBTRACTION:
                    result = sub(result, number);
                    printResult(result);
                    break;
                case DIVISION:
                    result = divi(result, number);
                    printResult(result);
                    break;
                case MULTIPLICATION:
                    result = mul(result, number);
                    printResult(result);
                    break;
                default:
                    cout << "Something went wrong in A_MODE" << endl;
                    break;
            }
        }
        else if (flag == F_MODE)
        {
            cin >> func;
            cin >> number;
            switch (op)
            {
                case ADDITION:
                    switch(func){
                        case SIN:
                            result = add(result, calsin(number));
                            printResult(result);
                            break;
                        case COS:
                            result = add(result, calcos(number));
                            printResult(result);
                            break;
                        case TAN:
                            result = add(result, caltan(number));
                            printResult(result);
                            break;
                        case COT:
                            result = add(result, calcot(number));
                            printResult(result);
                            break;
                        default:
                            cout << "Something went wrong in F_MODE: ADDITION" << endl;
                            break;
                    }
                    break;
                case SUBTRACTION:
                    switch(func){
                        case SIN:
                            result = sub(result, calsin(number));
                            printResult(result);
                            break;
                        case COS:
                            result = sub(result, calcos(number));
                            printResult(result);
                            break;
                        case TAN:
                            result = sub(result, caltan(number));
                            printResult(result);
                            break;
                        case COT:
                            result = sub(result, calcot(number));
                            printResult(result);
                            break;
                        default:
                            cout << "Something went wrong in F_MODE: SUBTRACTION" << endl;
                            break;
                    }
                    break;
                case MULTIPLICATION:
                    switch(func){
                        case SIN:
                            result = mul(result, calsin(number));
                            printResult(result);
                            break;
                        case COS:
                            result = mul(result, calcos(number));
                            printResult(result);
                            break;
                        case TAN:
                            result = mul(result, caltan(number));
                            printResult(result);
                            break;
                        case COT:
                            result = mul(result, calcot(number));
                            printResult(result);
                            break;
                        default:
                            cout << "Something went wrong in F_MODE: MULTIPLICATION" << endl;
                            break;
                    }
                    break;
                case DIVISION:
                    switch(func){
                        case SIN:
                            result = divi(result, calsin(number));
                            printResult(result);
                            break;
                        case COS:
                            result = divi(result, calcos(number));
                            printResult(result);
                            break;
                        case TAN:
                            result = divi(result, caltan(number));
                            printResult(result);
                            break;
                        case COT:
                            result = divi(result, calcot(number));
                            printResult(result);
                            break;
                        default:
                            cout << "Something went wrong in F_MODE: DIVISION" << endl;
                            break;
                    }
                    break;
                default:
                    cout << "Something went wrong in F_MODE" << endl;
                    break;
            }
        }
        else if(flag == M_MODE){
            double temp = 0;
            cin >> func >> number;
            switch(op){
                case ADDITION:
                    switch(func){
                    case POW:
                        temp = 0;
                        cin >> temp;
                        result = add(result, calpow(number, temp));
                        printResult(result);
                        break;
                    case SQRT:
                        result = add(result, calsqrt(number));
                        printResult(result);
                        break;
                    case LOG:
                        result = add(result, callog(number));
                        printResult(result);
                        break;
                    default:
                        cout << "Something went wrong in M_MODE: ADDITION" << endl;
                    }
                    break;
                case SUBTRACTION:
                    switch(func){
                    case POW:
                        temp = 0;
                        cin >> temp;
                        result = sub(result, calpow(number, temp));
                        printResult(result);
                        break;
                    case SQRT:
                        result = sub(result, calsqrt(number));
                        printResult(result);
                        break;
                    case LOG:
                        result = sub(result, callog(number));
                        printResult(result);
                        break;
                    default:
                        cout << "Something went wrong in M_MODE: SUBTRACTION" << endl;
                        break;
                    }
                    break;
                case MULTIPLICATION:
                    switch(func){
                    case POW:
                        temp = 0;
                        cin >> temp;
                        result = mul(result, calpow(number, temp));
                        printResult(result);
                        break;
                    case SQRT:
                        result = mul(result, calsqrt(number));
                        printResult(result);
                        break;
                    case LOG:
                        result = mul(result, callog(number));
                        printResult(result);
                        break;
                    default:
                        cout << "Something went wrong in M_MODE: MULTIPLICATION" << endl;
                        break;
                    }
                    break;
                case DIVISION:
                    switch(func){
                    case POW:
                        temp = 0;
                        cin >> temp;
                        result = divi(result, calpow(number, temp));
                        printResult(result);
                        break;
                    case SQRT:
                        result = divi(result, calsqrt(number));
                        printResult(result);
                        break;
                    case LOG:
                        result = divi(result, callog(number));
                        printResult(result);
                        break;
                    default:
                        cout << "Something went wrong in M_MODE: DIVISION" << endl;
                        break;
                    }
                    break;
                default:
                    cout << "Something went wrong in M_MODE" << endl;
                    break;
            }
        }
    }
    cout << "Thanks for using my Calculator!" << endl;
    return 0;
}

/**
* A_MODE
*/
double add(double num1, double num2)
{
    return num1 + num2;
}

double sub(double num1, double num2)
{
    return num1 - num2;
}

double divi(double num1, double num2)
{
    return num1/num2;
}

double mul(double num1, double num2)
{
    return num1*num2;
}

/**
* F_MODE
*/
double calsin(double x){
    return sin(x*val);
}

double calcos(double x){
    return cos(x*val);
}

double caltan(double x){
    return calsin(x)/calcos(x);
}

double calcot(double x){
    return 1/caltan(x);
}

/**
* M_MODE
*/
double calpow(double num1, double num2){
    return pow(num1, num2);
}

double callog(double num1){
    return log(num1);
}

double calsqrt(double num1){
    return sqrt(num1);
}

/**
* print function
*/
void printResult(double num)
{
    cout << "= " << num << endl;
}

void printInfo(){
    cout << "**** SIMPLE CALCULATOR APP ****" << endl << endl;
    cout << "- PRESS A TO ACCESS A_MODE" << endl;
    cout << "- PRESS F TO ACCESS F_MODE" << endl;
    cout << "- PRESS M TO ACCESS M_MODE" << endl;
    cout << "- PRESS Q TO QUIT" << endl;
    cout << "- PRESS C TO CLEAR THE SCREEN" << endl;
    cout << "- SIN: s" << endl;
    cout << "- COS: c" << endl;
    cout << "- TAN: t" << endl;
    cout << "- COT: o" << endl;
    cout << "- POW: p" << endl;
    cout << "- SQRT: r" << endl;
    cout << "- LOG: l" << endl << endl;
}
