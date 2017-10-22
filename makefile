all: domainSeparation_good domainSeparation_bad\
processIsolation_good processIsolation_bad\
resourceEncapsulation_good resourceEncapsulation_bad\
leastPrivilege_good leastPrivilege_bad\
modularity_good modularity_bad\ 
layering_good layering_bad\
abstraction_good abstraction_bad\
data_hiding_good data_hiding_bad\
simplicity_good simplicity_bad\
minimization_good minimization_bad

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
	g++ -std=gnu++11 -o ./4/src/leastPrivilege_good ./4/src/leastPrivilege_good.cpp

leastPrivilege_bad: ./4/src/leastPrivilege_bad.cpp
	g++ -std=gnu++11 -o ./4/src/leastPrivilege_bad ./4/src/leastPrivilege_bad.cpp

modularity_good: ./5/src/modularity_good.cpp ./5/src/modularity_good.h
	g++ -o ./5/src/modularity_good ./5/src/modularity_good.cpp ./5/src/modularity_good.h

modularity_bad: ./5/src/modularity_bad.cpp
	g++ -o ./5/src/modularity_bad ./5/src/modularity_bad.cpp

layering_good: ./6/src/layering_good.cpp
	g++ -std=gnu++11 -o ./6/src/layering_good ./6/src/layering_good.cpp

layering_bad: ./6/src/layering_bad.cpp
	g++ -std=gnu++11 -o ./6/src/layering_bad ./6/src/layering_bad.cpp

abstraction_good: ./7/src/abstraction_good.cpp
	g++ -std=gnu++11 -o ./7/src/abstraction_good ./7/src/abstraction_good.cpp

abstraction_bad: ./7/src/abstraction_bad.cpp
	g++ -std=gnu++11 -o ./7/src/abstraction_bad ./7/src/abstraction_bad.cpp

data_hiding_good: ./8/src/data_hiding_good.cpp
	g++ -std=gnu++11 -o ./8/src/data_hiding_good ./8/src/data_hiding_good.cpp

data_hiding_bad: ./8/src/data_hiding_bad.cpp
	g++ -std=gnu++11 -o ./8/src/data_hiding_bad ./8/src/data_hiding_bad.cpp

simplicity_good: ./9/src/simplicity_good.cpp ./9/src/simplicity_good.h
	g++ -o ./9/src/simplicity_good ./9/src/simplicity_good.cpp ./9/src/simplicity_good.h

simplicity_bad: ./9/src/simplicity_bad.cpp
	g++ -o ./9/src/simplicity_bad ./9/src/simplicity_bad.cpp

minimization_good: ./10/src/minimization_good.cpp ./10/src/minimization_good.h
	g++ -o ./10/src/minimization_good ./10/src/minimization_good.cpp ./10/src/minimization_good.h

minimization_bad: ./10/src/minimization_bad.cpp
	g++ -o ./10/src/minimization_bad ./10/src/minimization_bad.cpp

clean:
	rm ./1/src/domainSeparation_good ./1/src/domainSeparation_bad\
./2/src/processIsolation_good ./2/src/processIsolation_bad\
./3/src/resourceEncapsulation_good ./3/src/resourceEncapsulation_bad\
./4/src/leastPrivilege_good ./4/src/leastPrivilege_bad\
./5/src/modularity_good ./5/src/modularity_bad\
./6/src/layering_good ./6/src/layering_bad\
./7/src/abstraction_good ./7/src/abstraction_bad\
./8/src/data_hiding_good ./8/src/data_hiding_bad\
./9/src/simplicity_good ./9/src/simplicity_bad\
./10/src/minimization_good ./10/src/minimization_bad	
