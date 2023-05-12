#include "main.h"


int create_file(const char *filename, char *text_content)
{
    int file_data;
    int n_letters;
    int r_wr;
    
    if (!filename)
        return (-1);
    
    file_data = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

    if (file_data == -1)
        return (-1);
    
    if (!text_content)
        text_content = "";
    
    for (n_letters = 0; text_content[n_letters]; n_letters++)
        ;
    
    r_wr = write(file_data, text_content, n_letters);

    if (r_wr == -1)
        return (-1);
    
    close(file_data);
    return (1);
}