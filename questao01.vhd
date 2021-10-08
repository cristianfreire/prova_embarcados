-- define as portas
ENTITY portas is
    PORT (A, B : IN BIT;
    X : OUT BIT);
END portas;

-- arquitetura
ARCHITECTURE invert OF portas IS
BEGIN
    X <= NOT(A AND B);  -- NOT AND
END invert;