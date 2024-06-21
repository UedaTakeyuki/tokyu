SRCS    = src/main.c src/monitor.c
HDRS    = src/monitor.h
ALL     = $(SRCS) $(HDRS) 

tokyu: $(ALL)
	gcc $(SRCS) -g `pkg-config --cflags --libs gtk+-3.0 webkit2gtk-4.0` -o $@
