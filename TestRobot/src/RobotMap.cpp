// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "RobotMap.h"
#include "LiveWindow/LiveWindow.h"
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION
std::shared_ptr<frc::SpeedController> RobotMap::driveBaseSubFrontleftTalon;
std::shared_ptr<frc::SpeedController> RobotMap::driveBaseSubFrontrightTalon;
std::shared_ptr<frc::SpeedController> RobotMap::driveBaseSubBackleftTalon;
std::shared_ptr<frc::SpeedController> RobotMap::driveBaseSubBackrightTalon;
std::shared_ptr<frc::RobotDrive> RobotMap::driveBaseSubrobotDrve;
// END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=ALLOCATION

void RobotMap::init() {
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    frc::LiveWindow *lw = frc::LiveWindow::GetInstance();

    driveBaseSubFrontleftTalon.reset(new frc::Spark(1));
    //lw->AddActuator("DriveBaseSub", "FrontleftTalon", std::static_pointer_cast<frc::Spark>(driveBaseSubFrontleftTalon));
    
    driveBaseSubFrontrightTalon.reset(new frc::Spark(2));
    //lw->AddActuator("DriveBaseSub", "FrontrightTalon", std::static_pointer_cast<frc::Spark>(driveBaseSubFrontrightTalon));
    
    driveBaseSubBackleftTalon.reset(new frc::Spark(3));
    //lw->AddActuator("DriveBaseSub", "BackleftTalon", std::static_pointer_cast<frc::Spark>(driveBaseSubBackleftTalon));
    
    driveBaseSubBackrightTalon.reset(new frc::Spark(4));
    //lw->AddActuator("DriveBaseSub", "BackrightTalon", std::static_pointer_cast<frc::Spark>(driveBaseSubBackrightTalon));
    
    driveBaseSubrobotDrve.reset(new frc::RobotDrive(driveBaseSubFrontleftTalon, driveBaseSubBackleftTalon,
              driveBaseSubFrontrightTalon, driveBaseSubBackrightTalon));
    
    driveBaseSubrobotDrve->SetSafetyEnabled(false);
        driveBaseSubrobotDrve->SetExpiration(0.1);
        driveBaseSubrobotDrve->SetSensitivity(0.5);
        driveBaseSubrobotDrve->SetMaxOutput(1.0);


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}
