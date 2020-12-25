#include <iostream>
#include <vector>
#include <string>
using namespace std;

enum Condition
{
   New, Used, Reconditioned
};

class Product
{
public:
   Product()
   {
       productId = "";
       productDescription = "";
       soldBy = "";
       price = 0;
       condition = New;
   }
   Product(string id, string desc, string soldBy, double price, Condition con);
   ~Product() {}
   void setProductId(string);
   void setPrice(double);
   void setSoldBy(string);
   void setCondition(Condition);
   void setProductDescription(string);
   void printInfo();
private:
   string productId;
   string productDescription;
   string soldBy;
   double price;
   Condition condition;
};

void Product::setProductId(string id)
{
   this->productId = id;
}
void Product::setPrice(double price)
{
   this->price = price;
}
void Product::setSoldBy(string soldBy)
{
   soldBy = "";
}
void Product::setCondition(Condition con)
{
   this->condition = con;
}
void Product::setProductDescription(string desc)
{
   this->productDescription = desc;
}
Product::Product(string id, string desc, string soldBy, double price, Condition con)
{
   this->condition = con;
   this->price = price;
   this->productDescription = desc;
   this->productId = id;
   this->soldBy = soldBy;
}
void Product::printInfo()
{
   cout << productDescription << endl;
   cout << "Sold by: " << soldBy << endl;
   cout << "Sold by: " << price<<endl;
   cout << "Condition: ";
   if (condition == Condition::New)
       cout << "New" << endl;
   else if (condition == Condition::Used)
       cout << "Used" << endl;
   else
       cout << "Reconditioned" << endl;
}

int main()
{
   vector<Product> products;
   products.push_back(Product("1001", "Marianne", "Amazon.com Services LLC", 7.99, Condition::New));
   products.push_back(Product("1002", "Pax, Pennypacker, Sara", "Amazon.com Services LLC", 5.89, Condition::New));
   products.push_back(Product("1003", "The River (A Hatchet Adventure) Paulsen, Gary", "Amazon.com Services LLC", 8.49, Condition::New));
   products.push_back(Product("1004", "Brian's Return (A Hatchet Adventure)", "Amazon.com Services LLC", 7.19, Condition::New));
   products.push_back(Product("1005", "A Long Walk to Water: Based on a True Story, Park, Linda Sue", "Amazon.com Services LLC", 5.29, Condition::New));

   vector<Product>::iterator it;
   for (it = products.begin();
       it != products.end(); ++it) {// For each friend, print out their info it->print

       it->printInfo();
   }
   system("pause");
   return 0;
}
