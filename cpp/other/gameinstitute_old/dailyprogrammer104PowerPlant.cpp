#include <iostream>
using namespace std;

int daysOperational(int days_to_simulate){
	int days_open = 1;

	for(int i = 0; i < days_to_simulate; i++){
		if(i % 3 != 0 && i % 14 != 0 && i % 100 != 0){
			days_open++;
		}
	}

	return days_open;
}

int main(){
    int days;
    cout << "Enter days to simulate: ";
    cin >> days;
    cout << daysOperational(days);
}
