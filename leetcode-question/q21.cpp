#include <iostream>
using namespace std;

void swap(int list[], int a) {
    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (list[i] > list[j]) {
                int temp = list[i];
                list[i] = list[j];
                list[j] = temp;
            }
        }
    }
}

int main() {
    int a;
    cout << "Enter the size of the arrays: ";
    cin >> a;

    int list1[a], list2[a];
    int list3[a + a];

    cout << "Enter elements for the first list: ";
    for (int i = 0; i < a; i++) {
        cin >> list1[i];
    }

    cout << "Enter elements for the second list: ";
    for (int i = 0; i < a; i++) {
        cin >> list2[i];
    }

  
    for (int i = 0; i < a; i++) {
        list3[i] = list1[i];
    }
    for (int i = 0; i < a; i++) {
        list3[a + i] = list2[i];
    }

    // Sort the concatenated array
    swap(list3, a + a);

    cout << "Sorted concatenated array:\n";
    for (int i = 0; i < a + a; i++) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}
