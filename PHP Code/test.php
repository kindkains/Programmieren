<html>
<head>
<title>Hallo Welt!</title>
<body>

<?php
    echo "Hallo Welt!<BR><BR>";

    $lohn = 15;
    $kurs = 1.56;
    $name = "Sandro";

    $mo = (2*$lohn);
    $di = (2*$lohn);
    $mi = (2*$lohn);
    $do = (2*$lohn);
    $fr = ($lohn);

    $woche = ($mo+$di+$mi+$do+$fr);

    echo "<B>$name</B> verdient <B>$woche</B> Euro in der Woche<BR><BR>";

    $kurs = $kurs*$woche;

    echo "Dies entspricht <B>$kurs</B> Dollar die Woche.<BR><BR><BR>";

    echo "Heute ist der ";
    echo date("d.m.Y");           // d für Tag mit führender 0 also z.B. 05
    echo " Und es ist ";         // m steht für Monat mit führender Null, Y steht für das Jahr. Die Punkte sind die Trennzeichen
    echo date("H:i");            // H gibt die Stunde an und i die Minuten. Der : ist hier das Trennzeichen
    echo " Uhr";



?>

</br></br></br></br></br>
<p><a href="listing2-5.php">Weiter</a></p>

</body>
</head>
</html>