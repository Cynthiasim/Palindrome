//  Cynthia Simon
//  csimon2@leomail.tamuc.edu
//  Assignment #3
//  Palindromes

#include <string>
#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool isPalindrome(string str)  //isPalinfrome function
{
    stack<char> s; //creates a stack of characters
    string modified;
    
    for (int i = 0; i < str.size(); ++i) //traverses stack
    {
        if (isalpha(str[i]))
        {
            s.push((char) tolower(str[i])); //pushes caracters on stack
            modified += (char) tolower(str[i]);
        }
    }
    
    string reversed;
    
    while (!s.empty())
    {
        reversed += s.top(); //accesses element on top of stack
        s.pop(); //pops it off
    }
    
    return modified == reversed;
}

int main()  //main function
{
    string line;
    cout << "Enter a line: ";
    getline(cin, line);
    
    if (isPalindrome(line))
        cout << "This string is a palindrome." << endl;
    else
        cout << "This string is not a palindrome." << endl;
    
    return 0;
}

