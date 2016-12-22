#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

template <class T>
class Triangle
{
    private:
        T base;
        T height;

    public:
        Triangle();
        void setBase(T);
        void setHeight(T);
        T getHypotenuse();
        T getArea();
};

#endif // TRIANGLE_H_INCLUDED
