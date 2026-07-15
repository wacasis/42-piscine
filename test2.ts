interface Product {
  name: string;
  price: number;
}

function describe(product: Product): string {
  return `${product.name} costs $${product.price.toFixed(2)}`;
}

const products: Product[] = [
  { name: "Coffee", price: 3.5 },
  { name: "Sandwich", price: 8.25 },
  { name: "Cookie", price: 2 },
];

for (const product of products) {
  console.log(describe(product));
}

const total = products.reduce((sum, p) => sum + p.price, 0);
console.log(`Total price: $${total.toFixed(2)}`);
