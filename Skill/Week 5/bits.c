/* 5 c) A device supports several applications. A software engineer would read the specifications of the device and understand its 
supported features. If a feature is supported, the respective bits of the ID would be set, which can be identified from the software 
specification. Below are the conditions to check the supported features: 
•	If only 2 bits are set, the device supports bluetooth.
•	If only 1 bit is set, the device can be used only for gaming.
•	If 3 bits of the ID are set, the device supports gaming, bluetooth, audio. 
•	If the ID provided is ‘49’, report the supported features. */

#include<stdio.h>

int main()
    {
        int id, binary_id[20];    
        int m=0, config=0;

        printf("\nWelcome, Enter the ID: ");
        scanf("%d",&id);

        while (id>0)                            //loop to convert the given decimal number to Binary.
            {
                binary_id[m] = id%2;            //Taking the remainder value of the id and store it in array.
                id = id/2;
                m++;
            }
        for (int q = m - 1; q >= 0; q--)        //Loop to count number of 1's in the converted binary id number.
            {
                if(binary_id[q]==1)
                config = config + 1;
            }
        
        switch (config)                         //Switch case to secet the condition based on number of 1's
        {
        case 1:
                printf("\nThe given device id is configure only to Gaming.\n");
            break;
        case 2:
                printf("\nThe given device id is configure only to support Bluetooth.\n");
            break;
        case 3:
                printf("\nThe given device id is configure only to support Bluetooth, Gaming & audio.\n");
            break;
        default:
                printf("\nThe given device id is not configured to support Bluetooth, Gaming & audio.\n");
            break;
        }
    }