<?php
class Model_databaseArduino extends CI_Model {
 
  public $title;
  public $content;
  public $date;
 
  public function ambilDataDariArduino()
  {
    $this->load->database();
    $query = $this->db->query("SELECT * FROM (
    SELECT * FROM `data_sensor` ORDER BY `nomor` DESC LIMIT 10
    ) sub
    ORDER BY `nomor` ASC");
    $this->db->close();  
    return $query->result();
  }
 
  public function salinDataDariArduino()
  {
    date_default_timezone_set('Asia/Jakarta'); # add your city to set local time zone
    $now = date('Y-m-d H:i:s');
 
    $this->load->database();
    $this->db->set('waktu', $now);
    $this->db->set('api', $this->input->get('Api'));
    $this->db->set('asap', $this->input->get('Asap'));
    $this->db->set('suhu', $this->input->get('Suhu'));
    $this->db->insert('data_sensor');
    $this->db->close();
  }
 
  public function ambilDataDariBrowser()
  {
    $this->load->database();
    $query = $this->db->query("SELECT * FROM `data_parameter` ORDER BY `nomor` DESC LIMIT 1");
    $this->db->close();  
    return $query->row();
  }
 
  public function salinDataDariBrowser()
  {
    date_default_timezone_set('Asia/Jakarta'); # add your city to set local time zone
    $now = date('Y-m-d H:i:s');
 
    $this->load->database();
    $this->db->set('waktu', $now);
    $this->db->set('setSuhu', $this->input->post('setSuhu'));
    $this->db->insert('data_parameter');
    $this->db->close();  
  }
}
?>