# Self-Driving Car Engineer Nanodegree

## Term 2 Project 4: PID Controller

The goal for this project was to implement a PID controller for the SDC simulator. The project specification was given [here](https://review.udacity.com/#!/rubrics/824/view).

### Approach

For this project I wanted the car to drive in the middle of the road and at a certain speed. So the implemented PID controller, taken from the course, is used twice. On the one hand to keep the CTE low and have the car driving close to the midline of the road and on the other hand do keep the speed up to 40 mph.

I used the following initial parameters for the PID controllers after trying some settings empirically:
* Steering: P (0.1), I (0.0002), D (4)
* Throttle: P(-0.1), I (-0.0002), D (0)

I wanted to keep the P-component low to prevent overshooting too much and additionally keep the system away from oscillation by tuning the I-component even lower. For steering part I added some value to the D-component to keep the movement smooth. For the acceleration part this was not necessary.

### Challenges

Though is driving the whole course, it is still not as smooth, to use it for autonomous driving. Also the current setting is not stable enough to keep the speed much higher.

### Conclusion

This project is mostly about tuning the parameters of the system. The current setting does drive the course, but is pretty far from a smooth ride. It needs a lot more time tuning and not just by trial and error. If the PID controller should be used a tuning system like twiddle would be helpful.
