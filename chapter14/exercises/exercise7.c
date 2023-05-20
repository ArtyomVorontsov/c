#define GENERIC_MAX(type)	\
type type##_max(type x, type y)	\
{				\
	return x > y ? x : y;	\
}				\

// a)
// GENERIC_MAX(long)
// long long_max(long x, long y)
// {
// 	return x > y ? x : y
// }

// b) 
// type##_max will be expanded such as - unsigned long_max(...
// For function it is illegal to have space in function name


// c)
// define custom type with preprocessor #define declaration, for example:
// typedef unsigned long u_long;
// Then we can use u_long instead unsigned long 
