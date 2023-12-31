//Ascii Subsequences

#include <bits/stdc++.h>
using namespace std;

void AsciiSubsequences(string str, int i, string curr, int &cnt){
    //base case
    if(i == str.size()){
        cnt++;
        cout << curr << " ";
        return;
    }

    //recursive case
    //1--> ignore the ith char
    AsciiSubsequences(str, i+1, curr, cnt);
    //2--> take the ith char and store in the op jth char 
    AsciiSubsequences(str, i+1, curr  + str[i], cnt);
    
    // Include the ASCII value to curr

    string ascii;
    ascii = to_string((int)str[i]);
    AsciiSubsequences(str, i+1, curr + ascii, cnt);
}

int main(){
    string s;
    cin >> s;

    int cnt = 0;
    AsciiSubsequences(s, 0, "", cnt);
    cout << '\n' << cnt;

    return 0; 
}

// Take as input str, a string. We are concerned with all the possible ascii-subsequences of str. E.g. “ab” has following ascii-subsequences “”, “b”, “98”, “a”, “ab”, “a98”, “97”, “97b”, “9798”

// a. Write a recursive function which returns the count of ascii-subsequences for a given string. Print the value returned.

// b. Write a recursive function which prints all possible ascii-subsequences for a given string (void is the return type for function).

// Input Format
// Enter the string

// Constraints
// None

// Output Format
// Display the number of ASCII-subsequences and display all the ASCII- subsequences

// Sample Input
// ab
// Sample Output
//  b 98 a ab a98 97 97b 9798
// 9
