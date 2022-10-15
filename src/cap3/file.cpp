#include <iostream>
#include <cstdio>
#include <string>
#include <fstream>

using namespace std;

void write(string text, string filename){
    fstream file;
    file.open(filename, ios_base::out);
    file << text;
    file.close();
}

int main(){
    string name;
    cout << "Qual seu nome: ";
    getline(cin, name);
    write(name, "username.txt");
    return 0;
}