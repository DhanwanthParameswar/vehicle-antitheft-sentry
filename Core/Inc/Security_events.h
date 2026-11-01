#ifndef SECURITY_EVENTS_H
#define SECURITY_EVENTS_H

#include <stdint.h>

typedef enum {
    EVENT_TOUCH_DETECTED,
    EVENT_AUTH_SUCCESS,
    EVENT_IMPACT_ALERT
} EventType_t;

typedef struct {
    EventType_t type;
    uint32_t timestamp;
} SecurityEvent_t;

#endif
