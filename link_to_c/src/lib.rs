use libc::size_t;

#[cfg_attr(debug_assertions, link(name = "RustTestStatic_d", kind = "static"))]
#[cfg_attr(not(debug_assertions), link(name = "RustTestStatic", kind = "static", modifiers = "-bundle"))]
extern {
    fn print_int_val(value: i32) -> size_t;
}

pub fn print_int(num: i32) -> usize {
    unsafe {
        print_int_val(num)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn print_works() {
        let result = print_int(54);
        assert_eq!(result, 13);
    }
}
