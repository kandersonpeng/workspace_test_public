use std::error::Error;

fn main()-> Result<(), Box<dyn Error>> {
    println!("cargo:rustc-link-lib=static=RustTestStatic");
    Ok(())
}
