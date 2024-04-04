#include<stdio.h>
#include <stdbool.h>

struct control_msg
{
    int opcode;
    int status_code;
};

union Packet
{   
    struct control_msg control_msg;
    char data_payload[20];
};

struct DataPacket
{
    int flag;
    union Packet packet;
};

int main(){

    int N;

    printf("Enter size for datapacket: ");
    scanf("%d",&N);

    struct DataPacket data[N];
    for (int i = 0; i < N; i++)
    {
        printf("\nFor datapacket %d\n",i+1);
        printf("Enter choice :\n");
        printf("1.Control Message\n2.Payload\n");
        scanf("%d", &data[i].flag);
        switch (data[i].flag)
        {
        case 1:
            printf("Enter the opcode :");
            scanf("%d", &data[i].packet.control_msg.opcode);
            printf("Enter the statuscode :");
            scanf("%d", &data[i].packet.control_msg.status_code);

            break;
        case 2:
            printf("Enter the payload :");
            fflush(stdin);
            gets(data[i].packet.data_payload);
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    printf("\nPrinting all the values...\n");

    for(int i=0;i<N;i++){
        printf("\nFor datapacket %d\n",i+1);
        if(data[i].flag==1){
            printf("opcode : %d\n", data[i].packet.control_msg.opcode);
            printf("Status code : %d\n", data[i].packet.control_msg.status_code);
        }
        else{
            printf("Payload : %s",data[i].packet.data_payload);
        }
    }

    return 0;
}