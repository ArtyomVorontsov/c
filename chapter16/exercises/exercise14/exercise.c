#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };

struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int heigth, width;
		} rectangle;
		struct {
 			int radius;
		} circle;
	} u;
};

int s_area(struct shape s);
struct shape s_translate(struct shape s, int x, int y);
struct shape s_scale(struct shape s, double c);

int main(void){
	struct point p1 = { 0, 10 };
	struct point p2 = { 10, 0 };
	struct point p3 = { 20, 12 };
	struct point p4 = { 5, 7 };

	struct shape circle = { 0, p1 };
	circle.u.circle.radius = 10;

	struct shape rectangle = { 1, p1 };
	rectangle.u.rectangle.width = 10;
	rectangle.u.rectangle.heigth = 10;
	

	int shape_area = s_area(circle);
	printf("circle shape area: %d\n", shape_area);

	shape_area = s_area(rectangle);
	printf("rectangle shape area: %d\n", shape_area);

	struct shape st = s_translate(circle, 4, 7);
	printf("shape center translate: x: %d, y: %d \n", st.center.x, st.center.y);

	struct shape ssc = s_scale(circle, 10);
	printf("circle scale radius: %d \n", ssc.u.circle.radius);
	struct shape ssr = s_scale(rectangle, 10);
	printf("rectangle scale width and heigth. width: %d heigth: %d\n", ssr.u.rectangle.width, ssr.u.rectangle.heigth);
}

int s_area(struct shape s){
	if(s.shape_kind == 1)
		return s.u.rectangle.width * s.u.rectangle.heigth;
	else if(s.shape_kind == 0) 
		return 3.14 * s.u.circle.radius * s.u.circle.radius;
}


struct shape s_translate(struct shape s, int x, int y){
	struct shape st = s;
	st.center.x += x;
	st.center.y += y;

	return st;
}

struct shape s_scale(struct shape s, double c){
	struct shape ss = s;
	if(s.shape_kind == 1) {
		ss.u.rectangle.width *= c;
		ss.u.rectangle.heigth *= c;
	} else if(s.shape_kind == 0) {
		ss.u.circle.radius *= c;
	}

	return ss;
}

