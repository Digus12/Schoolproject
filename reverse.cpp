#include <iostream>
using namespace std;


string reverse(string str){
    if(str.length()<=1){
        return str;
    }
    else{
        return reverse(str.substr(1,str.length()-1))+str[0];
    }
}

int main(){
    cout<<reverse("flow");
    return 0;
}
