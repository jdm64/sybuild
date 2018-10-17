OBJS = cstring.o main.o
C_OBJS = stat.o
CC = clang
TARGET = sybuild

sybuild : $(OBJS) $(C_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(C_OBJS) -lglib-2.0

clean :
	rm -f $(TARGET) *.o

%.o : %.syp
	saphyr $<

%.o : %.c
	$(CC) -c $<
