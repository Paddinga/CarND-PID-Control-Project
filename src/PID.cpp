#include "PID.h"
#include <iostream>

using namespace std;


PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp, double Ki, double Kd) {
    // init coefficients
    this->Kp = Kp;
    this->Ki = Ki;
    this->Kd = Kd;
    // init errors
    p_error = 0.0;
    i_error = 0.0;
    d_error = 0.0;
}

void PID::UpdateError(double cte) {
    d_error = (cte - p_error);
    p_error = cte;
    i_error += cte;
}

double PID::TotalError() {
    double total_error = - Kp * p_error - Ki * i_error - Kd * d_error;
    total_error = min(total_error, 1.0);
    total_error = max(total_error, - 1.0);
    return total_error;
}

