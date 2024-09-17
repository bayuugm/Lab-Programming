all:
	g++ -o Quadratic_Solver Quadratic_Solver.cpp

dump:
	objdump -d Quadratic_Solver > Quadratic_Solver.asm

clean:
	rm -f Quadratic_Solver.o Quadratic_Solver

run: Quadratic_Solver
	./Quadratic_Solver

