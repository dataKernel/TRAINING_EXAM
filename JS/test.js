const robot = {
	model: 'SAL-1000',
	mobile: true,
	sentient: false,
	armor: 'Steel-plated',
	energyLevel: 75
};
Object.valueof
// What is missing in the following method call?
const robotKeys = Object.keys(robot);

console.log(robotKeys);

// // Declare robotEntries below this line:
const	robotEntries = Object.entries(robot);

// console.log(robotEntries);
console.log(robotEntries);
// // Declare newRobot below this line:
const	newRobot =
{
	laserBlaster: true,
	voiceRecognition: true
};
Object.assign(newRobot, robot);

// console.log(newRobot);
console.log(newRobot);