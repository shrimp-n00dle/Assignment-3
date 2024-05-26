#include "MyVector.h"
using namespace P6;

//MAGNITUDE
float MyVector::getMagnitude() {
	return sqrt(pow(this->x, 2) + pow(this->y, 2));
}

//DIRECTION
MyVector MyVector::getDirection() {
	float d = 1/this->getMagnitude();
	MyVector direction(d * this->x, d * this->y, d * this->z);
	return direction;
}

//ADDITION
MyVector MyVector::operator+ (const MyVector v) {
	return MyVector(this->x + v.x,
					this->y + v.y,
					this->z + v.z);
}

void MyVector::operator+= (const MyVector v) {
	this->x += v.x;
	this->y += v.y;
	this->z += v.z;
}

//SUBTRACTION
MyVector MyVector::operator- (const MyVector v) {
	return MyVector(this->x - v.x,
					this->y - v.y,
					this->z - v.z);
}

void MyVector::operator-= (const MyVector v) {
	this->x -= v.x;
	this->y -= v.y;
	this->z -= v.z;
}

//SCALAR MULTIPLICATION
MyVector MyVector::operator* (const float f) {
	return MyVector(this->x - f,
					this->y - f,
					this->z - f);
}

void MyVector::scalarMultiplication (const float f) {
	this->x *= f;
	this->y *= f;
	this->z *= f;
}

//COMPONENT PRODUCT
MyVector MyVector::operator* (const MyVector v) {
	return MyVector(this->x * v.x,
					this->y * v.y,
					this->z * v.z);
}

void MyVector::operator*= (const MyVector v) {
	this->x *= v.x;
	this->y *= v.y;
	this->z *= v.z;
}

//SCALAR PRODUCT
float MyVector::scalarProduct (const MyVector v) {
	return this->x * v.x + this->y * v.y + this->z * v.z;
}

//VECTOR PRODUCT
MyVector MyVector::getCrossProduct (const MyVector v) {
	float x = this->y * v.z - this->z * v.y;
	float y = this->z * v.x - this->x * v.z;
	float z = this->x * v.y - this->y * v.x;
	MyVector crossProduct(x, y, z);

	return crossProduct;
}