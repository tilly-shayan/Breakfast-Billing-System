#include <iostream>
#include <iomanip>
using namespace std; //use an array, menulist, of the struct menuItemnType -> my program should contain getData, showMenu, printCheck
struct menuItemType {
double itemprice;
int menuItem{};
};
menuItemType menuList[8]; //8 items
class BreakfastMenu {
public:
int i = 0;
void getData() //Function getData: This function loads the data into the array menuList[8]
{
char answer;
int num;
cout << "Do you want to purchase an item from the Restaurant Y / y (Yes) or N / n (No): " <<
endl;
cin >> answer;
while (answer == 'Y' || answer == 'y')
{
cout << "Enter item number: ";
cin >> num;
menuList[i].menuItem = num;
switch (num) {
case 1:
menuList[i].itemprice = 1.45; //egg
break;
case 2:
menuList[i].itemprice = 2.45;//bacand egg
break;
case 3:
menuList[i].itemprice = 0.99;//muffin
break;
case 4:
menuList[i].itemprice = 1.99;//french toast
break;
case 5:
menuList[i].itemprice = 2.49;//fruit bast
break;
case 6:
menuList[i].itemprice = 0.69;//cereal
break;
case 7:
menuList[i].itemprice = 0.50;//cofee
break;
case 8:
menuList[i].itemprice = 0.75;//tea
break;
default:
cout << "Invaild Number Input. Please Ask An Associate For Technical Assistance." << endl;
i--;
}
cout << "Do you want to purchase an item from the Restaurant Y / y (Yes) or N / n (No): " <<
endl;
cin >> answer;
i++;
}
}
void showMenu() const { //displays the menu to the customerFunction showMenu: This function shows the different it offered by the restaurantand tells the user how to select the item
cout << "Welcome to the Restaurant"<<endl;
for (int x= 0; x < i; x++)
{
switch (menuList[x].menuItem) {
case 1: cout << setw(20) << left << "Plain Egg" << setw(20) << right << "$" <<
menuList[x].itemprice << endl;
break;
case 2: cout << setw(20) << left << "Bacon and Egg" << setw(20) << right << "$" <<
menuList[x].itemprice << endl;
break;
case 3: cout << setw(20) << left << "Muffin" << setw(20) << right << "$" << menuList[x].itemprice
<< endl;
break;
case 4: cout << setw(20) << left << "French Toast" << setw(20) << right << "$" <<
menuList[x].itemprice << endl;
break;
case 5: cout << setw(20) << left << "Furit Basket" << setw(20) << right << "$" <<
menuList[x].itemprice << endl;
break;
case 6: cout << setw(20) << left << "Cereal" << setw(20) << right << "$" << menuList[x].itemprice
<< endl;
break;
case 7: cout << setw(20) << left << "Coffee" << setw(20) << right << "$" << menuList[x].itemprice
<< endl;
break;
case 8: cout << setw(20) << left << "Tea" << setw(20) << right << "$" << menuList[x].itemprice <<
endl;
break;
}
}
}
void printCheck() const {
double sum = 0;
for (int x = 0; x < i; x++) {
sum = sum + menuList[x].itemprice;
}
cout <<setw(20)<<left<<"Tax " <<setw(20)<<right<<"$" <<sum * 0.05 <<endl<<setw(20)<<left <<
"Amount Due" << setw(20) <<right <<"$" << sum + sum * 0.05 << "\n";
}
};
int main() {
cout << "...............................................................................................\n"; //header
cout << "Breakfast Billing System\n" << endl;
cout << "Author: Dammulla Arachige Tilly Premaratne\n" << endl;
cout << "...............................................................................................\n" << endl; 
cout << fixed << setprecision(2);
cout << setw(20) << left << "Welcome to the Restaurant" << endl;
cout << setw(20) << left << "(1) Plain Egg" << setw(20) << right << "$1.45" << endl;
cout << setw(20) << left << "(2) Bacon and Egg" << setw(20) << right << "$2.45" << endl;
cout << setw(20) << left << "(3) Muffin" << setw(20) << right << "$0.99" << endl;
cout << setw(20) << left << "(4) French Toast" << setw(20) << right << "$1.99" << endl;
cout << setw(20) << left << "(5) Fruit Basket" << setw(20) << right << "$2.49" << endl;
cout << setw(20) << left << "(6) Cereal" << setw(20) << right << "$0.69" << endl;
cout << setw(20) << left << "(7) Coffee" << setw(20) << right << "$0.50" << endl;
cout << setw(20) << left << "(8) Tea" << setw(20) << right << "$0.75" << endl;
BreakfastMenu open;
open.getData();
open.showMenu();
open.printCheck();
return 0;
}