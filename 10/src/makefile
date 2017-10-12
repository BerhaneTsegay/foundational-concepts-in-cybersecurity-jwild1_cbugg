all: minimization_good minimization_bad

minimization_good: minimization_good.cpp minimization_good.h
	g++ -o minimization_good minimization_good.cpp minimization_good.h

minimization_bad: minimization_bad.cpp
	g++ -o minimization_bad minimization_bad.cpp

clean:
	rm minimization_good minimization_bad
