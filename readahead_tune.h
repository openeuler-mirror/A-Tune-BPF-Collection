#ifndef _READAHEAD_TUNE_H
#define _READAHEAD_TUNE_H

#define ZERO_PERCENTAGE 0
#define HUNDRED_PERCENTAGE 100
#define DEFAULT_FILESZ (4<< 20)
#define DEFAULT_READ_TIME 500000000ULL
#define DEFAULT_TOTAL_READ 10
#define DEFAULT_LOWER_BOUND 30
#define DEFAULT_UPPER_BOUND 70

enum conf_type {
    CONF_FILESZ,
    CONF_READ_TIME,
    CONF_TOTAL_READ,
    CONF_LOWER_BOUND,
    CONF_UPPER_BOUND,
    CONF_NUM,
};

#endif