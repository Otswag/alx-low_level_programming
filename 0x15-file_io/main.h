
#ifndef _MAIN_H
#define _MAIN_H
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void printabi(char *head)
void printversion(char *head)
void printdata(char *head)
void printclass(char *head)
void printtype(char *head)
int main(int ac, char *av[])
void printentry(char *head)
#endif /* #ifndef _MAIN_H */
