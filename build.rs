extern crate gcc;

fn main() {
    gcc::Config::new().file("src/main.c").include("src").compile("libmain.a");
}
