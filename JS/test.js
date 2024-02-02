const 	add = function(a, b){console.log(`res: ${a + b}`); return(a + b);}
const	addArrow = (a, b) => {return(a + b);};
const	addArrow2 = (a, b) => a + b;

console.log(add(1, 1));
console.log(addArrow(2, 2));
console.log(addArrow2(3, 3));

function 	check_string_equals(str1, str2)
{
	let		check;
	let		i;

	if (typeof (str1) != "string" || typeof (str2) != "string")
		return (false);
	i = 0;
	check = true;
	while(str1[i] || str2[i])
	{
		if(str1[i] != str2[i])
		{
			check = false;
			break;
		}
		i++;
	}
	return(check);
}

function 	check_email_is_valid(email)
{
	const	tabDns = ["gmail", "hotmail", "outlook", "gm"];
	let		check = false;
	let		dns = [];
	let		i = 0;

	while(i < email.length)
	{
		if(email[i] == '@')
		{
			check = true;
			i++;
			while(email[i] != '.')
			{
				dns += email[i];
				i++;
			}
		}
		i++;
	}
	i = 0;
	while(i < tabDns.length)
	{
		if(check_string_equals(dns, tabDns[i]) && check)
			return(true);
		i++;
	}
	return(false);
}

console.log(check_email_is_valid("la@gm.com"));