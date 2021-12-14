
PKG_DIR = ~/.local/share/saphyr/pkgs

OBJS =  $(PKG_DIR)/std/cstring.o $(PKG_DIR)/std/ioutil.o main.o deptree.o
C_OBJS = $(PKG_DIR)/std/linuxutil_ext.o
CC = clang
TARGET = sybuild

# location to install
ifeq ($(INSTALL_DIR),)
        INSTALL_DIR = /usr/local/bin/
endif

sybuild : $(OBJS) $(C_OBJS)
	$(CC) -o $(TARGET) -lglib-2.0 $(OBJS) $(C_OBJS)

clean :
	rm -f $(TARGET) $(OBJS) $(C_OBJS)

%.o : %.syp
	saphyr $<

%.o : %.c
	$(CC) -c $< -o $@

install : sybuild
	sudo cp $(TARGET) $(INSTALL_DIR)
