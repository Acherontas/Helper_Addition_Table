#ifndef FIX_ONE_H
#define FIX_ONE_H
#include <string>
using namespace std;
class fix_one
{
    public:
        fix_one();
        virtual ~fix_one();
        fix_one(const fix_one& other);
        fix_one& operator=(const fix_one& other);
        int fxkri=0;
        int fk_fix(int vl,int pos,int sx);
        char ck;
        char mk;
        int lk=0;
        int kk=0;
        int posi=0;
        int status=0;
        string vli;
    protected:

    private:
};

#endif // FIX_ONE_H
