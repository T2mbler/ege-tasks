#include <iostream>
#include <cmath>

double add (double num1, double num2) {
    
    return num1+num2;
}

double sub (double num1, double num2) {

    return num1-num2;
}

double div (double num1, double num2) {

    return num1/num2;
}

double mul (double num1, double num2) {

    return num1*num2; 
}

double sqrt_ (double num1) {

    return sqrt(num1);
}

void ifClause (char op) { 
    using namespace std;

    if (op == '+'){
        cout << "You have   chosen the addition operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << add (num1, num2); 

    } else if (op == '-'){
        cout << "You have chosen the subtraction operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << sub (num1, num2);

    } else if (op == '/') {
        cout << "You have chosen the division operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << div (num1, num2);  

    } else if (op == '*') {
        cout << "You have chosen the multiplication operation \n";
        cout << "Enter the first number \t";
        double num1 = 0;
        cin >> num1;
        cout << "Enter the second number\t";
        double num2 = 0;
        cin >> num2;
        cout << "Your result \t" << mul (num1, num2);  

    } else if (op == 's') {
        cout << "You have chosen the square root extraction operation \n";
        cout << "Enter a number \t";
        double num1 = 0;
        cin >> num1; 
        cout << "Your result \t" << sqrt_ (num1);
    }
}

bool checkOp(char op) {
    if (op == '+' || op == '-' || op == '/' || op == '*' || op == 's') {
        return true;
    } else {
        return false;
    }
}

int main(){
    using namespace std;

    cout << "Enter the operation \n" 
         << "'+' -- addition \n" << "'-' -- subtraction \n" << "'/' -- division \n" << "'*' -- multiplication \n" << "'s' -- square root extraction \n";
    char op; cin >> op;
    if (checkOp(op)) {
        ifClause(op);
    } else {
        cout << "Invalid operation. Try again.\n";
        while (op != '+' && op != '-' && op != '/' && op != '*' && op != 's') {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "Enter operation(+ - * / s): ";
            cin >> op;
        }
    }
    
    return 0;
}
