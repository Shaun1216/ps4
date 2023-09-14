#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int spending(double amount)
{
    int numBills = static_cast <int> (amount)/20.0;
        if (numBills * 20.0 < amount) {
        numBills++;
        }
    return numBills;
}

int main()
{
    string name1, name2;
    cout << "What is your name?\n";
    getline(cin, name1);
    cout << "How much will John be spending? ";
    double johnAmount;
    cin >> johnAmount;
    cin.ignore();
    cout << endl;

    cout << "What is your name?\n";
    getline(cin, name2);
    cout << "How much will Jane be spending? ";
    double janeAmount;
    cin >> janeAmount;
    cin.ignore();
    cout << endl;
    
    int billsJohn = spending(johnAmount);
    int billsJane = spending(janeAmount);
    
    cout << name1 << " needs " << billsJohn << " bills" << endl;
    cout << name2 << " needs " << billsJane << " bills" << endl;

    return 0;
}

/*Error emitted from internal testing code. This error is occurring when our internal testing code is trying to call your code. If you see this, it may mean that you have the wrong header for your solution, or a mismatched { } ( ) brace.
cannot convert 'const char*' to 'double'
  133 |  spending("John");
      |           ^~~~~~
      |           |
      |           const char*

*/