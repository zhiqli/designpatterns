CC=g++
INC=-I../inc 
CCFLAGS=-g -Wall -O0

SRCS=$(wildcard $(addsuffix /*.cpp,./))
OBJS=$(SRCS:.cpp=.o)

client:$(OBJS)
	$(CC) $^ -o $@  
%.o:%.cpp
	$(CC) -c $< $(CCFLAGS) $(INC)

.PHONY:clean
clean:
	rm -f *.o client
