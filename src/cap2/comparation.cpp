#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
    
    int n1, n2;
    cout << "Enter two numbers to compare: ";
    cin >> n1 >> n2;

    if(n1 == n2)
        cout << n1 << " = " << n2 << endl;
    else if(n1 > n2)
        cout << n1 << " > " << n2 << endl;
    else
        cout << n1 << " < " << n2 << endl;

    return 0;
}