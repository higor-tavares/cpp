#include <iostream>

using namespace std;

class GradeBook{
    public:
        void displayMessage(){
            cout << "Welcome to the Gradebook!" << endl;
        }
};

int main(){
    GradeBook mybook;
    mybook.displayMessage();
    return 0;
}