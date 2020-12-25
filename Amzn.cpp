#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <iomanip>
using namespace std;

// Add a dollar sign and limit to two decimals
// A more robust method would support multiple currencies
// and decimal representations
string getCurrencyFormat(double amount) {
    char buffer[50];
    sprintf(buffer, "$%.2f", amount);
    string formattedString = buffer;
    return formattedString;
}
// Converts a time_t value to a string
// This is an older and slightly painful way of doing this.
// I welcome you using the cronos library for example instead
string getFormattedDate(time_t date) {
    struct tm *tmp;
    string formattedDate;
    char MY_TIME[50];
    time(&date);
    tmp = localtime(&date);
    strftime(MY_TIME, sizeof(MY_TIME), "%b %d, %Y %H:%M", tmp);
    formattedDate = MY_TIME;
    return formattedDate;
}



enum Condition {
    New, Used, Reconditioned
};

enum ShipmentStatus {
    InProcess, Shipped, Delivered
};

enum ShipmentSpeed {
    OneDay, TwoDay, Mail
};

enum PaymentType {
    CreditCard, BankTransfer
};


class Customer {
private:
    string customerId;
    string customerName;
    string streetAddress;
    string cityStateZip;
    string country;
public:
    Customer(string customerId, string customerName, string streetAddress, string cityStateZip, string country) {
        this->customerId = customerId;
        this->customerName = customerName;
        this->streetAddress = streetAddress;
        this->cityStateZip = cityStateZip;
        this->country = country;
    }

    Customer() {}

    string getCustomerName() {
        return customerName;
    }

    string getStreetAddress() {
        return streetAddress;
    }

    string getCityStateZip() {
        return cityStateZip;
    }

    string getCountry() {
        return country;
    }
};
class Orderitem {


};

    class Product {
    public:
        Product() {
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

    void Product::setProductId(string id) {
        this->productId = id;
    }

    void Product::setPrice(double price) {
        this->price = price;
    }

    void Product::setSoldBy(string soldBy) {
        soldBy = "";
    }

    void Product::setCondition(Condition con) {
        this->condition = con;
    }

    void Product::setProductDescription(string desc) {
        this->productDescription = desc;
    }

    Product::Product(string id, string desc, string soldBy, double price, Condition con) {
        this->condition = con;
        this->price = price;
        this->productDescription = desc;
        this->productId = id;
        this->soldBy = soldBy;
    }

    void Product::printInfo() {
        cout << productDescription << endl;
        cout << "Sold by: " << soldBy << endl;
        cout << "Sold by: " << price << endl;
        cout << "Condition: ";
        if (condition == Condition::New)
            cout << "New" << endl;
        else if (condition == Condition::Used)
            cout << "Used" << endl;
        else
            cout << "Reconditioned" << endl;
    }

    int main() {
        double price = 99.99;
        string creditCardNumber =  "132-444-2347-7744";
        string shortcc = creditCardNumber.substr(creditCardNumber.length()-4);
        cout << "****" + shortcc << "\n";
        printf("$%.2f\n", price);
        const char* shipmentStatusNames[] = {"InProcess", "Shipped", "Delivered"};
        cout << shipmentStatusNames[InProcess] << endl;

        tm t = {};
        istringstream ss("10/25/2020 12:35");
        ss >> get_time(&t, "%m/%d/%Y %H:%M");

        // Test if string is converted to date
        if (ss.fail()) {
            cout << "Parse failed\n";
        } else {
            cout << put_time(&t, "%c") << "\n";
            cout << put_time(&t, "%b %d, %Y") << "\n";
        }
        vector<Product> products;
        Customer customer = Customer("221", "Michael Whitehead", "1298 Hares Hill Road", "Kimberton, PA 19442",
                                     "United States");
        OrderDetailsTester odt;
        Order order = odt.createOrder(orderItems, customer);

        odt.createShipment(order);
        odt.createPayment(order);
        odt.printOrderDetails(order);
        odt.printInvoice(order);
        vector<OrderItem> createOrderItems(vector<Product> products) {
            vector<OrderItem> orderItems;
            //  Pick odd-numbered products for order.  qty will be odd number.
            for (int i = 0; i <= products.size() - 1; i++) {
                if (i % 2 != 0) {
                    orderItems.push_back(OrderItem(products.at(i), i));
                }
            }
            return orderItems;
        }






        products.push_back(Product("1001", "Marianne", "Amazon.com Services LLC", 7.99, Condition::New));
        products.push_back(Product("1002", "Pax, Pennypacker, Sara", "Amazon.com Services LLC", 5.89, Condition::New));
        products.push_back(
                Product("1003", "The River (A Hatchet Adventure) Paulsen, Gary", "Amazon.com Services LLC", 8.49,
                        Condition::New));
        products.push_back(Product("1004", "Brian's Return (A Hatchet Adventure)", "Amazon.com Services LLC", 7.19,
                                   Condition::New));
        products.push_back(Product("1005", "A Long Walk to Water: Based on a True Story, Park, Linda Sue",
                                   "Amazon.com Services LLC", 5.29, Condition::New));


        vector<Product>::iterator it;
        for (it = products.begin();
             it != products.end(); ++it) {// For each friend, print out their info it->print

            it->printInfo();
        }



        system("pause");
        return 0;
    };
`
