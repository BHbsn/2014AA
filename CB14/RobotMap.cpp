// RobotBuilder Version: 1.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.


#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
SpeedController* RobotMap::drivefrontLeftDrive = NULL;
SpeedController* RobotMap::drivebackLeftDrive = NULL;
SpeedController* RobotMap::drivefrontRightDrive = NULL;
SpeedController* RobotMap::drivebackRightDrive = NULL;
RobotDrive* RobotMap::drivedriveTrain = NULL;
Encoder* RobotMap::driveenLeft = NULL;
Encoder* RobotMap::driveenRight = NULL;
Relay* RobotMap::driveswitchSol1 = NULL;
Relay* RobotMap::driveswitchSol2 = NULL;
Relay* RobotMap::clawtriggerSol1 = NULL;
Relay* RobotMap::clawtriggerSol2 = NULL;
DigitalInput* RobotMap::clawballSwitch = NULL;
Relay* RobotMap::clawshooterSol1 = NULL;
Relay* RobotMap::clawshooterSol2 = NULL;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
Relay* RobotMap::armrollerrelay1 = NULL;


void RobotMap::init() {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	LiveWindow* lw = LiveWindow::GetInstance();

	drivefrontLeftDrive = new Talon(1, 1);
	lw->AddActuator("Drive", "frontLeftDrive", (Talon*) drivefrontLeftDrive);
	
	drivebackLeftDrive = new Talon(1, 2);
	lw->AddActuator("Drive", "backLeftDrive", (Talon*) drivebackLeftDrive);
	
	drivefrontRightDrive = new Talon(1, 3);
	lw->AddActuator("Drive", "frontRightDrive", (Talon*) drivefrontRightDrive);
	
	drivebackRightDrive = new Talon(1, 4);
	lw->AddActuator("Drive", "backRightDrive", (Talon*) drivebackRightDrive);
	
	drivedriveTrain = new RobotDrive(drivefrontLeftDrive, drivebackLeftDrive,
              drivefrontRightDrive, drivebackRightDrive);
	
	drivedriveTrain->SetSafetyEnabled(false);
        drivedriveTrain->SetExpiration(0.1);
        drivedriveTrain->SetSensitivity(0.5);
        drivedriveTrain->SetMaxOutput(1.0);

        drivedriveTrain->SetInvertedMotor(RobotDrive::kFrontRightMotor, true);
        drivedriveTrain->SetInvertedMotor(RobotDrive::kRearRightMotor, true);
	driveenLeft = new Encoder(1, 1, 1, 2, false, Encoder::k4X);
	lw->AddSensor("Drive", "enLeft", driveenLeft);
	driveenLeft->SetDistancePerPulse(1.0);
        driveenLeft->SetPIDSourceParameter(Encoder::kRate);
        driveenLeft->Start();
	driveenRight = new Encoder(1, 3, 1, 4, true, Encoder::k4X);
	lw->AddSensor("Drive", "enRight", driveenRight);
	driveenRight->SetDistancePerPulse(1.0);
        driveenRight->SetPIDSourceParameter(Encoder::kRate);
        driveenRight->Start();
	driveswitchSol1 = new Relay(1, 5);
	lw->AddActuator("Drive", "switchSol1", driveswitchSol1);
	
	driveswitchSol2 = new Relay(1, 6);
	lw->AddActuator("Drive", "switchSol2", driveswitchSol2);
	
	clawtriggerSol1 = new Relay(1, 1);
	lw->AddActuator("Claw", "triggerSol1", clawtriggerSol1);
	
	clawtriggerSol2 = new Relay(1, 2);
	lw->AddActuator("Claw", "triggerSol2", clawtriggerSol2);
	
	clawballSwitch = new DigitalInput(1, 5);
	lw->AddSensor("Claw", "ballSwitch", clawballSwitch);
	
	clawshooterSol1 = new Relay(1, 3);
	lw->AddActuator("Claw", "shooterSol1", clawshooterSol1);
	
	clawshooterSol2 = new Relay(1, 4);
	lw->AddActuator("Claw", "shooterSol2", clawshooterSol2);
	

	// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
	
	armrollerrelay1 = new Relay(1, 7);
	lw->AddActuator("Arm","rollerRelay1", armrollerrelay1);
	
}
