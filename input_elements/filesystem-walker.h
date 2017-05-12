
#ifndef __FILESYSTEM_WALKER_H__
#define __FILESYSTEM_WALKER_H__

#include "read_from_filesystem.h"

int inspect_file(unsigned char *, void *);
int open_directory_recursive(const unsigned char *path, void *audit_log_entry_cb,
        struct read_from_filesystem_config_t *conf);
#endif
