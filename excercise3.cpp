#include <random>
#include <algorithm>
#include "math.h"
#include<iostream>
#include <vector>
using namespace std;


int main()
{
  
vector<int> numbers;
bool map[100] = {false};
int val, i=0,numAdded = 0;
  
uniform_int_distribution<> dist(0, RAND_MAX);
  
while (numAdded < 20) {
val = floor(rand() % 100);
if(map[val] == false){
numbers.push_back(val);
i++;
numAdded++;
map[val] = true;
}
}

cout << "\nSequence before sorting : " <<endl;
for (int x=0; x < 20; x++)
{
cout<< numbers[x] << " ";
}
  
std::sort(numbers.begin(), numbers.end());
cout<< endl;
cout << "\nSequence after sorting : " <<endl;
  
for (int x=0; x < 20; x++)
{
cout<< numbers[x] << " ";
}
  
//asked to add additional element to the list
while (numAdded < 21) {
val = floor(rand() % 100);
if(map[val] == false){
numbers.push_back(val);
i++;
numAdded++;
map[val] = true;
}
}
cout<<"\n\n\nUnsorted sequence after adding additional element: "<<endl;
for (int x=0; x < 21; x++)
{
cout<< numbers[x] << " ";
}
  
std::sort(numbers.begin(), numbers.end());
cout<< endl;
cout << "\nSorted Sequence after adding additional element : " <<endl;
  
for (int x=0; x < 21; x++)
{
cout<< numbers[x] << " ";
}
  
return 0;
}
