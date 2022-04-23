void quit()
{
    int h;
    if (save_flag==0)
    {
        printf("\nYour changes have not been saved yet!\n1- Save\n2- Don't save\n3- Cancel\n\nChoice: ");
        do{
        scanf("%d", &h);
        if (h>3 || h<1)
            printf("Please enter correct number: ");
        }
        while(h>3 || h<1);
        switch(h)
        {
        case 1:
            save_file(person);
            printf("Changes saved successfully!\n\n");
            exit_choice=1;
            break;
        case 2:
            exit_choice=1;
            break;
        case 3:
            exit_choice=0;
        }
    }
    else if(save_flag==1)
    {
        printf("\nAre you sure you want to exit?\n1- Yes\n2- No\n\nChoice: ");
        do{
        scanf("%d", &h);
        if (h!=1 && h!=2)
            printf("Please enter correct number: ");
        }
        while(h!=1 && h!=2);
        if (h==1)
            exit_choice=1;
        else if (h==2)
            exit_choice=0;
    }
}
