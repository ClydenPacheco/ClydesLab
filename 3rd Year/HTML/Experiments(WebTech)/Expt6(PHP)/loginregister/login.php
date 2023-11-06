<!DOCTYPE html>
<html>
<head>
    <title>User Login</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1 style="margin-top:13%;">User Login</h1>
    <?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database = "registration";
    $con = mysqli_connect($servername, $username, $password, $database);
    if(!$con){
        die("error detected".mysqli_error($con));
    }
    if(isset($_POST['submit'])){
        $email = $_POST['email'];
        $password = $_POST['password'];

        // Check if the email and password exist in the database
        $sql = "SELECT * FROM login WHERE email='$email' AND password='$password'";
        $result = mysqli_query($con, $sql);

        if(mysqli_num_rows($result) > 0) {
            // Email and password match, redirect to display.php
            header("Location: display.php?email=$email");
            exit();
        } else {
            // Email and password don't match
            echo "<script>alert('Invalid email or password!')</script>";
        }
        mysqli_close($con);
    }
    ?>
    <form action="login.php" method="POST">
        <label for="email">Email</label>
        <input type="email" id="email" name="email" placeholder="Email" required>
        
        <label for="password">Password</label>
        <input type="password" id="password" name="password" placeholder="Password" required>
        
        <input type="submit" name="submit" value="Login">
        <a href="register.php" style="display: block; text-align: center; color: black; text-decoration: underline; font-family: 'Poppins', sans-serif; font-weight: 500; margin-top: 7px;">Register now!</a>
        <a href="deleteuser.php" style="display: block; text-align: center; color: black; text-decoration: underline; font-family: 'Poppins', sans-serif; font-weight: 500; margin-top: 4px;">Delete accout</a>
    </form>
</body>
</html>