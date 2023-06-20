
struct complex { double real, imaginary; };

int main(void){
	struct complex c1, c2, c3;
}

struct complex make_complex(double real, double imaginary) {
	
	return (struct complex) { real, imaginary };
}

