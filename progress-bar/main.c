// https://youtu.be/t_vM_8TLjFE
// https://youtu.be/ayfCxgVStdQ

// Multiline example: https://github.com/JustAnotherNotes/just-another-pomodoro

#include <stdio.h> // printf(); fflush();
#include <unistd.h> // usleep(); STDOUT_FILENO;
#include <sys/ioctl.h> // ioctl(); TIOCGWINSZ; struct winsize;

int main() {
    struct winsize window;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &window);

    const int max_percent = 100;
    const int max_progress = window.ws_col - 8;

    float current_progress;
    for (int i = 1; i <= max_percent; i++) {
        for (int m = 0; m < window.ws_col; m++) {
            printf(" ");
        }
        printf("\r");
        printf("some output %d\n", i);

        current_progress = i * max_progress / max_percent;
        printf("[");
        for (int j = 0; j < current_progress; j++) {
            printf("|");
        }
        for (int k = current_progress; k < max_progress; k++) {
            printf(" ");
        }
        printf("] %d%%\r", i);
        fflush(stdout);

        usleep(25000);
    }
    printf("\n");

    return 0;
}
