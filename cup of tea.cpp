#include <iostream>
#include <string>
using namespace std;

int main() {
  
  int teaType;
  cout << "Hi I'm your tea assistant \n The options of tea are: \n Press 1 for Green tea" << endl;
  cout << " Press 2 for Normal Tea \n Press 3 for Herbal tea" << endl;
  cin >> teaType;
  string Tea = "";
  if (teaType == 1){
    cout << "You selected green tea" << endl;
    Tea = "Green Tea";
  } else if (teaType == 2){
    cout << "You selected Normal tea" << endl;
    Tea = "Normal Tea";
  } else if (teaType == 3){
    cout << "You selected Herbal tea" << endl;
    Tea = "Herbal Tea";
  } else{
    cout << "That is a syntax error please enter a NUMBER between 1 and 3" << endl;
  }
  
  int Milk;
  Milk = 0;
  cout << "Do you want Milk? \n Type 1 for yes 2 for no" << endl;
  cin >> Milk;
  int MilkAmount;
  if (Milk == 1){
    cout << "How much milk do you want in ML" << endl;
    cin >> MilkAmount;
    cout << "You want " << MilkAmount << "ml of milk" << endl;
  } else if (Milk == 2){
    cout << "You are a bit weirdu don't want milk" << endl;
    }
  int Sugar;
  Sugar = 0;
  cout << "Do you want any sugar? \n Type 1 for yes 2 for no" << endl;
  cin >> Sugar;
   if (Sugar == 1){
    int SugarAmount;
    cout << "How much sugar do you want in your tea?" << endl;
    cin >> SugarAmount;
    cout << "You want " << SugarAmount << "mg of sugar" << endl;
  } else if (Sugar == 2){
    cout << "Congrats, you believe are healthy" << endl;
    }
  int Biscuits;
  cout << "Do you want biscuits press \n Press 1 for Yes \n Press 2 for No" << endl;
  int BiscuitsAmount;
  BiscuitsAmount = 0;
  cin >> Biscuits;
  if (Biscuits == 1){
    cout << "How many biscuits do you want?" << endl;
    cin >> BiscuitsAmount;
    cout << "You want " << BiscuitsAmount << " biscuits" << endl;
  } else if (Biscuits == 2){
    cout << "You are a bit weirdu don't want Biscuits" << endl;
    }
  cout << "Your order is:\n A " << Tea << ", with " << MilkAmount <<" ml, " << "with " << Sugar << " mg" << " and "<< BiscuitsAmount << " Biscuits!" <<endl;
  return 0;
} 