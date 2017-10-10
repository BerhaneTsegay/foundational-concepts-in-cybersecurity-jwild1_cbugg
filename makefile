all: domainSeparation_good domainSeparation_bad processIsolation_good processIsolation_bad resourceEncapsulation_good resourceEncapsulation_bad leastPrivilege_good leastPrivilege_bad modularity_good modularity_bad

domainSeparation_good: ./1/src/domainSeparation_good.cpp
	g++ -o ./1/src/domainSeparation_good ./1/src/domainSeparation_good.cpp

domainSeparation_bad: ./1/src/domainSeparation_bad.cpp
	g++ -o ./1/src/domainSeparation_bad ./1/src/domainSeparation_bad.cpp

processIsolation_good: processIsolation_good.cpp
	g++ -o processIsolation_good processIsolation_good.cpp

processIsolation_bad: processIsolation_bad.cpp
	g++ -o processIsolation_bad processIsolation_bad.cpp

resourceEncapsulation_good: resourceEncapsulation_good.cpp
	g++ -o resourceEncapsulation_good resourceEncapsulation_good.cpp

resourceEncapsulation_bad: resourceEncapsulation_bad.cpp
	g++ -o resourceEncapsulation_bad resourceEncapsulation_bad.cpp

leastPrivilege_good: leastPrivilege_good.cpp
	g++ -o leastPrivilege_good leastPrivilege_good.cpp

leastPrivilege_bad: leastPrivilege_bad.cpp
	g++ -o leastPrivilege_bad leastPrivilege_bad.cpp

modularity_good: modularity_good.cpp
	g++ -o modularity_good modularity_good.cpp

modularity_bad: modularity_bad.cpp
	g++ -o modularity_bad modularity_bad.cpp

clean:
	rm ./1/src/domainSeparation_good ./1/src/domainSeparation_bad ./1/src/processIsolation_good ./1/src/processIsolation_bad ./1/src/resourceEncapsulation_good ./1/src/resourceEncapsulation_bad ./1/src/leastPrivilege_good ./1/src/leastPrivilege_bad ./1/src/modularity_good ./1/src/modularity_bad
