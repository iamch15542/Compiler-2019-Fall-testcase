//no syntactic error

//&S-
//&T-

test;

func1(x, y: integer; z: string): boolean;
begin // only declarations
    var a: 15;
    var b: integer;
    var c: 0012;
    var d: "hello";
    var e: array 1 to 2 of array 2 to 3 of real;
    var x, y, z: true;
    var y, z: false;
end
end func1

func2(a: boolean): string;
begin // only statements
    var a: 1;
    b[1+3][1 and 2][3 mod 4][1 <= 2] := "hello" - -4 - 17;
    begin
        if a + b then
            print a;
            print 1 + (2 * 3);
            print arr[a][b][c * d];
            read a;
            read arr[a][b][c - "hello"];
        else
            if c = 15 then
                func1(1, 2 * 3, "hello", "world");
                func2();
                func3(a);
            end if
        end if
    end
    a := 1 + 2 + 3;
end
end func2

func3();
begin
    var a: 15;
    var b: integer;
    var c: 0012;
    var d: "hello";
    var e: array 1 to 2 of array 2 to 3 of real;
    
    var a: 1;
    b[1+3][1 and 2][3 mod 4][1 <= 2] := "hello" - -4 - 17;
    begin
        var a: array 1 to 2 of string;
        if a + b then
            print a;
            print 1 + (2 * 3);
            print arr[a][b][c * d];
            read a;
            read arr[a][b][c - "hello"];
        else
            if c = 15 then
                func1(1, 2 * 3, "hello", "world");
                func2();
                func3(a);
            end if
        end if
    end
    return a - -a - a - a - -a - a;
end
end func3

func4(b: real);
begin // zero statements
    begin
    end
    begin
        begin
        end
    end
    if a + b then
    else
    end if
    if a - b then
    end if

    if "hello" then
        begin
        end
        if 3 then
        else
            begin
            end
        end if
    end if

    while a + b do
    end do

    while a + b do
        begin
        end
    end do

    for i := 1 to 5 do
    end do

    for i := 1 to 5 do
        begin
            for i := 2 to 3 do
            end do
        end
    end do
end
end fun4

func5(): integer;
begin // expr
    a := 1 + 01 + 0.1 = 1E-1 + func1(a, b, 1 + 2, "hello", (a)) + arr[a][b];
    b := not(1 * 1 - -1 + -a / 1 mod 1 and 3 or 4) + (a + (a + b) + c + d);
    c := ((((a) + ((b)) / ((c) - c))) * (-1) and (-9 + -10));
end
end func5

func6(a, b: array 2 to 5 of string; x, y: real): integer;
begin // for while
    for i := 0011 to 13 do
        print 1 + (2 * 3);
        print arr[a][b][c * d];
        read a;
        for j := 1 to 3000 do
            begin
                var a: 15;
                var b: integer;
                var c: 0012;
                var d: "hello";
                var e: array 1 to 2 of array 2 to 3 of real;
                
                print 1 + (2 * 3);
                print arr[a][b][c * d];
                read a;
            end
        end do
        print 1 + (2 * 3);
        print arr[a][b][c * d];
        read a;
        while (a - b) do
            arr[a / b] := a / b;
            print 1 + (2 * 3);
            begin
                var a: 15;
                var b: integer;
                var c: 0012;
            end
            print arr[a][b][c * d];
            read a;
        end do
    end do
end
end func6

func7(a, b: array 2 to 003 of array 010 to 13 of array 1 to 2 of integer): integer;
begin // no statement
end
end func7

func8(a, b, c: real): boolean;
begin // comments
    // some comments
    /*
     *
     *
     * more comments
     *
     *
     */
end
end func8

begin
    var a: 15;
    var b: integer;
    var c: 0012;
    var d: "hello";
    var e: array 1 to 2 of array 2 to 3 of real;
    
    b[1+3][1 and 2][3 mod 4][1 <= 2] := "hello" - -4 - 17;
    begin
        if a + b then
            print a;
            print 1 + (2 * 3);
            print arr[a][b][c * d];
            read a;
            read arr[a][b][c - "hello"];
        else
            if c = 15 then
                func1(1, 2 * 3, "hello", "world");
                func2();
                func3(a);
            end if
        end if
    end
    a := 1 + 2 + 3;
end

end test
