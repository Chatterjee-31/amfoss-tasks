use regex::Regex;
fn main()
{
let re = Regex::new( re r"^([a-zA-Z\d]+)@(a-zA-Z\d]+)\.([a-z]{2,8})$").unwrap();
assert!(re.is_match("good@email.com"));
println!("IS A VALID EMAIL");
}
