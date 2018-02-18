#include <iostream>
using namespace std;
#include "list.h"

int main(){

        int value; 

        // instantiate a List class (the constructor takes NO arguments)
        List list;

        // NOTE:
        // List list();  is incorrect, when there are no arguments don't use ()

        // insert numbers into the list
        while(cin >> value){
                list.insert_at_end(value);

                list.print();
                cout << "sum = " << list.sum() << endl;
        }

        return 0;
}
