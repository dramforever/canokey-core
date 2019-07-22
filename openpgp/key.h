#ifndef CANOKEY_CORE_OPENPGP_KEY_H
#define CANOKEY_CORE_OPENPGP_KEY_H

#include <stdint.h>

#define KEY_FINGERPRINT_LENGTH 20
#define KEY_DATETIME_LENGTH 4

void openpgp_key_get_attributes(void *buf);
int openpgp_key_get_fingerprint(const char *path, void *buf);
int openpgp_key_set_fingerprint(const char *path, const void *buf);
int openpgp_key_get_datetime(const char *path, void *buf);
int openpgp_key_set_datetime(const char *path, const void *buf);

#endif // CANOKEY_CORE_OPENPGP_KEY_H
