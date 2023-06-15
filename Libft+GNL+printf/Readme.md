# Libft manual

## ft_atoi()

```c
int ft_atoi(const char *nptr)
```

ft_atoi() converts the first part of `nptr` into an integer. It ignores all leading white spaces and will convert a single leading '+' or '-' character.

ft_atoi() will only convert up to the first occuring non-digit character, and if the number stored in `nptr` is greater than `MAX_INT` or smaller than `MIN_INT`, the result is undefined.

This function returns the integer result from the conversion above or 0 if there was no conversion.

## ft_bzero()

```c
void ft_bzero(void *s, size_t n)
```

ft_bzero() will set `n` number of bytes to 0, starting from `s`.

This function does not return a value.

## ft_calloc()

```c
void *ft_calloc(size_t nmemb, size_t size)
```

ft_calloc() mallocs `mbemb` multiplied by `size` number of bytes and sets the newly allocated memory area to null characters.

This function returns a pointer to the start of the newly allocated area.

## ft_is*()

```c
int ft_is*(int c)
```

Checks `c` for the corrosponding condition:

- ft_isalnum() - checks if character is alphabetical or a digit.

- ft_isalpha() - checks if character is alphabetical.

- ft_isascii() - checks if character falls inside the basic ascii table.

- ft_isdigit() - checks if character is a digit.

- ft_isprint() - checks if a character is visible when printed to stdout.

These functions returns 1 of true, and 0 if false.

## ft_itoa()

```c
char *ft_itoa(int n)
```

ft_itoa() allocates memory for a string and fills it with the integer `n` converted to a string of ascii digits.

This function returns a pointer to the first btye of the newly allocated string.

## ft_lstadd_back()

### BONUS ONLY

```c
void ft_lstadd_back(t_list **lst, t_list *new)
```

ft_lstadd_back() adds `new` to the end of the linked list `lst`.

This function does not return a value.

## ft_lstadd_front()

### BONUS ONLY

```c
void ft_lstadd_front(t_list **lst, t_list *new)
```

ft_lstadd_front() adds `new` to the beginning of the linked list `lst`.

This function doesn't return a value

## ft_lstclear()

### BONUS ONLY

```c
void ft_lstclear(t_list **lst, void (*del)(void *))
```

ft_lstclear() deletes the entire linked list by applying the function `del` to the content of each node before freeing the node.

This function does not return a value.

## ft_lstdelone ()

### BONUS ONLY

```c
void ft_lstdelone(t_list *lst, void (*del)(void *))
```

ft_lstdelone() applies the function `del` to the node `lst` and then frees the node.

This function does not return a value.

## ft_lstiter()

### BONUS ONLY

```c
void ft_lstiter(t_list *lst, void (*f)(void *))
```

ft_lstiter() applies the function `f(void *)` to each node of the linked list `lst`

This function does not return a value.

## ft_lstlast()

### BONUS ONLY

```c
t_list *ft_lstlast(t_list *lst)
```

ft_lstlast() returns the last node of the linked list `lst`

## ft_lstmap()

### BONUS ONLY

```c
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
```

ft_lsmap() creates a new linked list by applying function `f(void *)` to the content of each node and setting the content of a newly allocated note to the function's result. The `del(void *)` function is then run on the content of each old node before the list is freed.

This function returns a pointer to the first node of the newly allocated linked list.

## ft_lstnew()

### BONUS ONLY

```c
t_list *ft_lstnew(void *content)
```

Allocates memory for a new linked list node and sets the node's content to `content`

This function returns the newly allocated node.

## ft_lstsize()

### BONUS ONLY

```c
int ft_lstsize(t_list *lst)
```

ft_lstsize() returns the length of the linked list.

## ft_memchr()

```c
void *ft_memchr(const void *s, int c, size_t n)
```

ft_memchr() searches the first `n` bytes of `s` for the first occurance of `c`.

If `c` is outside the extended ascii table, the number will overflow until inside.

This function returns a pointer to the first occurance of `c` or `NULL` if not found.

## ft_memcmp()

```c
int ft_memcmp(const void *s1, const void *s2, size_t n)
```

ft_memcmp() reads at most `n` characters from both `s1` and `s2` and compares them.

