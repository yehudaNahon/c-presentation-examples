#include <stdio.h>
#include <memory.h>

#define POINT_INIT(x, y) \
    {                    \
        x, y             \
    }
#define TRIANGLE_INIT(x, y, z) \
    {                          \
        {                      \
            x, y, z            \
        }                      \
    }
#define SQUARE_INIT(x, y, z, p) \
    {                           \
        {                       \
            x, y, z, p          \
        }                       \
    }

int main(int argc, char const *argv[])
{
    {
        struct Point
        {
            int x;
            int y;
        };

        struct Point point;

        point.x = 1;
        point.y = 2;

        printf("x: %d y:%d\n", point.x, point.y);
    }

    {
        typedef struct
        {
            int x;
            int y;
        } Point;

        typedef struct
        {
            Point points[3];
        } Triangle;

        Triangle triangle = {{{1, 2}, {3, 4}, {5, 6}}};

        printf("triangle: (%d)(%d) (%d)(%d) (%d)(%d)\n",
               triangle.points[0].x, triangle.points[0].y,
               triangle.points[1].x, triangle.points[1].y,
               triangle.points[2].x, triangle.points[2].y);
    }

    {
        typedef struct
        {
            int x;
            int y;
        } Point;

        typedef struct
        {
            Point points[3];
        } Triangle;

        typedef struct
        {
            Point points[4];
        } Squar;

        typedef struct
        {
            Triangle triangles[10];
            Squar squars[10];
        } Shapes;

        Shapes shapes = {
            {TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6)),
             TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6)),
             TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6))},
            {
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
            }};
    }

    {
        typedef struct
        {
            int x;
            int y;
        } Point;

        typedef enum
        {
            ETriangle,
            ESquare
        } ShapeType;

        typedef struct
        {
            ShapeType type;
            Point points[3];
        } Triangle;

        typedef struct
        {
            ShapeType type;
            Point points[4];
        } Square;

        typedef union {
            ShapeType type;
            Triangle triangle;
            Square square;
        } Shapes;

        typedef struct
        {
            Shapes shapes;
        } Shapes;

        Shapes shapes = {
            {
                TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6)),
                TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6)),
                TRIANGLE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
                SQUARE_INIT(POINT_INIT(1, 2), POINT_INIT(3, 4), POINT_INIT(5, 6), POINT_INIT(7, 8)),
            }};
    }

    return 0;
}
