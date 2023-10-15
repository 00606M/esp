<?php
class databaseArduino extends CI_Controller {
  public function __construct() {
    parent::__construct();
  }
 
  public function dariBrowser() {
    $this->load->model('Model_databaseArduino');
    $this->Model_databaseArduino->salinDataDariBrowser();
    $data['dataSensor'] = $this->Model_databaseArduino->ambilDataDariArduino();
    $data['dataParameter'] = $this->Model_databaseArduino->ambilDataDariBrowser();
 
    $this->load->view("data_sensor", $data);
  }
 
    public function dariArduino() {
    $this->load->model('Model_databaseArduino');
    $this->Model_databaseArduino->salinDataDariArduino();
    $data['dataParameter'] = $this->Model_databaseArduino->ambilDataDariBrowser();
 
    $this->load->view("data_parameter", $data);
  }
}
?>