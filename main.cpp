#include <iostream>
#include <vector>
#include "DynamicArray.h"
int main() {

    DynamicArray<student>arr;
    for (int i = 0; i < 5; ++i) {
        student st;
        st.set();
        arr.insertEnd(st);
    }
    for (int i = 0; i < 5; ++i) {
        student st;
        st=arr[i];
        st.get();
    }
    vector<student>arr1;
    for (int i = 0; i < 5; ++i) {
        student st;
        st.set();
        arr1.push_back(st);
    }
    for (int i = 0; i < 5; ++i) {
        student st;
        st=arr1[i];
        st.get();
    }
    for (int i = 0; i < 5; ++i) {
        if("rashad"==arr[i].returnName()) {
            cout << endl << true << endl;
            arr1[i].get();
            break;
        }
        else
            cout<<"what fuck"<<endl;

    }
    return 0;
}
