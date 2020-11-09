#include <iostream>
#include <cstdlib>
#include "PotatoSystem.h"

using namespace std;

bool kernel_enabled = true;

void kernel_details() {
    cout << kernel_name() << " " << kernel_version() << endl << endl;
}

void kernel_help() {
    system("CLS");
    kernel_details();
    cout << "------------ Kernel_Commands ------------" << endl;
    cout << "help -- this is a self explaniatory command" << endl;
    cout << "potato -- this will display a randomly generated potato" << endl;
    cout << "cls -- this will clear the screen" << endl;
    cout << "fortnite -- you are a terrible person" << endl;
    cout << "exit -- exit the kernel" << endl << endl;
}

void kernel_potato() {
    int y = rand() % 10 + 3;
    int x = rand() % 7 + 3;

    cout << endl;

    for (int i=1; i <= y; i++) {
        for (int k=1; k <= x; k++) {
            cout << "O";
        }
        cout << endl;
    }

    cout << endl;
}

void kernel_cls() {
    system("CLS");
    kernel_details();
}

void kernel_suicide() {
    system("cls");
    kernel_details();
    system("Start https://www.youtube.com/watch?v=5bfE9vjK29M");
}

void kernel_exit() {
    kernel_enabled = false;
}

void kernel_commands(string input) {
    if (input == "help") {
        kernel_help();
    } else if (input == "potato") {
        kernel_potato();
    } else if (input == "cls") {
        kernel_cls();
    } else if (input == "fornite") {
        kernel_suicide();
    } else if (input == "exit") {
        kernel_exit();
    }
}

void kernel_input() {
    string input;

    cin >> input;

    kernel_commands(input);
}

int main()
{
    kernel_details();

    while (kernel_enabled) {
        kernel_input();
    }

}

