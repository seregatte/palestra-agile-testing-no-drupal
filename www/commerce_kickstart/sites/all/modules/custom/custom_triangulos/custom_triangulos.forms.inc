<?php

/**
 * Implementação do formulário de triangulos
 * @param  array $form       [description]
 * @param  array $form_state [description]
 * @return array             [description]
 */
function custom_triangulos_form($form, &$form_state) {

	$form['controle_documento'] = array(
		'#type' => 'textfield',
		'#title' => t('Controle'),
		'#description' => t('Número de controle'),
		'#default_value' => '',
		'#required' => TRUE,
	);

	$form['op'] = array(
		'#type' => 'submit',
		'#value' => t('Buscar'),
	);

	return $form;
}


/**
 * custom_triangulos_form_validate
 * 
 * @param mixed $form        	Description.
 * @param mixed \&$form_state   Description.
 *
 * @access public
 *
 * @return mixed Value.
 */
function custom_triangulos_form_validate($form, &$form_state) {
	$controle_documento = $form_state['values']['controle_documento'];
	if(!_tcesp_oficios_get_resultado_busca($controle_documento)){
		form_error($form['controle_documento'], t('Não exite essa bodega'));
	}
}