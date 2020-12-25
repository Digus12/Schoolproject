#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
string countries[] = {"Egypt", "Switzerland", "Argentina", "Spain", "Portugal", "Luxemburg", "India", "Germany", "China", "United States of America", "Guatemala", "Croatia", "Panama", "Nicargoa", "Pakistan"};

int N = sizeof(countries)/sizeof(countries[0]); //Get the array size
cout<<"List of Countries unsorted"<<endl;
for(int i = 0; i < N; i++){
cout << countries[i] << " ";
}
cout<<endl;
sort(countries,countries+N);
cout<<"\nList of Countries after sorting"<<endl;
for(int i = 0; i < N; i++)
{
cout << countries[i] << " ";
}
cout<<endl;
return 0;
}
