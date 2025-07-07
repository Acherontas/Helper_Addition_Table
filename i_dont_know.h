#ifndef I_DONT_KNOW_H
#define I_DONT_KNOW_H


/*
1	5	    7	    8	    4	    2
2	1	    5	    7	    8	    4
3	6	    3	    6	    3	    6
4	2	    1	    5	    7	    8
5	7	    8	    4	    2	    1
6	3	    6	    3	    6	    3
7	8	    4	    2	    1	    5
8	4	    2	    1	    5	    7
9	9 or 0	9 or 0	9 or 0	9 or 0	9 or 0

pos	2	7	8	5
“+”	4	3	7	1	@i or pivot
	“-”	“-”	“-”	“-”
	7	1	5	6

	2	“+”	4
	In 2		@4 number in the row of 2	plus one row	“=”	6

	8	“+”	7
	In 8		@7 number in the row of 8	plus one row	Minus 1	“=”	5
					and we keep		1


								special use of 3,6,9
		if	x+y>9	z as result	z=z-1
		if	x=y	Z=1	Z=10			special use of pos of digit in length
				z>1	z=z-1
								gia to kratoumeno

*/



class i_dont_know
{
    public:
        i_dont_know();
        virtual ~i_dont_know();
        i_dont_know(const i_dont_know& other);
        i_dont_know& operator=(const i_dont_know& other);

    protected:

    private:
};

#endif // I_DONT_KNOW_H
