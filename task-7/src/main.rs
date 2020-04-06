extern crate regex;
use regex::Regex;
fn main()
{
let re = Regex::new(r"^([a-zA-Z0-9_\-\.]+)@([a-zA-Z0-9_\-\.]+)\.([a-zA-Z]{2,5})$").unwrap();
assert!(re.is_match("good@email.com"));
println!("IS A VALID EMAIL");
}
