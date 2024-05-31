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
        //Function to Display
        void displayShoes(){
            cout << "Brand: " << Brand << endl;
            cout << "Size: " << Size << " EU" << endl;
            cout << "Price: " << Price << " Pesos" << endl;
        }
};