//Write a program to check the student is present or not.
//ans:-
#include<iostream>
using namespace std;
int main(){
int students[]= { 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194, 195, 196};
int n;
    bool isPresent = false;
    
    
    cout << "Enter the roll number: ";
    cin >> n;
    
    
    for (int i = 0; i < sizeof(students)/sizeof(students[0]); i++) {
        if (students[i] == n) {
            isPresent = true;
            break;  
        }
    }

    
    if (isPresent) {
        cout << "The student is present!!" << endl;
    } else {
        cout << "The student is absent!!" << endl;
    }

    return 0;
}
