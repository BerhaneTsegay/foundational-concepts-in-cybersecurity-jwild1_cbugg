all: domainSeparation_good domainSeparation_bad processIsolation_good processIsolation_bad resourceEncapsulation_good resourceEncapsulation_bad leastPrivilege_good leastPrivilege_bad modularity_good modularity_bad

domainSeparation_good: ./1/src/domainSeparation_good.cpp
	g++ -o ./1/src/domainSeparation_good ./1/src/domainSeparation_good.cpp

domainSeparation_bad: ./1/src/domainSeparation_bad.cpp
	g++ -o ./1/src/domainSeparation_bad ./1/src/domainSeparation_bad.cpp

processIsolation_good: ./2/src/processIsolation_good.cpp
	g++ -std=gnu++11 -pthread -o ./2/src/processIsolation_good ./2/src/processIsolation_good.cpp

processIsolation_bad: ./2/src/processIsolation_bad.cpp
	g++ -std=gnu++11 -pthread -o ./2/src/processIsolation_bad ./2/src/processIsolation_bad.cpp

resourceEncapsulation_good: ./3/src/resourceEncapsulation_good.cpp
	g++ -std=gnu++11 -o ./3/src/resourceEncapsulation_good ./3/src/resourceEncapsulation_good.cpp

resourceEncapsulation_bad: ./3/src/resourceEncapsulation_bad.cpp
	g++ -std=gnu++11 -o ./3/src/resourceEncapsulation_bad ./3/src/resourceEncapsulation_bad.cpp

leastPrivilege_good: ./4/src/leastPrivilege_good.cpp
	g++ -o ./4/src/leastPrivilege_good ./4/src/leastPrivilege_good.cpp

leastPrivilege_bad: ./4/src/leastPrivilege_bad.cpp
	g++ -o ./4/src/leastPrivilege_bad ./4/src/leastPrivilege_bad.cpp

modularity_good: ./5/src/modularity_good.cpp
	g++ -o ./5/src/modularity_good ./5/src/modularity_good.cpp

modularity_bad: ./5/src/modularity_bad.cpp
	g++ -o ./5/src/modularity_bad ./5/src/modularity_bad.cpp

clean:
	rm ./1/src/domainSeparation_good ./1/src/domainSeparation_bad ./2/src/processIsolation_good ./2/src/processIsolation_bad ./3/src/resourceEncapsulation_good ./3/src/resourceEncapsulation_bad ./4/src/leastPrivilege_good ./4/src/leastPrivilege_bad ./5/src/modularity_good ./5/src/modularity_bad
