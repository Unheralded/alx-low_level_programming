#STATIC LIBRARIES
ex.0. Compilation - gcc -c math.c -o math.o
ex.1 Linking - ar rcs libmath.a math.0
ex.2. Run program (main.c) with static lib - gcc main.c -o main -L. -lmath
