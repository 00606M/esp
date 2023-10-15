<?php
defined('BASEPATH') OR exit('No direct script access allowed');
?>
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="utf-8">
  <title>Welcome to CodeIgniter</title>
 
  <style type="text/css">
 
  ::selection { background-color: #E13300; color: white; }
  ::-moz-selection { background-color: #E13300; color: white; }
 
  body {
    background-color: #fff;
    margin: 40px;
    font: 13px/20px normal Helvetica, Arial, sans-serif;
    color: #4F5155;
  }
 
  a {
    color: #003399;
    background-color: transparent;
    font-weight: normal;
  }
 
  h1 {
    color: #444;
    background-color: transparent;
    border-bottom: 1px solid #D0D0D0;
    font-size: 19px;
    font-weight: normal;
    margin: 0 0 14px 0;
    padding: 14px 15px 10px 15px;
  }
 
  code {
    font-family: Consolas, Monaco, Courier New, Courier, monospace;
    font-size: 12px;
    background-color: #f9f9f9;
    border: 1px solid #D0D0D0;
    color: #002166;
    display: block;
    margin: 14px 0 14px 0;
    padding: 12px 10px 12px 10px;
  }
 
  #body {
    margin: 0 15px 0 15px;
  }
 
  p.footer {
    text-align: right;
    font-size: 11px;
    border-top: 1px solid #D0D0D0;
    line-height: 32px;
    padding: 0 10px 0 10px;
    margin: 20px 0 0 0;
  }
 
  #container {
    margin: 10px;
    border: 1px solid #D0D0D0;
    box-shadow: 0 0 8px #D0D0D0;
  }
  </style>
</head>
<body>
 
 
 
<!--
<form action="/form/data_submitted" method="get">
User Name: <input type="text" name="u_name" placeholder="Please Enter User Name" class="input_box">
<br>
User email: <input type="text" name="u_email" placeholder="Please Enter Email Address" class="input_box">
<input type="submit" value="Submit" class="submit">
</form>
-->
 
<?php
 
// echo $this->input->post('setSuhu');
 
echo form_open('databaseArduino/dariBrowser');
if(isset($dataParameter->setSuhu))
{
  echo form_input('setSuhu', $dataParameter->setSuhu);
}
else
{
  echo form_input('setSuhu', '30.0');
}
echo form_submit('suhuSubmit', 'Set Temperatur');
echo form_close();
 
echo "<br>";
echo "<strong>Data pembacaan sensor</strong>";
echo "<br>";
echo "<table>";
 
  echo "<tr>";
  echo "<td width='50'>Nomor</td>";
  echo "<td width='200'>Waktu</td>";
  echo "<td width='50'>Api</td>";
  echo "<td width='50'>Asap</td>";
  echo "<td width='50'>Suhu</td>";
  echo "</tr>";
 
  foreach ($dataSensor as $row)
{
  echo "<tr>";
  echo "<td>".$row->nomor."</td>";
  echo "<td>".$row->waktu."</td>";
  echo "<td>".$row->api."</td>";
  echo "<td>".$row->asap."</td>";
  echo "<td>".$row->suhu."</td>";
  echo "</tr>";
}
echo "</table>";
?>
</body>
</html>