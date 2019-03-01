#include <iostream>
#include <stdlib.h>
#include "aMode.h"
#include "fMode.h"
#include "mMode.h"
#include <stdio.h>

using namespace std;

#define ADDITION '+'
#define SUBTRACTION '-'
#define DIVISION '/'
#define MULTIPLICATION '*'
#define CLEAR 'c'
#define SIN 's'
#define COS 'c'
#define TAN 't'
#define COT 'o'
#define POW 'p'
#define SQRT 'n'

const char QUIT = 'q';
const char ENTER = '\n';
const char A_MODE = 'a';
const char F_MODE = 'f';
const char M_MODE = 'm';

void printResult(double);

int main()
{
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
                    cout << "Something went wrong!!!" << endl;
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
                            cout << "Something went wrong!!!" << endl;
                            break;
                    }
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
                            cout << "Something went wrong!!!" << endl;
                            break;
                    }
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
                            cout << "Something went wrong!!!" << endl;
                            break;
                    }
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
                            cout << "Something went wrong!!!" << endl;
                            break;
                    }
            }
        }
        else if(flag == M_MODE){
        }
    }

    cout << "Thanks for using my Calculator!" << endl;

    return 0;
}

void printResult(double num)
{
    cout << "= " << num << endl;
}
