#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
vector<string> countries = {"Egypt", "Switzerland", "Argentina", "Spain", "Portugal",
   "Luxemburg", "India", "Germany", "China", "United States of America", "Guatemala", "Croatia", "Panama", "Nicargoa", "Pakistan"};

cout<<"List of Countries unsorted"<<endl;
for(int i = 0; i < countries.size(); i++){
cout << countries[i] << " ";
}
cout<<endl;
sort(countries.begin(), countries.end());
cout<<"\nList of Countries after sorted"<<endl;
for(int i = 0; i < countries.size(); i++)
{
cout << countries[i] << " ";
}
cout<<endl;
//asked to add additional element to the list
countries.push_back("Afghanistan");
cout<<"\n\nList of Countries unsorted after addition of new country Afghanistan"<<endl;
for(int i = 0; i < countries.size(); i++){
cout << countries[i] << " ";
}
  
sort(countries.begin(), countries.end());
cout<<endl;
cout<<"\nList of Countries sorted after addition of new country Afghanistan"<<endl;
for(int i = 0; i < countries.size(); i++)
{
cout << countries[i] << " ";
}
return 0;
}
