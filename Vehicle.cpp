#include <iostream>

class Vehicle {
public:
  double velocity;
  double acceleration;
  double angle;

  void update(double time) {
    velocity += acceleration * time;
    angle += velocity * time;
  }
};

int main() {
  Vehicle car;
  car.velocity = 0;
  car.acceleration = 10;
  car.angle = 0;

  for (int i = 0; i < 10; i++) {
    car.update(1); // update the car's position and angle every second
    std::cout << "Velocity: " << car.velocity << ", Angle: " << car.angle << std::endl;
  }

  return 0;
}
