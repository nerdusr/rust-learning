use std::io;

fn main() {
    
    let mut x: [i32; 3] = [0, 0, 0];

    for i in 0..3
    {
            let mut val = String::new();
            println!("enter value for index[{}]: ", i);
            io::stdin().read_line(&mut val).expect("Your input is invalid");
            let val: i32 = val.trim().parse().expect("Your input not a number");
            x[i] = val;
    }

    print_list(x);

}

fn print_list(x: [i32; 3])
{
    for index in 0..x.len()
    {
        println!("x[{}] = {}", index, x[index]);
    }
}
