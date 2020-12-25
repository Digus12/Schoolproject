
#include<iostream>

#include<cstdlib>

#include<iomanip>

using namespace std;

int main()

{

int n;

cout<<"Enter n(must be odd number): ";

cin>>n;

if(n%2==0)

{

cout<<"Invalid input!";

exit(0);

}

int a[n][n];

int size=n*n;

int curRow,curCol,row=0,col=0,val=0;

//initializing

for(int i=0;i<n;i++)

{

for(int j=0;j<n;j++)

{

a[i][j]=-1;

}

}

//this variable indicates whether array is totally filled or not

int isFilled=0;

while(isFilled==0)

{

//for 1st time value insertion

if(val==0)

{

val++;

row=n-1;

col=n/2;

val=1;

a[row][col]=val;

}

else

{

val++;

curRow=row;

curCol=col;

//computing next row and col

row=row+1;

if(row>=n)

row=row%n;//wrapping up

col=col+1;

if(col>=n)

col=col%n;//wrapping up

//if square is not filled with value

if(a[row][col]==-1)

a[row][col]=val;

else

{

//storing current row and col

row=curRow;

col=curCol;

//flag variable to indicate if insertion is made or not

int flag=0;

//while loop will continue untill

//insertion is made into a empty square

while(flag==0)

{

row=row-1;

if(row==-1)//checking for extream row

row=n-1;

if(a[row][col]==-1)

{

a[row][col]=val;

flag=1;//insertion made successfully

}

}

}

}

//checking if array is totally filled

if(val==size)

isFilled=1;

}

//display square

cout<<"The magic square of order "<<n<<" :"<<endl;

for(int i=0;i<n;i++)

{

for(int j=0;j<n;j++)

{

cout<<setw(3)<<a[i][j]<<" ";

}

cout<<endl;

}

return 0;

}
