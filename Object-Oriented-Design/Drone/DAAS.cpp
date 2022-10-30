#include <string>
#include <iostream>
using namespace std;

double patrolPoints[1][3][3] = { {{20.0, 55.5, 10.0}, {50.5 ,5.0 ,10.5},{85.0, 20.5, 20.0}} };

//------------------------------------Map Class-------------------------------------------------
class Map {
public:
	Map() {}
	Map(int w, int h, string name) {
		width = w;
		height = h;
		areaName = name;
	}
	//getDroneLocation()
	void setPatrolArea();
private:
	int width;
	int height;
	string areaName;
	double patrolArea[100][100][100];
	double(*p_to_arr3d)[3][3];
};
void Map::setPatrolArea() {
	for (int i = 0; i < 100; i++)
		for (int j = 0; j < 100; j++)
			for (int k = 0; k < 100; k++)
				patrolArea[i][j][k] = 0;
}
//------------------------------------FlightPath Class-------------------------------------------------
class FlightPath : Map {
public:
	FlightPath() {
		for (int i = 0; i < 1; i++) {
			cout << "(x, y, z)";
			for (int j = 0; j < 3; j++) {
				cout << endl;
				for (int k = 0; k < 3; k++)
					cout << patrolPoints[i][j][k] << "\t";
			}
		}
		cout << endl;
	}
	void getFlightPath() {
		for (int i = 0; i < 1; i++) {
			cout << "(x, y, z)";
			for (int j = 0; j < 3; j++) {
				cout << endl;
				for (int k = 0; k < 3; k++)
					cout << patrolPoints[i][j][k] << "\t";
			}
		}
		cout << endl;
	}

private:
};
//global variable
Map map(100, 100, "Patrol Zone");
FlightPath flightPath;
//------------------------------------Drone Class-------------------------------------------------
class Drone {
public:
	void setFlightMode(string patrol) {
		patrolType = patrol;
		
	}
	//calculate the flight time remaining Drone::flightTimeRemaining()
	//calculate the distance remaining Drone::distanceRemaining()
	void droneReport() {
		cout << "\t...\n\t...\n\t...\n------------------------------------------------------------" << endl
			<< "\t\tDrone Report" << "\n------------------------------------------------------------" << endl
			<< "patrolType is : " << patrolType << endl;
		cout << "Speed: " << speed << endl << "Distance: " << distance << endl << "DistanceAvailable: "
			<< distanceAvailable << endl << "Elevation: " << elevation;
		cout << "\n------------------------------------------------------------" << endl;
	}
	void setReport(double sd, double dist, double dA, double elev) {
		speed = sd;
		distance = dist;
		distanceAvailable = dA;
		elevation = elev;
	}
private:
	double speed = 0;
	double distance = 0;
	double distanceAvailable = 0;
	double elevation = 0;
	string flightMode = "";
	string patrolType = "";
};
//------------------------------------Accelerometer Class-------------------------------------------------
class Accelerometer {
public:
	Accelerometer() {}
	//bool returnLevel();
	//double returnAcceleration();
	//double readAxisYaw();
	//double readAxisRoll();
	//double readAxisPitch();
	void beginRec() {
		recordingOn = true;
	}
	bool ifRecordingOn() {
		return recordingOn;
	}
	//bool endRec();
private:
	double yaw;
	double roll;
	double pitch;
	double velocity;
	bool recordingOn;
};
//------------------------------------Rotor Class-------------------------------------------------
class Rotor {
public:
	Rotor() {
		RPM = 1000.0;
	}
	double readRPM() {
		return RPM;
	}
	void powerOn() {
		//Power on the rotor hardware
		poweredOn = true;
	}
	bool ifPoweredOn() {
		return poweredOn;
	}
private:
	double RPM;
	bool poweredOn;
};
//------------------------------------Battery Class-------------------------------------------------
class Battery {
public:
	Battery() {
		lifeRemaining = 100.0;
		voltage = 12.0;
		amps = 0;
	}
	void readStatus() {
		cout << "\t...\n\t...\n\t...\n------------------------------------------------------------" << endl
			<< "\t\Battery Report" << "\n------------------------------------------------------------" << endl
			<< "Battery: " << getLifeRemaining() << "%" << endl;
		cout << "Voltage: " << voltage << endl << "Amps: " << amps;
		cout << "\n------------------------------------------------------------" << endl;
	}
	//returnStatus();
	double getLifeRemaining() {
		return lifeRemaining;
	}
private:
	double lifeRemaining;
	double voltage;
	double amps;
};
//------------------------------------FlightControl Class-------------------------------------------------
class FlightControl {
public:
	FlightControl() : Battery(), Accelerometer(), Rotor() {
		x = 0.0;
		y = 0.0;
		dateTime = " ";
	}
	//drone reportDistanceChange();
	//double reportVelocityCurrent();
	//double reportBatteryDistanceRemaining();
	void beginFlightPath(string patrolType) {
		if (patrolType == "Autonomous") {
			cout << "\t...Flight Control is in \"" << patrolType << "\" mode" << endl;
		}
		Battery.readStatus();
		Accelerometer.beginRec();
		bool checkAccelerometer = Accelerometer.ifRecordingOn();
		if (checkAccelerometer) {
			cout << "\t...Accelerometer started recording" << endl;
			Rotor.powerOn();
			if (Rotor.ifPoweredOn())
				cout << "\t...Rotor powered on\n\t...Flight begin" << endl;
		}
		//ReceiverTransmitter RxTx; //does not work without static listening function which is not integrated.
		//RxTx.settxMessage("Flight has started"); //hard coded for simulation in main()
	}
private:
	Accelerometer Accelerometer;
	Rotor Rotor;
	Battery Battery;
	string Parameters[1][2] = { " ", " " };
	double x;
	double y;
	string dateTime;
};
//------------------------------------OperationController Class-------------------------------------------------
class OperationController {
public:
	OperationController() {
		patrolType = " ";
		isPatrol = false;
	}
	void startPatrol(string pT) {
		cout << "\t...OpControl received message" << endl;
		patrolType = pT;
		isPatrol = true;
		cout << "\t...OpControl set patrol to \"True\"" << endl;
		flightPath.getFlightPath();
		cout << "\t...Opcontrol has the flight path" << endl;
		//create drone is done after flight control is active, but changed outlook for purposes of program demonstration
		Drone drone;
		drone.setFlightMode(patrolType);
		drone.droneReport();

		FlightControl fcController;
		fcController.beginFlightPath(patrolType);
	}
private:
	string patrolType;
	bool isPatrol;
};
//------------------------------------ReceiverTransmitter Class-------------------------------------------------
class ReceiverTransmitter {
public:
	ReceiverTransmitter() {
		rxMessage = " ";
		txMessage = " ";
	}
	void settxMessage(string tx) { txMessage = tx; }
	void receiveMessage(string message) {
		rxMessage = message;
		cout << "\t...drone received the message: \"" << rxMessage << "\"" << endl;
		if (rxMessage == "Autonomous") {
			OperationController OpController;
			cout << "\t...Transmitter relaying message" << endl;
			OpController.startPatrol(rxMessage);
		}
		if (rxMessage == "Flight has started") {
			txMessage = rxMessage;
			//Controller receive; //does not work without static listening function which is not integrated.
			//receive.receiveMessage(txMessage); //hard coded for simulation in main()
		}
	}
	string getrxMessage() { return rxMessage; }
	string transmitMessage() { return txMessage; }
	string startPatrol(string patrolType) {
		rxMessage = patrolType;
		return rxMessage;
	}
private:
	bool transmitting;
	string rxMessage;
	string txMessage;
};
//------------------------------------Controller Class-------------------------------------------------
class Controller {
public:
	Controller() {
		controllerStatus = "Enabled";
		batteryLife = 100.0;
		connection = true;
		string rxMessage = " ";
		string txMessage = " ";
	}
	string getcontrollerStatus() { return controllerStatus; }
	double getBatteryLife() { return batteryLife; }
	bool getConnection() { return connection; }
	void setcontrollerStatus(string cS) { controllerStatus = cS; }
	void setBatteryLife(double bL) { batteryLife = bL; }
	void settxMessage(string tx) { 
		txMessage = tx; 
		ReceiverTransmitter RxTx;
		RxTx.receiveMessage(txMessage);
	}
	void receiveMessage(string message) { rxMessage = message; }
	void transmitMessage() {
	}

private:
	string controllerStatus;
	double batteryLife;
	bool connection;
	string rxMessage;
	string txMessage;
};

