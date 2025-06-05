#include <bits/stdc++.h>
using namespace std;

int main() {
    string expression, operand1 = "", operand2 = "", operatorPart = "";
    cin >> expression;

    string leftOperand = "", rightOperand = "", operatorSection = "";
    long indexEqual = 0, indexOperator = 0, indexRate = 0;
    for (int i = 0; i < expression.size(); i++) {
        if (expression[i] == '=') {
            indexEqual = i;
            break;
        }
        else {
            leftOperand += expression[i];
        }
    }
    cout << "Left Operand: " << leftOperand << endl;

    string intermediateSum = "";
    for (int i = indexEqual + 1; i < expression.size(); i++) {
        if (expression[i] == '*' || expression[i] == '+' || expression[i] == '-' || expression[i] == '/') {
            indexOperator = i;
            break;
        }
        else {
            intermediateSum += expression[i];
        }
    }
    operand1 = intermediateSum;
    cout << "Operand 1 (before operators): " << operand1 << endl;

    operatorSection = "";
    for (int i = indexOperator; i < expression.size(); i++) {
        if (expression[i] == '*' || expression[i] == '+' || expression[i] == '-' || expression[i] == '/') {
            operatorSection += expression[i];
        }
        else {
            break;
        }
    }
    cout << "Operator section: " << operatorSection << endl;

    string rightOperandValue = "";
    for (int i = indexOperator + operatorSection.size(); i < expression.size(); i++) {
        rightOperandValue += expression[i];
    }
    rightOperand = rightOperandValue;
    cout << "Right Operand (after operator): " << rightOperand << endl;
    cout << "MOVF " << operand1 << ", R2" << endl;
    cout << "MULF 50, R2" << endl;
    cout << "MOVF " << rightOperand << ", R1" << endl;
    cout << "ADDF R2, R1" << endl;
    cout << "MOVF R1, " << leftOperand << endl;

    return 0;
}
