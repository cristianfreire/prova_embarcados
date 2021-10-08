fn main() {
    let mut a:u8 = 0;
    let mut b:u8 = 0;
 
    let mut x:u8;
        
    x = !(a & b);
    println!("! ({:08b} & {:08b}) = {:08b} ",a, b, x);

    b = 1;
    x = !(a & b);
    println!("! ({:08b} & {:08b}) = {:08b} ",a, b, x);

    a = 1;
    x = !(a & b);
    println!("! ({:08b} & {:08b}) = {:08b} ",a, b, x);

    a = 0;
    b = 1;
    x = !(a & b);
    println!("! ({:08b} & {:08b}) = {:08b} ",a, b, x);
}