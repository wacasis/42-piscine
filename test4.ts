interface Movie {
  title: string;
  rating: number;
}

function describe(movie: Movie): string {
  return `${movie.title} is rated ${movie.rating}/10.`;
}

const movies: Movie[] = [
  { title: "Inception", rating: 8.8 },
  { title: "The Matrix", rating: 8.7 },
  { title: "Interstellar", rating: 8.6 },
];

for (const movie of movies) {
  console.log(describe(movie));
}

const average = movies.reduce((sum, m) => sum + m.rating, 0) / movies.length;
console.log(`Average rating: ${average.toFixed(1)}/10`);
