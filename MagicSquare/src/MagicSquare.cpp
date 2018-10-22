//============================================================================
// Name        : MagicSquare.cpp
// Author      : Mick Campittelli
// Version     :
// Copyright   : Your copyright notice
// Description : MagicSquare
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void magic(int n) {
	int j = 0;
	int counter = 1;
	int k = n / 2;
	int counter2 = 0;
	// initialize a vector of (n, n length vectors) to create our n x n box.
	vector<vector<int> > magic(n, vector<int>(n));


	for (int i = 1; i <= n * n; i++) {
		//rules for placing the counter
		if (counter2 == n) {
			j += 2;
			k--;
			counter2 = 0;
		}
		if (j < 0)
			j = n - 1;
		if (k >= n)
			k = 0;
		magic[j][k] = i;
		k++;
		j--;
		counter2++;

	}
	//displays the magic square
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (counter > n) {
				cout << "\n";
				counter = 1;
			}
			cout << "\t" << magic[i][j];
			counter++;
		}
	}
}

int main() {
	magic(5);

	return 0;
}

