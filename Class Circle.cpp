#include<iostream>
#include<cmath>
#include<string>

class Circle {
private:
	double radius = 0;

public:
	void init(double r) {
		radius = r;
	}

	void setRadius(double r) {
		radius = r;
	}

	double getRadius() const {
		return radius;
	}

	double getArea() const {
		return pow(radius, 2) * acos(-1);
	}

	double getPerimeter() const {
		return 2 * radius * acos(-1);
	}

	std::string toString() const {
		return "Radius = " + std::to_string(radius) + "\nArea = " + std::to_string(this->getArea()) + "\nPerimeter = " + std::to_string(this->getPerimeter());
	}
};

int main() {
	Circle c;
	std::cout << c.toString() << std::endl;
}