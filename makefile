all: domainSeparation_good domainSeparation_bad

domainSeparation_good: ./1/src/domainSeparation_good.cpp
	g++ -o ./1/src/domainSeparation_good ./1/src/domainSeparation_good.cpp

domainSeparation_bad: ./1/src/domainSeparation_bad.cpp
	g++ -o ./1/src/domainSeparation_bad ./1/src/domainSeparation_bad.cpp

clean:
rm ./1/src/domainSeparation_good ./1/src/domainSeparation_bad