//------------------------------------Operator Class-------------------------------------------------
class Operator {
public:
	Operator(string name) {
		this->name = name;
	}
	string getName() { return name; }
private:
	string name;
};
//------------------------------------DataPoint Class-------------------------------------------------
class DataPoint : Map {
public:
private:
	string name;
	double xLocation;
	double yLocation;
	double elevation;
};
//------------------------------------ObjectivePoint Class-------------------------------------------------
class ObjectivePoint : DataPoint {
public:
private:
	string name;
	string description;
};
//------------------------------------Peripheral Class-------------------------------------------------
class Peripheral {
public:
	//bool communicate();
	//string stream();
private:
	string peripheral;
};
//------------------------------------Microphone Class-------------------------------------------------
class Microphone {
public:
	//enableMic();
	//broadcastMic();
private:
	bool enabled;
};
//------------------------------------Camera Class-------------------------------------------------
class Camera {
public:
	Camera() {}
	//enableCam();
	//broadcastCam()
private:
	string cameraState;
};
//------------------------------------Speaker Class-------------------------------------------------
class Speaker {
public:
	Speaker() {}
	//enableSpeaker();
private:
	bool speakerState;
};
int main() {
	
	Operator Mark("Mark");
	Controller Controller;
	
	cout << "\n\t------------------------------Autonomous Patrol------------------------------\n\n";
	cout << "Mark started the Patrol by clicking Autonomous on his controller: " << endl;
	Controller.settxMessage("Autonomous");
	Controller.transmitMessage();
	//Below 'demonstration' is drone-report when active
	cout << "!!Below is demonstration!!" << endl;
	//No working listener function (future demonstration)
	Controller.receiveMessage("Flight has started");  
	Drone drone2;
	drone2.setFlightMode("Autonomous");
	drone2.setReport(45.5, 10.0, 8.0, 4.0);
	drone2.droneReport();

	return 0;
}