OBJS = cstring.o main.o
TARGET = sybuild

sybuild : $(OBJS)
	gcc -o $(TARGET) $(OBJS)

clean :
	rm -f $(TARGET) *.o

%.o : %.syp
	saphyr $<
