const inventory = {
	sunglasses: 1900,
	pants: 1088,
	bags: 1344
};

// Write your code below:
const 	myExecutor = function(resolve, reject)
{
	if(inventory.sunglasses > 0)
		resolve("Sunglasses order processed");
	else
		reject("That item is solved out.");
};