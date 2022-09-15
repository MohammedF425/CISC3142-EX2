default: 
	make part1
	make part2
	make part3
lab2:
	make part1
	make part2
	make part3
part1:  
	c++ excer-1.5.cpp -o a.out
	./a.out 

part2:  
	c++ excer-1.11a.cpp -o a2.out
	./a2.out


part3:  
	c++ excer-1.11b.cpp -o a3.out
	./a3.out



