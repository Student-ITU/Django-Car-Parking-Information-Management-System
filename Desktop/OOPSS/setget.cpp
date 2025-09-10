#include<iostream>
#include<string.h>
using namespace std;
class Book{
    private:
        int n;
        int page;
        float price;
        char name[40];
    public:
        void ip(int n){
            // cin >> n;
            cout << "The Value is: " << n << endl;

        }
        void setPage(int p){
            page = p;

        }

        void setPrice(float pr){
            price = pr;

        }

        void setName(char *n){
              strcpy(name, n);
            
           

        }

        void display(){
            
            cout << "The page is: " << page << endl;
            cout << "The price is: " << price << endl;
            cout << "The name is: " << name << endl;
        
        }

        int getPage(){
            return page;
        }

        float getPrice(){
            return price;
        }

        string getName(){
            return name;
        }


};

int main(){
    Book b1, b2, b3, b4;
    b4.ip(11);
    cout << "Book 1 Data:" << endl;
    b1.setPage(100);
    b1.setPrice(100.54);
    b1.setName("Lonely");
    b1.display();

    cout << endl;

    cout << "Book 2 Data:" << endl;
    b2.setPage(200);
    b2.setPrice(2330.54);
    b2.setName("Lovely");
    b2.display();

    cout << endl;

    b3.setPage(2002);
    b3.setPrice(23.543);
    b3.setName("Lovelywww");

    cout << "Book 3 data is:" << endl;
    cout <<"Page is: " << b3.getPage() << endl;
    cout <<"Price is: " << b3.getPrice() << endl;
    cout <<"Name is: " << b3.getName() << endl;

    cout << endl;

    cout << "Book 2 data is:" << endl;
    cout <<"Page is: " << b2.getPage() << endl;
    cout <<"Price is: " << b2.getPrice() << endl;
    cout <<"Name is: " << b2.getName() << endl;



    
        return 0;
}
