#include<iostream.h>
#include<conio.h>

void squ() //suare function
{
   int l,area,paremter;
cout<<"enter the length of side ofsquare:"<<endl;
cin>>l;
area=l*l;
paremter=4*l;
cout<<"area of squareis:"<<area<<endl;
cout<<"The parimeter of squareis:"<<paremter<<endl;
}
   
void rect() //rectangle function
{
    int w,l,area,parameter;
    cout<<"Enter the length of therectangle:"<<endl;
   cin>>l;
   area=l*w;
   parameter=2*(l*w);
   cout<<"area of rectangleis:"<<area<<endl;
   cout<<"The parimeter ofrectangleis:"<<parameter<<endl;
}

void cir() //circle function
{
   int r,area,circum;
   cout<<"Enter the radius ofcircle"<<endl;
   cin>>r;
   area=3.14*r*r;
   circum=2*3.14*r;
   cout<<"The area of circleis:"<<area<<endl;
   cout<<"The circumference of circleis"<<circum<<endl;
}
main() //main menufunction
{
    int ch;
   clrscr();
   do
     {
        cout<<"1.circle 2.square 3.rectangle 4Exit"<<endl;
        cout<<"Enter yourchoice"<<endl;
       cin>>ch;
        if(ch==1)
        cir();
      else if(ch==2)
       squ();
      else if(ch==3)
       rect();
      else if(ch==4)
     break;
      else
      cout<<"Please enter the rightchoice"<<endl;

   }
while(ch!=4);
return 0;
}
