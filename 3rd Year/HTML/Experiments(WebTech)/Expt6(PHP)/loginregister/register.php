<!DOCTYPE html>
<html>
<head>
    <title>User Registration Form</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1 style="margin-top: 5%;">User Registration Form</h1>
    <?php
    $servername="localhost";
    $username="root";
    $passowrd="";
    $database="registration";
    $con=mysqli_connect($servername,$username,$passowrd,$database);
    if(!$con){
        die("error detected".mysqli_error($con));
    }
    if(isset($_POST['submit'])){
        $name=$_POST['uname'];
        $surname=$_POST['surname'];
        $email=$_POST['email'];
        $phone=$_POST['phone'];
        $password=$_POST['password'];
        $confirm_password=$_POST['confirm_password'];
        $sql="insert into login(name,surname,email,phone,password) 
            values('$name','$surname','$email','$phone','$password')";
        if($password!==$confirm_password){
            echo "<script>alert('Password does not match!')</script>";
        }
        else{
            if(mysqli_query($con, $sql)){
                echo "<script>alert('New record inserted!');</script>";
                echo "<script>window.location.href = 'login.php';</script>";
            } else {
                echo "error:".mysqli_error($con);
            }
        }
        mysqli_close($con);
    }
    ?>
    <form action="register.php" method="POST">
        <label for="name">Name</label>
        <input type="text" id="uname" name="uname" placeholder="Name" required>
        
        <label for="surname">Surname</label>
        <input type="text" id="surname" name="surname" placeholder="Surname" required>
        
        <label for="email">Email</label>
        <input type="email" id="email" name="email" placeholder="Email" required>

        <label for="phone">Phone Number</label>
        <input type="text" id="phone" name="phone" placeholder="Phone Number" required>
        
        <label for="password">Password</label>
        <input type="password" id="password" name="password" placeholder="Password" required>
        
        <label for="confirm_password">Confirm Password</label>
        <input type="password" id="confirm_password" name="confirm_password" placeholder="Confirm Password" required>
        
        <input type="submit" name="submit" value="Submit">
    </form>
</body>
</html>
