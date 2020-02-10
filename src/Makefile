
STD_DIR = ~/.local/share/saphyr/pkgs/std

OBJS =  $(STD_DIR)/cstring.o main.o
C_OBJS = stat.o
CC = clang
TARGET = sybuild

# location to install
ifeq ($(INSTALL_DIR),)
        INSTALL_DIR = /usr/local/bin/
endif

sybuild : $(OBJS) $(C_OBJS)
	$(CC) -o $(TARGET) $(OBJS) $(C_OBJS)

clean :
	rm -f $(TARGET) $(OBJS) $(C_OBJS)

%.o : %.syp
	saphyr $<

%.o : %.c
	$(CC) -c $<

install : sybuild
	sudo cp $(TARGET) $(INSTALL_DIR)
