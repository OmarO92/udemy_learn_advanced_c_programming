#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	//2d vector
	//outer vector holds all rows
	//inner vector is individual row in grid
	//3 rows, 4 columns (0d out)
	/*
		 vector< vector<int> > grid(3, vector<int>(4,0) );

	//change size of 1 row
	grid[1].push_back(8);

	cout << "\tNumber of Rows Grid.size() : " << grid.size() << endl;
	cout << "\tNumber of Columns Grid[row].size() : " << grid[0].size() << endl;
	for(int row = 0; row < grid.size(); row++){
	for(int col = 0; col < grid[row].size(); col++) {
	cout << grid[row][col] << flush;;
	}
	cout << endl;
	}
	 */
	/*
		 vector<int> row1;
		 for(int i = 0; i < 12; i++) {
		 row1.push_back(i+1);
		 }

		 for(int i = 0; i < row1.size(); i++) {
		 cout << row1[i] << " ";
		 }

		 cout << "\n\t**\n";
	 */

	vector< vector<int> >timeTable(12,vector<int>(12));

	/* challenge: make times table w/ 2d vector vector*/
	for(int row = 0; row < timeTable.size(); row++){
		//cout << "row : " << row + 1 << " ";
		for(int col = 0; col < timeTable[row].size();col++){
			timeTable[row][col] = (col+1) * (row+1);
			cout << setw(3) << timeTable[row][col] << " " ;
		}
		cout << endl;
	}

	return 0;
}
