#include <stdio.h>
#include <time.h>
#include <libnotify/notify.h> // Require 'libnotify-bin'

#include "hello.h"

#define NOTIFICATION_DURATION 2

void notify_hello(char *name) {
    printf("Hello %s\n", name);
    printf("Notification will be visible for %d seconds...\n",
           NOTIFICATION_DURATION);

    notify_init("Makefile recipe");

    NotifyNotification *n = notify_notification_new("Hello", name, NULL);
    notify_notification_show(n, NULL);

    struct timespec t = { .tv_sec = NOTIFICATION_DURATION };
    nanosleep(&t, NULL);

    notify_notification_close(n, NULL);
    notify_uninit();
}
