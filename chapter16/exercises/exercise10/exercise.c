#include <stdio.h>
#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };

int rectangle_area(struct rectangle r);
struct point rectangle_center(struct rectangle r);
struct rectangle rectangle_translate(struct rectangle r, int x, int y);
bool point_within_rectangle(struct rectangle r, struct point p);

int main(void){
	struct point p1 = { 0, 10 };
	struct point p2 = { 10, 0 };
	struct point p3 = { 20, 12 };
	struct point p4 = { 5, 7 };
	struct rectangle r = { p1, p2 };

	int r_area = rectangle_area(r);
	printf("rectangle area: %d\n", r_area);

	struct point r_center = rectangle_center(r);
	printf("rectangle center: x:%d y:%d\n", r_center.x, r_center.y);

	struct rectangle rt = rectangle_translate(r, 4, 7);
	printf("rectangle translate: x: %d, y %d | x: %d, y: %d\n", rt.upper_left.x, rt.upper_left.y, rt.lower_right.x, rt.lower_right.y);
	
	bool p_outside = point_within_rectangle(r, p3);
	printf("point outside rectangle: %d\n", p_outside);

	bool p_inside = point_within_rectangle(r, p4);
	printf("point inside rectangle: %d\n", p_inside);

	return 0;
}

int rectangle_area(struct rectangle r){
	return (r.upper_left.y - r.lower_right.y) * (r.lower_right.x - r.upper_left.x);
}

struct point rectangle_center(struct rectangle r){
	int x = (r.lower_right.x - r.upper_left.x) / 2;
	int y = (r.upper_left.y - r.lower_right.y) / 2;

	struct point p = { x, y };
	return p;
}


struct rectangle rectangle_translate(struct rectangle r, int x, int y){
	struct point p1 = { r.upper_left.x + x, r.upper_left.y + y };
	struct point p2 = { r.lower_right.x + x, r.lower_right.y + y };
	struct rectangle rm = { p1, p2 };

	return rm;
}

bool point_within_rectangle(struct rectangle r, struct point p){
	return p.x > r.upper_left.x && p.x < r.lower_right.x && p.y < r.upper_left.y && p.y > r.lower_right.y;
}

