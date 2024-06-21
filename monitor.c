#include <gtk/gtk.h>
#include "monitor.h"
struct width_height *getMonitorSize(){
  GdkDisplay *display = gdk_display_get_default();
  GdkWindow  *gdkwindow = gdk_get_default_root_window ();
  GdkMonitor *monitor = gdk_display_get_monitor_at_window (display, gdkwindow);
  gdk_monitor_get_geometry(monitor, &workarea);
  struct width_height *wh = g_malloc(sizeof(struct width_height));
  wh->width = workarea.width;
  wh->height = workarea.height;
  g_free(display);
  g_free(gdkwindow);
  g_free(monitor);

  return wh;
}
