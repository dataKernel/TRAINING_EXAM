const   mainObject =
{
    mainArray:
    {
        a: 10,
        b: 20,
        info: "lvl1",
        nestedArray_lvl1:
        {
            a: 100,
            b: 200,
            info: "lvl2"
        }
    }
};

//affichage du main Array via le main Object
console.log(mainObject.mainArray);
//2e possibilité de syntaxe via `symbolic key``
console.log(mainObject['mainArray']);