<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "registration";
$con = mysqli_connect($servername, $username, $password, $database);
if (!$con) {
    die("Error connecting to the database: " . mysqli_connect_error());
}

if (isset($_POST['submit'])) {
    $email = $_POST['email'];
    $password = $_POST['password'];

    // Check if the email and password exist in the database
    $sql = "SELECT * FROM login WHERE email='$email' AND password='$password'";
    $result = mysqli_query($con, $sql);

    if (mysqli_num_rows($result) > 0) {
        // Email and password match, delete the user
        $deleteSql = "DELETE FROM login WHERE email='$email' AND password='$password'";
        if (mysqli_query($con, $deleteSql)) {
            echo "<script>alert('User deleted successfully!')</script>";
            echo "<script>window.location.href = 'login.php';</script>";
        } else {
            echo "Error deleting user: " . mysqli_error($con);
        }
    } else {
        // Email and password don't match
        echo "<script>alert('Invalid email or password!')</script>";
    }

    mysqli_close($con);
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Delete User</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1 style="margin-top: 14%;">Delete User</h1>
    <form action="deleteuser.php" method="POST">
        <label for="email">Email</label>
        <input type="email" id="email" name="email" placeholder="Email" required>
        
        <label for="password">Password</label>
        <input type="password" id="password" name="password" placeholder="Password" required>
        
        <input type="submit" name="submit" value="Confirm">
    </form>
</body>
</html>