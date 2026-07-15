interface Person {
  name: string;
  age: number;
}

function greet(person: Person): string {
  return `Hello, ${person.name}! You are ${person.age} years old.`;
}

const people: Person[] = [
  { name: "Alice", age: 30 },
  { name: "Bob", age: 25 },
];

for (const person of people) {
  console.log(greet(person));
}

const total = people.reduce((sum, p) => sum + p.age, 0);
console.log(`Total age: ${total}`);
