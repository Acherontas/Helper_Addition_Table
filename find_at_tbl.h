#ifndef FIND_AT_TBL_H
#define FIND_AT_TBL_H

class find_at_tbl
{
    public:
        find_at_tbl();
        virtual ~find_at_tbl();
        find_at_tbl(const find_at_tbl& other);
        find_at_tbl& operator=(const find_at_tbl& other);
        int arr_one[10]={1,2,3,4,5,6,7,8,9};
        int arr_five[10]={5,1,6,2,7,3,8,4,9};
        int arr_seven[10]={7,5,3,1,8,6,4,2,9};
        int arr_eight[10]={8,7,6,5,4,3,2,1,9};
        int arr_four[10]={4,8,3,7,2,6,1,5,9};
        int arr_two[10]={2,4,6,8,1,3,5,7,9};
        int find_value(int x,int y,int lz,int kri,int sx);
        int keep_it=0;
        int st=0;
        int fnl_tbl[100];
        int tf=0;
    protected:
    private:
};

#endif // FIND_AT_TBL_H
