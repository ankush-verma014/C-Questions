#include <stdio.h>

int main() {
    int vehicleType, vehicleAge, issueType, tyreCount;
    char ownerName[50], vehicleName[50];
    float bill = 0;

    
    printf("Enter the type of vehicle (2 for 2-wheeler, 3 for 3-wheeler, 4 for 4-wheeler): ");
    scanf("%d", &vehicleType);

    // Check if the vehicle type is accepted
    if (vehicleType != 2 && vehicleType != 3 && vehicleType != 4) {
        printf("This service center is not accepting other than 2 wheeler, 3 wheeler and 4 wheeler.\n");
        return 0;
    }

    // Input vehicle age
    printf("Enter the age of the vehicle (in months): ");
    scanf("%d", &vehicleAge);

    // Check if the vehicle age is acceptable
    if (vehicleAge <= 8) {
        printf("Your vehicle service will be done after a while.\n");
        return 0;
    }

    // Input owner and vehicle details
    printf("Enter the name of the owner: ");
    scanf("%s", ownerName);
    printf("Enter the name of the vehicle: ");
    scanf("%s", vehicleName);

    // Show service options
    printf("Options:\n");
    printf("1) Enter 1 for tyre problem\n");
    printf("2) Enter 2 for fuel problem\n");
    printf("3) Enter 3 for engine issue\n");
    printf("4) Enter 4 for general services\n");
    printf("Enter your choice: ");
    scanf("%d", &issueType);

    // Calculate the bill based on the issue type
    switch (issueType) {
        case 1:
            printf("How many tyres are you facing the issue with? ");
            scanf("%d", &tyreCount);
            bill = tyreCount * 400;
            break;
        case 2:
            bill = 1500;
            break;
        case 3:
            bill = 5000;
            break;
        case 4:
            bill = 1000;
            break;
        default:
            printf("Invalid option selected.\n");
            return 0;
    }

    // Print the bill
    printf("\n--- Bill ---\n");
    printf("Name of the owner: %s\n", ownerName);
    printf("Name of the vehicle: %s\n", vehicleName);
    printf("Issue: ");
    switch (issueType) {
        case 1:
            printf("Tyre problem\n");
            break;
        case 2:
            printf("Fuel problem\n");
            break;
        case 3:
            printf("Engine issue\n");
            break;
        case 4:
            printf("General services\n");
            break;
    }
    printf("Bill: Rs. %.2f\n", bill);

    return 0;

}

