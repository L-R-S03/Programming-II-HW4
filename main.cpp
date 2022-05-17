#include <iostream>
#include "HugeInt.h"

using namespace std;

void displayTestCase(int);
int main() 
{
        int count = 0;
    displayTestCase(count++);
    HugeInt n1(765321);
    cout << "n1 using long : " << n1 << endl;

    displayTestCase(count++);
    HugeInt n2("9999999999999999999999999999");
    cout << "n2 using const char* : " << n2 << endl;

    displayTestCase(count++);
    HugeInt n3("0000000000000000000000000001");
    cout << "n3 using const char* : " << n3 << endl;

    displayTestCase(count++);
    HugeInt n4;
    cout << "n4 : " << n4 << endl;

    displayTestCase(count++);
    HugeInt n5 = n2 + n3;
    cout << "n5 after n5 = n2 + n3 : " << n5 << endl;

    displayTestCase(count++);
    HugeInt n6 = n2 - n1;
    cout << "n6 after n6 = n2 - n1 : " << n6 << endl; 

    displayTestCase(count++);
    n5 = n1 * n3;
    cout << "n5 after n5 = n1 * n3 : " << n5 << endl;

    displayTestCase(count++);
    n6 = n2 / n1;
    cout << "n6 after n6 = n2 / n1 : " << n6 << endl;

    displayTestCase(count++);
    n6 = n2 % n1;
    cout << "n6 after n6 = n2 % n1 : " << n6 << endl;

    displayTestCase(count++);
    n6++;
    cout << "n6 after n6++ : " << n6 << endl;

    displayTestCase(count++);
    n5 = n6++;
    cout << "n5 after n5 = n6++ : " << n5 << endl;
    cout << "n6 after n5 = n6++ : " << n6 << endl;

    displayTestCase(count++);
    cout << "(n1 <= n2)? ";
    cout << (n1 <= n2) << endl;

    displayTestCase(count++);
    HugeInt n7;
    cin >> n7;
    cout << "n7 after cin >> n7 : " << n7 << endl;
    
    displayTestCase(count++);
    n7 = n4;
    cout << "n7 after n7 = n4 : " << n7 << endl; 

    displayTestCase(count++);
    cout << "Change 28th digit for n6 to 7" << endl;
    n6[28] = '7';
    cout << "n6 : " << n6 << endl;

    displayTestCase(count++);
    long double value = n5;
    cout << "Convert n5 to long double : " << value << endl;
    return 0;
}

void displayTestCase(int count)
{
    cout << string(25, '-') << " Test " << to_string(count) << " " << string(25, '-') << endl; 
}

