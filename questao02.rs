fn main() {
    let a:u8 = 0;
    let b:u8 = 0;
 
    let mut x:u8;
    
    x = !(!a);
    println!("! (!{:08b}) = {:08b} ",b, x);
 
    x = !(!(a & b));
    println!("! (!({:08b} & {:08b})) = {:08b} ",a, b, x);
 
    x = !(!(a | b));
    println!("! (!({:08b} | {:08b})) = {:08b} ",a, b, x) ;
    
    x = !(a & b);
    println!("! ({:08b} & {:08b}) = {:08b} ",a, b, x);
 
    x = !(a | b);
    println!("! ({:08b} | {:08b}) = {:08b} ",a, b, x) ;
 
 }