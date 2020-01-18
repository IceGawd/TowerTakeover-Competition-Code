#include "vex.h";
#include "blue-gold-auton.h";
using namespace vex;

void turnLeft(){
  go(directionType::rev, directionType::fwd);
}

void redGoldAutonStart() {
  while (Sonar.distance(distanceUnits::in) <= 30){
    goForward();
    movething(directionType::fwd);
  }
  
  while (abs(Sonar.distance(distanceUnits::in) - 42.5) > 2.5){
    turnLeft();
  }

  while (Sonar.distance(distanceUnits::in) > 9){
    goForward();
  }
  movething(directionType::rev);
}