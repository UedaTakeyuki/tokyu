#ifndef MONITOR_H
#define MONITOR_H

#include <glib.h>

#define DESKTOP_MANAGER_HEIGHT 36 

// Width & Height struct
struct width_height {
    gint width;
    gint height;
};

struct width_height *getMonitorSize();

#endif /* MONITOR_H */