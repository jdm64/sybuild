OBJS = cstring.o main.o
TARGET = sybuild

sybuild : $(OBJS)
	clang -o $(TARGET) $(OBJS)

clean :
	rm -f $(TARGET) *.o

%.o : %.syp
	saphyr $<
