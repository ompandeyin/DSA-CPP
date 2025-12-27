#include <iostream>
using namespace std;

int main() {
    char str[] = "apna college";

    int start = 0;
    int end = 0;

    // find length
    while (str[end] != '\0') {
        end++;
    }
    end--; // last character index

    // reverse using two pointers
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    cout << "Reversed string: " << str << endl;
    return 0;
}
