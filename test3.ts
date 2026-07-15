interface City {
  name: string;
  population: number;
}

function describe(city: City): string {
  return `${city.name} has ${city.population.toLocaleString()} inhabitants.`;
}

const cities: City[] = [
  { name: "Paris", population: 2100000 },
  { name: "Lille", population: 236000 },
  { name: "Lyon", population: 522000 },
];

for (const city of cities) {
  console.log(describe(city));
}

const total = cities.reduce((sum, c) => sum + c.population, 0);
console.log(`Total population: ${total.toLocaleString()}`);
