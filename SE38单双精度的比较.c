/* ====================================================
#   Copyright (C) 2020 All rights reserved.
#
#   Author        : James Hopbourn
#   Email         : JamesHopbourn@gmail.com
#   File Name     : SE38单双精度的比较.c
#   Last Modified : 2020-12-02 10:40
#   Describe      : 
#
# ====================================================*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	double a=1.012345678912345;
	float b=1.012345678912345;
	printf("%.10lf\n", a);
	printf("%.10f\n", b);

	// 1.0123456789
	// 1.0123456717
}
