#include<bits/stdc++.h>
using namespace std;
//helper function to reverse a string
string reverse(string ph)
{
    string temp="";
    for(int i=0;i<ph.length();i++)
    {
        temp=ph[i]+temp;
    }
    return temp;
}
bool isPallindrome(string phrase)
{
    //remove spaces and punctuations from the phrase
    regex regexp("[^a-zA-Z]");
    phrase = regex_replace(phrase,regexp,"");

    //change the result to lowercase
    for(int i=0;phrase[i]!='\0';i++)
    {
        phrase[i]=tolower(phrase[i]);
    }

    /*reverse the phrase and store
    the reversed phrase in a temporary variable */
    string temp = reverse(phrase);

    //compare temp and phrase
    //if both are equal return true
    if(temp.compare(phrase)==0)
        return true;
        //else return false
    else
        return false;
}
int main()
{
    while(true)
    {
        string phrase;
        //prompt the user to give input
        cout<<"Enter a string\n";
        getline(cin,phrase);
        //invoke the function and display the output
        if(isPallindrome(phrase))
            cout<<"Input string is a pallindrome\n";
        else
            cout<<"Input string is NOT a pallindrome\n";
    }
}
