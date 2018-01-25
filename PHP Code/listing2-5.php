<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<title>Lohnberechnung eines Studenten</title>
<meta name="author" content="Sandro">
<meta name="editor" content="html-editor phase 5">
</head>
<body text="#000000" bgcolor="#FFFFFF" link="#FF0000" alink="#FF0000" vlink="#FF0000">

<FORM ACTION="listing2-6.php" METHOD="POST">

Name:<BR>
<SELECT NAME="name[]">
         <OPTION>Alex</OPTION>
         <OPTION>Daniel</OPTION>
         <OPTION>Katrin</OPTION>
         <OPTION>Steffen</OPTION>
         <OPTION>Dennis</OPTION>
</SELECT><BR>

Anzahl Stunden:<BR>
<input type="text" NAME="stunden"><BR>

Lohn pro Stunde:<BR>
<input type="text" NAME="lohn"><BR>

Arbeitgeber:<BR>
<SELECT NAME="arbeitgeber[]">
         <option>McDonald's</option>
         <option>Burger King</option>
         <option>Subway</option>
         <option>Tentucky Fried Chicken</option>
         <option>Schöner Döner</option>
</SELECT><BR><p>

<input type="submit" NAME="GO" value="Berechnen"></p>


</FORM>

</br></br></br></br></br>
<p><a href="test.php">Zurück</a></p><p><a href="listing2-7.php">Weiter</a></p>

</body>
</html>