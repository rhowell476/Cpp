#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

// Create grid array
char grid[10][10];

class Robot {
public:
	Robot(); /* default constructor*/
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	void setCargo(bool b);
	bool getCargo();
	void setLoad(char l);
	char getLoad();
	bool MoveTo(int x, int y); /* checks if location is within grid*/
	void printRobot();

private:
	int xlocation;  /* x-coordinate of robot obj on the grid*/
	int ylocation;  /* y-coordinate of robot obj on the grid*/
	bool cargoBed;  /* indicates if robot has cargo*/
	char load;  /* holds content of the load*/
};

/* -------------------------------Class Definitions---------------------------------- */
Robot::Robot() {
	xlocation = rand() % 10;
	ylocation = rand() % 10;
	cargoBed = false;
	load = '.';
}
void Robot::setX(int x) {
	xlocation = x;
}
void Robot::setY(int y) {
	ylocation = y;
}
int Robot::getX() {
	return xlocation;
}
int Robot::getY() {
	return ylocation;
}
bool Robot::getCargo() {
	return cargoBed;
}
void Robot::setCargo(bool b) {
	cargoBed = b;
}
void Robot::setLoad(char l) {
	load = l;
	cargoBed = true;
}
char Robot::getLoad() {
	return load;
}
bool Robot::MoveTo(int x, int y) {
	//checks if location is on grid
	if (x >= 0 && x < 10 && y >= 0 && y < 10) 
	{
		cout << "Robot " << " (" << getX() << ", " << getY() << ") is moving to " <<
			"(" << x << ", " << y << ")" << endl;
		//moves robot one space at a time to new location
		if (xlocation < x) {
			for (int i = xlocation; i < x; i++) {
				xlocation++;
				cout << "\tmoving right...  (" << xlocation << ", " << ylocation << ")" << endl;
			}
		}
		if (xlocation > x) {
			for (int i = xlocation; i > x; i--) {
				xlocation--;
				cout << "\tmoving left...  (" << xlocation << ", " << ylocation << ")" << endl;
			}
		}
		if (ylocation < y) {
			for (int i = ylocation; i < y; i++) {
				ylocation++;
				cout << "\tmoving down...  (" << xlocation << ", " << ylocation << ")" << endl; 
			}
		}
		if (ylocation > y) {
			for (int i = ylocation; i > y; i--) {
				ylocation--;
				cout << "\tmoving up...  (" << xlocation << ", " << ylocation << ")" << endl;
			}
		}
		return true;
	}
	else {
		cout << "This location is not on the grid. Try again." << 
		"\n------------------------------------------\n" << endl;
		return 0;
	}
}
void Robot::printRobot() {
	//print Robots
	if (getCargo())
		cout << "Cargo status: Robot (" << getX() << "," <<
			getY() << "): " << getLoad() << endl;

	else
		cout << "Robot (" << getX() << "," <<
			getY() << "): cargo bed is empty" << endl;
}

int main() {
	srand(time(0));

	//create array of three Robot objects
	Robot three[3] = {Robot(), Robot(), Robot()};

	//move the Robots to different locations
	three[0].MoveTo(1,1);
	three[1].MoveTo(3,4);
	three[2].MoveTo(8,6);

	//assign different loads to the Robots
	three[0].setLoad('a');
	three[1].setLoad('z');
	three[2].setLoad('e');

	//prints the Robots
	three[0].printRobot();
	three[1].printRobot();
	three[2].printRobot();

	return 0;
}
