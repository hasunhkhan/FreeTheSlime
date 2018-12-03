#ifndef _RYANW_H_
#define _RYANW_H_

class Tower {
public:
	int onoff;
	int frame;
	Vec pos;
	Image *image;
	GLuint tex;
	struct timespec time;
	Tower() {
		onoff = 0;
		frame = 0;
		image = NULL;
	}
};

class Bullet {
public:
	Vec pos;
	Vec vel;
	float color[3];
	struct timespec time;
public:
	Bullet() { }
};

#endif
