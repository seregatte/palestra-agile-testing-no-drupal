<?php

/**
 * Implementação do formulário de triangulos
 * @param  array $form       [description]
 * @param  array $form_state [description]
 * @return array             [description]
 */
function custom_triangulos_form($form, &$form_state) {

	$form['lado1'] = array(
		'#type' => 'textfield',
		'#title' => t('Lado 1'),
		'#default_value' => '',
		'#required' => FALSE,
	);

	$form['lado2'] = array(
		'#type' => 'textfield',
		'#title' => t('Lado 2'),
		'#default_value' => '',
		'#required' => FALSE,
	);

	$form['lado3'] = array(
		'#type' => 'textfield',
		'#title' => t('Lado 3'),
		'#default_value' => '',
		'#required' => FALSE,
	);

	$form['op'] = array(
		'#type' => 'submit',
		'#value' => t('Calcular'),
	);

	return $form;
}


/**
 * custom_triangulos_form_submit
 * 
 * @param mixed $form        	Description.
 * @param mixed \&$form_state   Description.
 *
 * @access public
 *
 * @return mixed Value.
 */
function custom_triangulos_form_submit($form, &$form_state) {
	$status = _custom_triangulos_define(
		 		$form_state['values']['lado1'],
		 		$form_state['values']['lado2'],
		 		$form_state['values']['lado3']
		 	);
	if(!is_null($status)){
		drupal_set_message(
			 t('Triângulo @triangulo',array('@triangulo' => $status)),
			 'status'
		);
	}
}