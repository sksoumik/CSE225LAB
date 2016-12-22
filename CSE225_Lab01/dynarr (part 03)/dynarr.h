#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr
{
    private:
        int **data;
        int size;

    public:
        dynArr();
        dynArr(int);
        ~dynArr();
        void allocate(int);
        void set(int, int, int);
        int get(int, int);
};

#endif // DYNARR_H_INCLUDED
