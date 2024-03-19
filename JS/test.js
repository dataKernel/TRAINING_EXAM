//méthode classique
const   afficher_nbr = (n) => 
{
    console.log("le nombre est " + n);
}
//méthode Factory
function    usine_guerrier(nom, force, armure, arme)
{
    return{
        nom: nom,
        force: force,
        armure: armure,
        arme: arme
    };
}
//generation de 3 guerriers différents (litteral object) à la volée
const   guts = usine_guerrier("guts", 1000, 500, "epée géante");
const   lancelot = usine_guerrier("lancelot", 300, 100, "épée de chevalier");
const   ambre = usine_guerrier("ambre", 240, -40, "caipirinha");
//checking de la gen d'objets via méthodes Factory
console.log(guts, lancelot, ambre);