This function returns 0 if both strings are identical, otherwise it returns the difference between the first differing characters found. (Positive if s1's char is larger according to the ascii table.)

## ft_memcpy()

```c
void *ft_memcpy(void *dest, const void *src, size_t n)
```

ft_memcpy() copies at most `n` characters from `src` to `dest`.

ft_memcpy() makes no checks for invalid or overlapping memory. In these cases, the results are undefined.

This function returns a pointer to the first character of `dest`.

## ft_memmove()

```c
void *ft_memmove(void *dest, const void *src, size_t n)
```

ft_memmove() copies up to `n` bytes from `src` to `dest`.

This function checks for potential overlaps in memory. However, it doesn't check for invalid memory, in which case the result is undefined.

This function returns a pointer to the first character of `dest`.

## ft_putchar_fd()

```c
void ft_putchar_fd(char c, int fd)
```

ft_putchar_fd() will print `c` to file descriptor `fd`.

This function does not return a value.

## ft_putendl_fd()

```c
void ft_putendl_fd(char *s, int fd)
```

ft_putendl_fd() prints all character from `s` up to a null terminator into file descriptor `fd`. It also adds a new line.

This function does not return a value.

## ft_putnbr_fd()

```c
void ft_putnbr_fd(int n, int fd)
```

ft_putnbr_fd() prints out `n` into file descriptor `fd` in the form of a string.

This function does not return a value.

## ft_putstr_fd()

```c
void ft_putstr_fd(char *s, int fd)
```

ft_putstr_fd() prints all character from `s` up to a null terminator into file descriptor `fd`.

This function does not return a value.

## ft_printf

### EXTERNAL PROJECT

```c
int ft_printf(const char *format, ...);
```

ft_printf() will print all characters in string ``format`` that aren't part of a converter to standard output. A converter is considered a '%' character, followed by any number of arguments, before a character converter. Excluding the %% converter, a converter will take the next unused parameter of the variadic argument (...) and print it out according to the specified conversion.

The format for a converter is: `%+ #0-[0-9].[0-9][diuXxcsp%]`

### ARGUMENTS

- \#

    When used with the x or X conversion, a 0x will be appended to the beginning of the conversion. The case of the 0x is preserved for both conversions, (i.e 0x0000ffd3 and 0X0000FFD3.)

- 0

    When used with the d, i, x, X, or u conversions, the result is padded with 0s instead of spaces when a minimum width or precision is present.

- \-

    For all conversions, when a minimum width is present, the conversion will be left adjusted instead of right adjusted. This option overrides the 0 argument and will always pad the right with spaces.

- ' '

    (space) When used with the converters i, or d, a space will be printed before a positive number while a negative number will be unaffected.

- \+

    When used with the converters i, or d, a + character will be printed before a positive number while a negative number will be unaffected.

- Field width

    an optional, non-zero string will be parsed as a minimum width. This determines the minimum number of characters that must be present within the conversion. If a conversion has less characters than the field width, it will have spaces or 0s added before the conversion, or after if the - argument is present. A field width will never cause a conversion to truncate and if a converter's length is longer than the field width, this argument will have no effect. If the field width starts with a 0, it will be considered as the 0 argument and the following digits will be parsed as the field width.

- Precision

    In the presence of a full stop, any trailing digits will be parsed as the precision argument. For i, d, u, x, and X conversions, this specifies the minimum number of digits that must appear. 0s will be printed before the conversion if this number is greater than the length of the number. For string conversions, it specifies the maximum number of characters that can be printed. The string conversion will be truncated if its length is greater than the precision. a '.' with no digits will be considered to be a precision of 0, and a negative precision will be treated as if it were ommited entirely. ***no further arguments are parsed after precision***

### CONVERSIONS

- d, i

    an integer argument will be converted to its equivalent string and printed. The default precision is 1 and when the conversion is 0, with an explicit precision of 0 is specified, the output is empty.

- u, x, X

    u will convert the supplied integer to an unsigned integer while the x, and X converters will convert it to a hexadecimal format. x will print all characters in lowercase while X prints in uppercase. The default precision is 1 and if 0 is printed with a precision of 0, the output is empty.

- c

    prints a single character

- s

    prints a string up to either a null terminator or a precision if specified.

- p

    prints a pointer in hexadecimal form, in lowercase and appends '0x' to the front. The equivalent of the conversion '%#x'.

- %

    prints a '%' symbol to the screen. This converter doesn't convert any supplied argument but will still handle minimum width and precision arguments.

This function returns the total number of characters printed to the standard output unless an error occurs or an incorrect format is used in which it will return -1.

## ft_split()

```c
char **ft_split(const char *s, char c)
```

ft_split() takes a `c` deliminated string `s` and splits it into an array of strings.

This function returns a pointer to the first character in the first index of the array.

## ft_strchr()

```c
char *ft_strchr(const char *s, int c)
```

ft_strchr() reads `s` up to a terminating character and finds the first occurance of `c`.

If `c` is outside the extended ascii table it will be overflowed until inside.

This function returns a pointer to the first occurance of `c` found in `s`.

## ft_strdup()

```c
char *ft_strdup(const char *s)
```

ft_strdup() allocates the length of `s` bytes of memory and copies `s` up to a terminating character into the newly allocated memory.

This function returns a pointer to the first character of the new string.

## ft_striteri()

```c
void ft_striteri(char *s, void (*f)(unsigned int, char *))
```

ft_striter() applies function `f(unsigned int, char *)` to every character in `s`.

This function does not return a value.

## ft_strjoin()

```c
char *ft_strjoin(char const *s1, char const *s2)
```

ft_strjoin() allocates a number of bytes equal to the sum of lengths of `s1` and `s2` + 1 and fills it with the result of a string concatenation between `s1` and `s2`.

This function returns a pointer to the first character of the resultant string.

## ft_strlcat()

```c
size_t ft_strlcat(char *dst, const char *src, size_t size)
```

ft_strlcat() copies `src` onto the end of `dst`, up to a total string length of `size`. overwriting `src`'s null terminator.

if `size` is less than or equal to the lenth of `dst`, no copying will occur.

This function returns the total length of the new string. If `size` is smaller than the length of `dst`, it will return the sum of `size` and the length of `src`.

## ft_strlcpy()

```c
size_t ft_strlcpy(char *dst, const char *src, size_t size)
```

ft_strlcpy() will copy up to `size` characters from `src` to `dst`.

This function returns the length of `src`.

## ft_strlen()

```c
size_t ft_strlen(const char *s)
```

ft_strlen() counts the number of characters up to a null terminator in `s`.

This function returns the number of characters in string `s`.

## ft_strmapi()

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
```

ft_strmapi() allocates memory equal to the length of `s`, copying the result of each character being passed into `f(unsigned int, char)` to the new string.

This function returns a pointer to the first character of the string.

## ft_strncmp()

```c
int ft_strncmp(const char *s1, const char *s2, size_t n)
```

ft_strncmp compares up to `n` characters from `s1` and `s2`.

This function returns 0 if the compared strings are the same, otherwise it will return the difference between the ascii characters (returns a negative number if `s1` is smaller.)

## ft_strnstr()

```c
char *ft_strnstr(const char *haystack, const char *needle, size_t n)
```

Searches up to `n` characters to find `needle` in string `haystack`.

This function returns a pointer to the first character of the matched string if found. If not found, it will return `NULL`.

## ft_strrchr()

```c
char *ft_strrchr(const char *s, int c)
```

Traverses through string `s` backwards, until char `c` is found.

This function returns a pointer to the last instance of `c` in string `s` or `NULL` if not found.

## ft_strtrim()

```c
char *ft_strtrim(const char *s, const char *sep)
```

Trims all characters contained within `sep` from the beginning and end of a string and place the result in a newly allocated string.

This function returns a pointer to the first character of newly allocated string.

## ft_substr()

```c
char *ft_substr(const char *s, unsigned int start, size_t len)
```

ft_substr() copies `len` number of characters from `s` starting at index `start` into a newly allocated string.

This function returns a pointer to the first character of the newly allocated string.

## ft_tolower()

```c
int ft_tolower(int c)
```

ft_tolower() will change the character `c` into the lowercase equivilant of that character if `c` is alphabetical and uppercase.

This function will return the lowercase equivilant if applicable. Otherwise, it'll return `c`

## ft_toupper()

```c
int ft_toupper(int c)
```

ft_toupper() will change the character `c` into the uppercase equivilant of that character if `c` is alphabetical and lowercase.

This function will return the uppercase equivilant if applicable. Otherwise, it'll return `c`

## get_next_line()

### EXTERNAL PROJECT

```c
char *get_next_line(int fd);
```

get_next_line reads an entire line of the file descriptor `fd`. The function will read `BUFFER_SIZE` bytes at a time and if it reads more than a single line, it will be held in a temporary buffer. Subsequent calls of this function within the same program will read each following line. This specific implementation of get_next_line can handle 4000 file descriptors simultaneously.

This function will return a newly allocated string containing the entire line, including the \n if present.
