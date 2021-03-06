#ifndef WIFI_H
#define WIFI_H

#include "../../src/tools.h"
#include <iostream>
#include <string>
#include <regex>
#include <iterator>

//use to get network interfaces name
#include <sys/types.h>
#include <ifaddrs.h>
//verify if the mac given is a mac address
int mac_regex(const std::string mac);
//verify if a file exist
inline bool file_exist(const std::string& name);
//create a backup of a file
void copy_file(const std::string src,const std::string dst);
//create a file conf to connect to an access point
//mac = mac address of the access point
//pass = password of the access point
//path = name of the new wpa_supplicant file
int add_supplicant(const std::string essid, const std::string mac, const std::string pass, const std::string path);
//add the new wpa_supplicant in the interface configuration
//interface = interface used to connect to the access point
int change_wifi(const std::string interface, const std::string path);


#endif
