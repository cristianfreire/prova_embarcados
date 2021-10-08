-- define as portas
ENTITY portas is
    PORT (A, B : IN BIT;
    X : OUT BIT);
END portas;

-- arquitetura
ARCHITECTURE invert OF portas IS
BEGIN
    X <= NOT(NOT(A)); -- NOT NOT A
    X <= NOT(NOT(A AND B)); -- NOT NAND
    X <= NOT(NOT(A OR B)); --  NOT NOR
    X <= NOT(A AND B);  -- NOT AMD
    X <= NOT(A OR B);    -- NOT OR
END invert;