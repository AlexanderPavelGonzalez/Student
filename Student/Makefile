CC = g++
CFLAGS = -Wall -Werror -std=c++11
OBJS = Student.o studentDemo.o
EXE = student

$(EXE) : $(OBJS) 
	$(CC) $(OBJS) -o $@
	./student
studentDemo.o: studentDemo.cpp Student.h
	$(CC) -c $(CFLAGS) studentDemo.cpp -o $@
Student.o: Student.cpp Student.h
	$(CC) -c Student.cpp $(CFLAGS)
clean:
	rm -f $(OBJS) $(EXE) *~
