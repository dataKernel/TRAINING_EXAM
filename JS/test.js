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

const	obj2 =
{
	//dangereux il faudra tjs set les membres avant de call la methode
	x: undefined,
	y: undefined,

	calcul_aire()
	{
		let		res;

		res = this.x * this.y;
		return(res);
	}
}

let		aire_rectangle = obj.calcul_aire();
obj2.x = 2;
obj2.y = 3;
console.log(obj2);
aire_rectangle = obj2.calcul_aire();
console.log(aire_rectangle);