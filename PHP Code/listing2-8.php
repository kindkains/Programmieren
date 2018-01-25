<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<title>Die while-Schleife</title>
<meta name="author" content="Sandro">
<meta name="editor" content="html-editor phase 5">
</head>
<body text="#000000" bgcolor="#FFFFFF" link="#FF0000" alink="#FF0000" vlink="#FF0000">

<?php
    $n=5;
    $kopie=$n;
    $fakult =1;

    while($n > 0)
    {
        $fakult = ($n * $fakult);
        $n--;
    }

    echo "Die Fakultät von <B>$kopie</B> ist: ";
    echo "<B>$fakult</B>.";
?>

</br></br></br></br></br>
<p><a href="listing2-7.php">Zurück</a></p><p><a href="listing3-1.php">Weiter</a></p>
</body>
</html>