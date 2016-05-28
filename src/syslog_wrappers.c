#include <syslog.h>

int set_log_mask_upto (int mask)
{
  setlogmask (LOG_UPTO(mask));
}
