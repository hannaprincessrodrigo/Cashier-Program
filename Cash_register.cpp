//cashier register
#include <iostream>
using namespace std;

int main(){
    char question1[] = "First Name: ";
    string question2 = "Last name: ";
    char answer1 [80];
    string answer2;

    int product, cash, quantity, sum;
    cout << "Hanna's Cafe"<<endl<<endl;
    cout << "[1] - Red Velvet Cake      - 1,000"<<endl;
    cout << "[2] - Chocolate Moist Cake - 1,000"<<endl;
    cout << "[3] - Ube Caramel Cake     - 599"<<endl;
    cout << "[4] - Butter Caramel Cake  - 599"<<endl;
    cout << "[5] - Vanilla Cake         - 575"<<endl;
    cout << "[6] - Ube Cake             - 575"<<endl;

    cout <<endl<<endl<<"Cashier Info"<<endl<<endl;
    cout << question1;
    cin >> answer1;
    cout << question2;
    cin >> answer2;

    cout <<endl<<endl<<"Enter number to choose product: ";
    cin >> product;

    switch (product){
        case 1:
            cout <<endl<<"Product: Red Velvet Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 1000*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;
        case 2:
            cout <<endl<<"Product: Chocolate Moist Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 1000*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;
        case 3:
            cout <<endl<<"Product: Ube Caramel Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 599*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;
        case 4:
            cout <<endl<<"Product: Butter Caramel Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 599*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;
        case 5:
            cout <<endl<<"Product: Vanilla Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 575*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;
        case 6:
            cout <<endl<<"Product: Ube Cake"<<endl;
            cout <<endl<< "Quantity: ";
            cin >> quantity;
            sum = 575*quantity;
            cout <<endl<<endl<<"Total Amount: "<< sum;
            cout <<endl<<endl<<"Cash: ";
            cin >> cash;
            if (cash>=sum){
                product=cash-sum;
                cout <<endl<<"Change: "<<product<<endl;
                cout<<endl<<endl<<"Thank You for shopping with us!"<<endl<<"We hope to serve you again!!"<<endl<<endl;
                cout << "Cashier: "<<answer1<<" "<<answer2<<endl;
                cout<<endl<<endl<<endl<<"Programmed by: Hanna Princess Rodrigo"<<endl<<endl;
            }
            else {
                cout <<endl<<"Impossible to process. Amount is short. Please try again."<<endl;
            }
            break;

    }
return 0;
}
