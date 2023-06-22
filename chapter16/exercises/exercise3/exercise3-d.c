
struct complex { double real, imaginary; };

int main(void){
	struct complex c1, c2, c3;
}

struct complex add_complex(struct complex c1, struct complex c2) {
	
	return (struct complex) { c1.real + c2.real, c1.imaginary + c2.imaginary};
}

