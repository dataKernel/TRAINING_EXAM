t_node	*pop(t_node **head)
{
	t_node *firstElem;

	if (head == NULL || *head == NULL)
		return (NULL);
	firstElem = *head;
	*head = (*head)->next;
	firstElem->next = NULL;
	return (firstElem);

void	ft_putchar(char *c)
{
	return(0);
}
