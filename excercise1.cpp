#include <algorithm>
#include "math.h"
#include<iostream>
using namespace std;


int main()
{
	bool map[100] = {false};
	int numbers[20],i=0, val;
	const int SIZE = 20;
	int numAdded = 0;
	while (numAdded < 20) {
		val = floor(rand() % 100);
		// cout<< "random value generated is : " << val <<endl;
		//   
		//   if(map[val] == false){
		//   numbers[i] = val;
		//   i++;
		//   numAdded++;
		//   map[val] = true;
		//   }
		//     
		//     }
		//     cout << "Sequence before sorting : " <<endl;
		//     for(int j=0; j<20; j++){
		//     cout << numbers[j] << " ";
		//     }
		//     cout<< endl;
		//     size_t size = sizeof(numbers) / sizeof(numbers[0]);
		//     sort(numbers, numbers + size);
		//     cout << "Sequence after sorting : " <<endl;
		//     for(int j=0; j<20; j++){
		//     cout << numbers[j] << " ";
		//     }
		//
		//     return 0;
		//     }
