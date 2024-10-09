use std::io;

fn main() {
    
    let x = [1, 2, 3, 4, 5];
    
    loop {
        let mut index = String::new();
        println!("Enter index: ");
        io::stdin().read_line(&mut index).expect("Failed to read line");
        let index: usize = index.trim().parse().expect("Not found Index");
        let element = x[index];

        println!("{}", element);
    }
}
