#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int start = 0;
    int end = s.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (s[start] != s[end]) {
            isPalindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}


// class Solution {
// public:
//     bool isPalindrome(vector<char>& s) {
//         int start = 0;
//         int end = s.size() - 1;

//         while (start < end) {
//             if (s[start] != s[end]) {
//                 return false;   // not a palindrome
//             }
//             start++;
//             end--;
//         }
//         return true;  // palindrome
//     }
// };


