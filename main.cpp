#include <iostream>
#include <stdlib.h>
#include "aMode.h"
#include <stdio.h>

using namespace std;

#define ADDITION '+'
#define SUBTRACTION '-'
#define DIVISION '/'
#define MULTIPLICATION '*'
#define CLEAR 'c'

const char QUIT = 'q';
const char ENTER = '\n';
const char A_MODE = 'a';
const char F_MODE = 'f';
const char M_MODE = 'm';

void printResult(int);

int main()
{
//    cout << "Press Q to Exit!" << endl;
//    int firstNum = 0, secondNum = 0;
//    cin >> firstNum;
//    char op;
//    while(true)
//    {
//        int result;
//        cin >> op;
//        if(op == 'c' || op == 'C')
//            system("cls");
//        else
//            if(op == 'q' || op == 'Q')
//                system("cls");
//        cin >> secondNum;
//        switch(op){
//            case ADDITION:
//                result = add(firstNum, secondNum);
//                printResult(result);
//                break;
//            case SUBTRACTION:
//                result = sub(firstNum, secondNum);
//                printResult(result);
//                break;
//            case DIVISION:
//                result = divi(firstNum, secondNum);
//                printResult(result);
//                break;
//            case MULTIPLICATION:
//                result = mul(firstNum, secondNum);
//                printResult(result);
//                break;
//            default:
//                cout << "Something went wrong!!!" << endl;
//                break;
//        }
//        fflush(stdin);
//        firstNum = result;
//    }

    double result = 0
    double number = 0;
    cout << result << endl;
    char op = ENTER;
    char flag = 'a';
    bool notQuit = true;
    while (notQuit) {
        if (flag == 'a')
        {
            switch (op)
            {
                case ADDITION:
                    result = add(firstNum, secondNum);
                    printResult(result);
                    break;
                case SUBTRACTION:
                    result = sub(firstNum, secondNum);
                    printResult(result);
                    break;
                case DIVISION:
                    result = divi(firstNum, secondNum);
                    printResult(result);
                    break;
                case MULTIPLICATION:
                    result = mul(firstNum, secondNum);
                    printResult(result);
                    break;
                default:
                    cout << "Something went wrong!!!" << endl;
                    break;
            }
        }
        else if (flag == 'f')
        {
            switch (op)
            {
            }
        }
    }

    cout << "Thanks for using my Calculator!" << endl;

    return 0;
}

void printResult(int num)
{
    cout << "= " << num;
}
