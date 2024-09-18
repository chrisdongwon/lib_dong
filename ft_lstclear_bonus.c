#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst && *lst && del)
	{
		if ((*lst)->next)
			ft_lstclear(&((*lst)->next), del);
		ft_lstdelone(*lst, del);
		*lst = 0;
	}
}
