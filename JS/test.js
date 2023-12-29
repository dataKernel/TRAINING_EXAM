const		obj =
{
	x: 10,
	y: 10,
	
	calcul_aire()
	{
		let		res;

		res = this.x * this.y;
		return(res);
	},
};

let		aire_rectangle = obj.calcul_aire();
console.log(aire_rectangle);