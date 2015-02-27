#ifndef CGIWIFI_H
#define CGIWIFI_H

#include "httpd.h"

int cgiWiFiScan(HttpdConnData *connData);
void tplWlan(HttpdConnData *connData, char *token, void **arg);
int cgiWiFi(HttpdConnData *connData);
int cgiWiFiConnect(HttpdConnData *connData);
int cgiWiFiapconfig(HttpdConnData *connData);
int cgiWiFimodeconfig(HttpdConnData *connData);
int cgiReboot(HttpdConnData *connData);

#endif
