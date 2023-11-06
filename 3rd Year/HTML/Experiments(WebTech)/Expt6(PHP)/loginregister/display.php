<!DOCTYPE html>
<html>
<head>
    <title>User Details</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <h1 style="margin-top:16%;">User Details</h1>
    <?php
    $servername = "localhost";
    $username = "root";
    $password = "";
    $database = "registration";
    $con = mysqli_connect($servername, $username, $password, $database);
    if(!$con){
        die("error detected".mysqli_error($con));
    }
    
    // Check if the email is set in the URL parameter
    if(isset($_GET['email'])){
        $email = $_GET['email'];
        
        // Retrieve the user's information from the database
        $sql = "SELECT * FROM login WHERE email='$email'";
        $result = mysqli_query($con, $sql);

        if(mysqli_num_rows($result) > 0) {
            $row = mysqli_fetch_assoc($result);
            $name = $row['name'];
            $surname = $row['surname'];
            $email = $row['email'];
            $phone = $row['phone'];

            // Display the user's information
            echo '<div class="translucent-panel">';
            echo "<p>Name: $name</p>";
            echo "<p>Surname: $surname</p>";
            echo "<p>E-Mail: $email</p>";
            echo "<p>Phone No: $phone</p>";
            echo '</div>';
        } else {
            echo "<p>No user found with the specified email.</p>";
        }
    } else {
        echo "<p>Email parameter not provided.</p>";
    }
    
    mysqli_close($con);
    ?>
</body>
</html>
