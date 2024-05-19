#include <iostream>
using namespace std;

int getLength(char ch[]) {
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char ch[20];
    
    cout << "Enter a string: ";
    cin.getline(ch, 20);
    
    int length = getLength(ch);
    
    cout << "Length of the string is: " << length << endl;
    
    return 0;
}
