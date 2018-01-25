<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<title>Ergebnis der Lohnberechnung</title>
<meta name="author" content="Sandro">
<meta name="editor" content="html-editor phase 5">
</head>
<body text="#000000" bgcolor="#FFFFFF" link="#FF0000" alink="#FF0000" vlink="#FF0000">

<?php
         $name           = $_POST['name'];
         $stunden        = $_POST['stunden'];
         $lohn           = $_POST['lohn'];
         $arbeitgeber    = $_POST['arbeitgeber'];

         foreach($name as $person)
         {
             echo "Hallo <B>$person</B>,<BR><P>";
         }

         echo "Du hast <B>$stunden</B> Stunden bei ";

         foreach($arbeitgeber as $wo_denn)
         {
             echo "<B>$wo_denn</B> gearbeitet.<BR><P>";
         }

         $summe = ($lohn * $stunden);

         echo "Dein Verdienst in dieser Zeit war: ";
         echo "<B> $summe </B> EURO";
?>

</br></br></br></br></br>
<p><a href="listing2-5.php">Zurück</a></p><p><a href="listing2-7.php">Weiter</a></p>

</body>
</html>