#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, ack;
    
    printf("Enter number of frames to send: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        printf("\nSending Frame %d\n", i);

        // Simulate frame transmission success or failure randomly
        int frame_status = rand() % 2;  // 0 = lost, 1 = received
        if(frame_status == 1) {
            printf("Frame %d received successfully.\n", i);
            printf("Sending ACK for Frame %d...\n", i);
            ack = 1;
        } else {
            printf("Frame %d lost! Retransmitting...\n", i);
            ack = 0;
            i--; // retransmit the same frame
        }
    }

    printf("\nAll frames transmitted successfully.\n");
    return 0;
}
