#include "libft.h"

//@Return
// the  initial	length of dst plus the length of src.
//@Description
// strlcat() appends string	src to the end of dst.	It will	append at most
// dstsize	- strlen(dst) -	1 characters.  It will then NUL-terminate
// unless dstsize is 0 or the	original dst string was	 longer	 than  dstsize

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t dst_len;
	size_t src_len;

	i = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	while (i < dstsize - dst_len - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dstsize != 0 && !(dst_len > dstsize))
	{
		dst[dst_len + i] = '\0';
	}
	return (dst_len + src_len);
}
