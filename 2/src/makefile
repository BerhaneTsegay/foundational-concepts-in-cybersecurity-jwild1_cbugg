all: processIsolation_good processIsolation_bad

processIsolation_good: processIsolation_good.cpp
	g++ -std=gnu++11 -pthread -o processIsolation_good processIsolation_good.cpp

processIsolation_bad: processIsolation_bad.cpp
	g++ -std=gnu++11 -pthread -o processIsolation_bad processIsolation_bad.cpp

clean:
	rm processIsolation_good processIsolation_bad
