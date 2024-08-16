#include <stdio.h>
#include <stdlib.h> 	
#include <unistd.h>

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}t_list;

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		cmp(void *value1, void *value2)
{
	if(*(int *)value1 == *(int*)value2)
		return(0);
	else
		return(1);
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void*))
{
	t_list		*head;
	t_list		*headPrev;

	head = *begin_list;
	headPrev = *begin_list;
	while(head)
	{
		if(cmp(head->data, data_ref) == 0)
		{
			headPrev = head->next;
			free(head->data);
			free(head);
			head = headPrev;
		}
		else
		{
			head = head->next;
			headPrev = head;
		}
	}
}

int		main(void)
{
	int			*data;
	t_list		*head;
	t_list		*node;
	t_list		*oldHead;

	head = NULL;
	oldHead = head;
	for(int i = 1; i <= 3; i++)
	{
		node = (t_list *) malloc(sizeof(t_list));
		data = (int *) malloc(sizeof(int));
		*data = i;
		node->data = (int *)data;
		if(head == NULL)
		{
			head = node;
			node->next = NULL;
		}
		else
		{
			oldHead->next = node;
			node->next = NULL;
		}
		oldHead = node;
	}
	//checking
	
	ft_list_remove_if(&head, head->data, cmp);
	for(int i = 1; i <= 3; i++)
	{
		printf("node[%i]->%i\n", i, *(int *)head->data);
		head = head->next;
	}
	return(0);
}