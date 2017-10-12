all: modularity_good modularity_bad

modularity_good: modularity_good.cpp modularity_good.h
	g++ -o modularity_good modularity_good.cpp modularity_good.h

modularity_bad: modularity_bad.cpp
	g++ -o modularity_bad modularity_bad.cpp

clean:
	rm modularity_good modularity_bad
