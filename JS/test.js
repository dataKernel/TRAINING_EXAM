const   mainObject =
{
    mainArray:
    {
        a: 10,
        b: 20,
        info: "mainArray",
        nestedArray_lvl1:
        {
            a: 100,
            b: 200,
            info: "lvl_1 nested array"
        }
    }
};

//affichage du Nested Array 
console.log(mainObject.mainArray.nestedArray_lvl1);
