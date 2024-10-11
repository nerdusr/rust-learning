use std::io;

fn main() {

    let mut txt = String::new();
    io::stdin().read_line(&mut txt).expect("not valid");
    
    let splited_name: std::str::Split<'_, &str> = txt.trim().split(" ");

    for i in splited_name
    {
        print!("{} | ", i);
    }







}
