void ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return (NULL);
    while (*s)
    {
        write(fd, s, 1);
        s++;
    }
    write(fd, "\n", 1);
}