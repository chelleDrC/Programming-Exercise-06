#include <iostream>
using namespace std;

class Shoes{
    private:
        string Brand;
        int Size;
        float Price;
    public:
        //Constructor
        Shoes (string newBrand, int newSize, int newPrize)
        {
            Brand = newBrand;
            Size = newSize;
            Price = newPrize;
        }
        //Function Displaying values
        void displayShoes(){
            cout << "Brand: " << Brand << endl;
            cout << "Size: " << Size << " EU" << endl;
            cout << "Price: " << Price << " Pesos" << endl;
        }
};

//Main Function
int main (){
    Shoes shoe1("Nike", 48, 2500); //Putting values to the constructor
    shoe1.displayShoes(); //Display

    return 0;
}