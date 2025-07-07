#ifndef RULES_TBL_H
#define RULES_TBL_H

class rules_tbl
{
    public:
        rules_tbl();
        virtual ~rules_tbl();
        rules_tbl(const rules_tbl& other);
        rules_tbl& operator=(const rules_tbl& other);
        //acquire a mode to send
        int xx=0;
        int yy=0;
        int rule_minumum_than_nine(int x,int y,int sx);
        int rule_x_equal_y(int x,int y,int sx);
        int rule_three(int x,int y,int sx);
        int rule_six(int x,int y,int sx);
        int rule_nine(int x,int y,int sx);
    protected:
    private:
};

#endif // RULES_TBL_H
