//made by Jeff Lin
#include <iostream>
using namespace std;
class TicTacToe {
	public:
		char X = 'X';
		char O = 'O';
		char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	void printBoard() {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				cout << matrix[i][j] << " ";
			}
			cout << endl;
		}
	}

	bool ifCornerPiece() {
		if (matrix[0][0] == 'X' || matrix[0][2] == 'X' ||
			matrix[2][0] == 'X' || matrix[2][2] == 'X') {
			return true;
		}
		return false;
	}
	string cornerPiece() {
		if (matrix[0][0] == 'X') {
			return "top left";
		}
		else if (matrix[0][2] == 'X') {
			return "top right";
		}
		else if (matrix[2][0] == 'X') {
			return "bottom left";
		}
		else {
			return "bottom right";
		}
	}

	void humanInput(int &turnsPassed) {
		cout << "Type the number you would like to put your X on: ";
		int input;
		cin >> input;
		switch (input) {
		case 1:
			if (matrix[0][0] == 'X' || matrix[0][0] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[0][0] = X;
				++turnsPassed;
				break;
			}
		case 2:
			if (matrix[0][1] == 'X' || matrix[0][1] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[0][1] = X;
				++turnsPassed;
				break;
			}
		case 3:
			if (matrix[0][2] == 'X' || matrix[0][2] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[0][2] = X;
				++turnsPassed;
				break;
			}
		case 4:
			if (matrix[1][0] == 'X' || matrix[1][0] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[1][0] = X;
				++turnsPassed;
				break;
			}
		case 5:
			if (matrix[1][1] == 'X' || matrix[1][1] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[1][1] = X;
				++turnsPassed;
				break;
			}
		case 6:
			if (matrix[1][2] == 'X' || matrix[1][2] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[1][2] = X;
				++turnsPassed;
				break;
			}
		case 7:
			if (matrix[2][0] == 'X' || matrix[2][0] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[2][0] = X;
				++turnsPassed;
				break;
			}
		case 8:
			if (matrix[2][1] == 'X' || matrix[2][1] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[2][1] = X;
				++turnsPassed;
				break;
			}
		case 9:
			if (matrix[2][2] == 'X' || matrix[2][2] == 'O') {
				cout << "Invalid choice, please select again" << endl;
				humanInput(turnsPassed);
				break;
			}
			else {
				matrix[2][2] = X;
				++turnsPassed;
				break;
			}
		default:
			cout << "Invalid choice, please select again" << endl;
			humanInput(turnsPassed);
		}
	}

	bool humanDouble() {
		//XX-
		if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == '3') {
			return true;
		}
		else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == '6') {
			return true;
		}
		else if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == '9') {
			return true;
		}
		//-XX
		else if (matrix[0][0] == '1' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
			return true;
		}
		else if (matrix[1][0] == '4' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
			return true;
		}
		else if (matrix[2][0] == '7' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		//X-X
		else if (matrix[0][0] == 'X' && matrix[0][1] == '2' && matrix[0][2] == 'X') {
			return true;
		}
		else if (matrix[1][0] == 'X' && matrix[1][1] == '5' && matrix[1][2] == 'X') {
			return true;
		}
		else if (matrix[2][0] == 'X' && matrix[2][1] == '8' && matrix[2][2] == 'X') {
			return true;
		}
		//XX- vertically
		else if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == '7') {
			return true;
		}
		else if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == '8') {
			return true;
		}
		else if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == '9') {
			return true;
		}
		//-XX vertically
		else if (matrix[0][0] == '1' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
			return true;
		}
		else if (matrix[0][1] == '2' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
			return true;
		}
		else if (matrix[0][2] == '3' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		//X-X vertically
		else if (matrix[0][0] == 'X' && matrix[1][0] == '4' && matrix[2][0] == 'X') {
			return true;
		}
		else if (matrix[0][1] == 'X' && matrix[1][1] == '5' && matrix[2][1] == 'X') {
			return true;
		}
		else if (matrix[0][2] == 'X' && matrix[1][2] == '6' && matrix[2][2] == 'X') {
			return true;
		}
		//y=-x doubles
		else if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == '9') {
			return true;
		}
		else if (matrix[0][0] == '1' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		else if (matrix[0][0] == 'X' && matrix[1][1] == '5' && matrix[2][2] == 'X') {
			return true;
		}
		//y=x doubles
		else if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == '3') {
			return true;
		}
		else if (matrix[2][0] == '7' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
			return true;
		}
		else if (matrix[2][0] == 'X' && matrix[1][1] == '5' && matrix[0][2] == 'X') {
			return true;
		}
		return false;
	}

	string humanDoubles() {
		//XX-
		if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == '3') {
			return "first row double1";
		}
		else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == '6') {
			return "second row double1";
		}
		else if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == '9') {
			return "third row double1";
		}
		//-XX
		else if (matrix[0][0] == '1' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
			return "first row double2";
		}
		else if (matrix[1][0] == '4' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
			return "second row double2";
		}
		else if (matrix[2][0] == '7' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
			return "third row double2";
		}
		//X-X
		else if (matrix[0][0] == 'X' && matrix[0][1] == '2' && matrix[0][2] == 'X') {
			return "first row double3";
		}
		else if (matrix[1][0] == 'X' && matrix[1][1] == '5' && matrix[1][2] == 'X') {
			return "second row double3";
		}
		else if (matrix[2][0] == 'X' && matrix[2][1] == '8' && matrix[2][2] == 'X') {
			return "third row double3";
		}
		//XX- vertically
		else if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == '7') {
			return "first column double1";
		}
		else if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == '8') {
			return "second column double1";
		}
		else if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == '9') {
			return "third column double1";
		}
		//-XX vertically
		else if (matrix[0][0] == '1' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
			return "first column double2";
		}
		else if (matrix[0][1] == '2' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
			return "second column double2";
		}
		else if (matrix[0][2] == '3' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
			return "third column double2";
		}
		//X-X vertically
		else if (matrix[0][0] == 'X' && matrix[1][0] == '4' && matrix[2][0] == 'X') {
			return "first column double3";
		}
		else if (matrix[0][1] == 'X' && matrix[1][1] == '5' && matrix[2][1] == 'X') {
			return "second column double3";
		}
		else if (matrix[0][2] == 'X' && matrix[1][2] == '6' && matrix[2][2] == 'X') {
			return "third column double3";
		}
		//y=-x doubles
		else if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == '9') {
			return "diagonal double1";
		}
		else if (matrix[0][0] == '1' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
			return "diagonal double2";
		}
		else if (matrix[0][0] == 'X' && matrix[1][1] == '5' && matrix[2][2] == 'X') {
			return "diagonal double3";
		}
		//y=x doubles
		else if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == '3') {
			return "diagonal double4";
		}
		else if (matrix[2][0] == '7' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
			return "diagonal double5";
		}
		else if (matrix[2][0] == 'X' && matrix[1][1] == '5' && matrix[0][2] == 'X') {
			return "diagonal double6";
		}
		//should never get to this stage
		return "ERROR NO DOUBLES";
	}

	bool botDouble() {
		//XX-
		if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == '3') {
			return true;
		}
		else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == '6') {
			return true;
		}
		else if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == '9') {
			return true;
		}
		//-XX
		else if (matrix[0][0] == '1' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
			return true;
		}
		else if (matrix[1][0] == '4' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
			return true;
		}
		else if (matrix[2][0] == '7' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		//X-X
		else if (matrix[0][0] == 'O' && matrix[0][1] == '2' && matrix[0][2] == 'O') {
			return true;
		}
		else if (matrix[1][0] == 'O' && matrix[1][1] == '5' && matrix[1][2] == 'O') {
			return true;
		}
		else if (matrix[2][0] == 'O' && matrix[2][1] == '8' && matrix[2][2] == 'O') {
			return true;
		}
		//XX- vertically
		else if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == '7') {
			return true;
		}
		else if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == '8') {
			return true;
		}
		else if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == '9') {
			return true;
		}
		//-XX vertically
		else if (matrix[0][0] == '1' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
			return true;
		}
		else if (matrix[0][1] == '2' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
			return true;
		}
		else if (matrix[0][2] == '3' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		//X-X vertically
		else if (matrix[0][0] == 'O' && matrix[1][0] == '4' && matrix[2][0] == 'O') {
			return true;
		}
		else if (matrix[0][1] == 'O' && matrix[1][1] == '5' && matrix[2][1] == 'O') {
			return true;
		}
		else if (matrix[0][2] == 'O' && matrix[1][2] == '6' && matrix[2][2] == 'O') {
			return true;
		}
		//y=-x doubles
		else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == '9') {
			return true;
		}
		else if (matrix[0][0] == '1' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		else if (matrix[0][0] == 'O' && matrix[1][1] == '5' && matrix[2][2] == 'O') {
			return true;
		}
		//y=x doubles
		else if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == '3') {
			return true;
		}
		else if (matrix[2][0] == '7' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
			return true;
		}
		else if (matrix[2][0] == 'O' && matrix[1][1] == '5' && matrix[0][2] == 'O') {
			return true;
		}
		return false;
	}

	string botDoubles() {
		//XX-
		if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == '3') {
			return "first row double1";
		}
		else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == '6') {
			return "second row double1";
		}
		else if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == '9') {
			return "third row double1";
		}
		//-XX
		else if (matrix[0][0] == '1' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
			return "first row double2";
		}
		else if (matrix[1][0] == '4' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
			return "second row double2";
		}
		else if (matrix[2][0] == '7' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
			return "third row double2";
		}
		//X-X
		else if (matrix[0][0] == 'O' && matrix[0][1] == '2' && matrix[0][2] == 'O') {
			return "first row double3";
		}
		else if (matrix[1][0] == 'O' && matrix[1][1] == '5' && matrix[1][2] == 'O') {
			return "second row double3";
		}
		else if (matrix[2][0] == 'O' && matrix[2][1] == '8' && matrix[2][2] == 'O') {
			return "third row double3";
		}
		//XX- vertically
		else if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == '7') {
			return "first column double1";
		}
		else if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == '8') {
			return "second column double1";
		}
		else if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == '9') {
			return "third column double1";
		}
		//-XX vertically
		else if (matrix[0][0] == '1' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
			return "first column double2";
		}
		else if (matrix[0][1] == '2' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
			return "second column double2";
		}
		else if (matrix[0][2] == '3' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
			return "third column double2";
		}
		//X-X vertically
		else if (matrix[0][0] == 'O' && matrix[1][0] == '4' && matrix[2][0] == 'O') {
			return "first column double3";
		}
		else if (matrix[0][1] == 'O' && matrix[1][1] == '5' && matrix[2][1] == 'O') {
			return "second column double3";
		}
		else if (matrix[0][2] == 'O' && matrix[1][2] == '6' && matrix[2][2] == 'O') {
			return "third column double3";
		}
		//y=-x doubles
		else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == '9') {
			return "diagonal double1";
		}
		else if (matrix[0][0] == '1' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
			return "diagonal double2";
		}
		else if (matrix[0][0] == 'O' && matrix[1][1] == '5' && matrix[2][2] == 'O') {
			return "diagonal double3";
		}
		//y=x doubles
		else if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == '3') {
			return "diagonal double4";
		}
		else if (matrix[2][0] == '7' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
			return "diagonal double5";
		}
		else if (matrix[2][0] == 'O' && matrix[1][1] == '5' && matrix[0][2] == 'O') {
			return "diagonal double6";
		}
		//should never get to this stage
		return "ERROR NO DOUBLES";
	}
	void botInput(int &turnsPassed) {
		switch (turnsPassed) {
		case 0:
			matrix[1][1] = O;
			++turnsPassed;
			break;
		case 1:
			if (matrix[1][1] == 'X') {
				matrix[0][2] = O;
				++turnsPassed;
				break;
			}
			else {
				matrix[1][1] = O;
				++turnsPassed;
				break;
			}
		case 2: 
			if (ifCornerPiece()) {
				if (cornerPiece() == "top left") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (cornerPiece() == "top right") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (cornerPiece() == "bottom left") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
			}
			else {
				matrix[0][0] = O;
				++turnsPassed;
			}
			break;
		case 3:
			if (humanDouble()) {
				if (humanDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else {
				if (matrix[0][0] == '1') {
					matrix[0][0] = O;
					break;
				}
				else {
					matrix[1][0] = O;
					break;
				}
			}
		case 4:
			if (botDouble()) {
				if (botDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else if (humanDouble()) {
				if (humanDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
		case 5:
			if (botDouble()) {
				if (botDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else if (humanDouble()) {
				if (humanDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
		case 6:
			if (botDouble()) {
				if (botDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else if (humanDouble()) {
				if (humanDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else {
				for (int i = 0; i < 3; ++i) {
					for (int j = 0; j < 3; ++j) {
						if ((matrix[i][j] != X) && (matrix[i][j] != O)) {
							matrix[i][j] = O;
							++turnsPassed;
						}
					}
				}
				break;
			}
		case 7:
			if (botDouble()) {
				if (botDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (botDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else if (humanDouble()) {
				if (humanDoubles() == "first row double1") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double1") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double1") {
					matrix[2][2] == O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double2") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double2") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first row double3") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second row double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third row double3") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double1") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double1") {
					matrix[2][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third columnn double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second columnn double2") {
					matrix[0][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "first column double3") {
					matrix[1][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "second column double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "third column double3") {
					matrix[1][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double1") {
					matrix[2][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double2") {
					matrix[0][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double3") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double4") {
					matrix[0][2] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double5") {
					matrix[2][0] = O;
					++turnsPassed;
					break;
				}
				else if (humanDoubles() == "diagonal double6") {
					matrix[1][1] = O;
					++turnsPassed;
					break;
				}
			}
			else {
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if ((matrix[i][j] != X) && (matrix[i][j] != O)) {
						matrix[i][j] = O;
						++turnsPassed;
						break;
					}
				}
			}
			break;
			}
		case 8:
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if ((matrix[i][j] != X) && (matrix[i][j] != O)) {
						matrix[i][j] = O;
						++turnsPassed;
					}
				}
			}
			break;
		}
	}

	bool goFirst(string answer) {
		return (answer == "yes");
	}

	bool humanWin() {
		//NOTE: This should NEVER return true, used to test code
		//first row victory
		if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X') {
			return true;
		}
		//second row victory
		else if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X') {
			return true;
		}
		//third row victory
		else if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		//first column victory
		else if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X') {
			return true;
		}
		//second column victory
		else if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X') {
			return true;
		}
		//third column victory
		else if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		//y=-x diagonal victory
		else if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X') {
			return true;
		}
		//y=x diagonal victory
		else if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X') {
			return true;
		}
		return false;
	}

	bool botWin() {
		//first row victory
		if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O') {
			return true;
		}
		//second row victory
		else if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O') {
			return true;
		}
		//third row victory
		else if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		//first column victory
		else if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O') {
			return true;
		}
		//second column victory
		else if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O') {
			return true;
		}
		//third column victory
		else if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		//y=-x diagonal victory
		else if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O') {
			return true;
		}
		//y=x diagonal victory
		else if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O') {
			return true;
		}
		return false;
	}
	};


int main() {
	TicTacToe bot;
	string answer;
	cout << "Do you want to go first? (yes or no): ";
	cin >> answer;
	int turnsPassed = 0;
	cout << "Tic Tac Toe Board: " << endl;
	bot.printBoard();
	if (bot.goFirst(answer)) {
		while (turnsPassed < 8) {
			bot.humanInput(turnsPassed);
			bot.printBoard();
			if (bot.humanWin() == true) {
				turnsPassed = 10;
				cout << "The human wins. This code does not function properly" << endl;
				return 0;
			}
			cout << endl;
			cout << "Bot's turn:" << endl;
			bot.botInput(turnsPassed);
			bot.printBoard();
			if (bot.botWin() == true) {
				turnsPassed = 10;
				cout << "The bot wins. Better luck next time!" << endl;
				return 0;
			}
			cout << endl;
		}
		bot.humanInput(turnsPassed);
		if (bot.humanWin() == true) {
			cout << "The human wins. This code does not function properly" << endl;
			return 0;
		}
		else if (bot.botWin() == true) {
			cout << "The bot wins. Better luck next time!" << endl;
			return 0;
		}
		else {
			cout << "This game resulted in a tie. Better luck next time!" << endl;
			return 0;
		}
	}
	else {
		while (turnsPassed <= 8) {
			cout << "Bot's turn:" << endl;
			bot.botInput(turnsPassed);
			bot.printBoard();
			if (bot.botWin() == true) {
				turnsPassed = 10;
				cout << "The bot wins. Better luck next time!" << endl;
				return 0;
			}
			cout << endl;
			bot.humanInput(turnsPassed);
			bot.printBoard();
			if (bot.humanWin() == true) {
				turnsPassed = 10;
				cout << "The human wins. This code does not function properly" << endl;
				return 0;
			}
			cout << endl;
		}
		bot.botInput(turnsPassed);
		if (bot.humanWin() == true) {
			cout << "The human wins. This code does not function properly" << endl;
		}
		else if (bot.botWin() == true) {
			cout << "The bot wins. Better luck next time!" << endl;
		}
		else {
			cout << "This game resulted in a tie. Better luck next time!" << endl;
		}
	}
	return 0;
}
