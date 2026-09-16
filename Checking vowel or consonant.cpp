// #include <iostream>
// using namespace std;
// int main() {
//     char letter;
//     cout<<"Enter any letter you want: ";
//     cin >> letter;
//     switch (letter) {
//         case 'a': 
//         case 'i':  
//         case 'e':  
//         case 'o':   
//         case 'u':
//             cout<< "Vowel";
//             break;
//         default:
//             cout << "consonant";
//             break;
//     }

//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main() {
//     char letter;
//     cout << "Enter any letter you want: ";
//     cin >> letter;
    
//     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
//         cout << "Vowel";
//     } 
//     else {
//         cout << "Not a vowel";
//     }
    
//     return 0;
// }




#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    char operation;
    
    cout << "Enter your first number: ";
    cin >> a;
    cout << "Enter operation: ";
    cin >> operation;
    cout << "Enter your second number: ";
    cin >> b;
    
    if (operation == '+') {
        cout << a + b;
    }
    else if (operation == '-') {
        cout << a - b;
    }
    else if (operation == '*') {
        cout << a * b; 
    }
    else if (operation == '/') {
        if (b != 0) {
            cout << a / b; 
        } else {
            cout << "Error: Division by zero!";
        }
    }
    else {
        cout << "Invalid operation!";
    }

    return 0;
}
