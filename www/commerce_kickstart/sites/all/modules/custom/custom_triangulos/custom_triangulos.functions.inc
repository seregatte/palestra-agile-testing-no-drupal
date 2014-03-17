<?php

/**
 * _custom_triangulos_define
 * 
 * @param mixed $lado1 Description.
 * @param mixed $lado2 Description.
 * @param mixed $lado3 Description.
 *
 * @access public
 *
 * @return mixed Value.
 */
function _custom_triangulos_define($lado1, $lado2, $lado3){
	if(
		(is_numeric($lado1) && is_numeric($lado2) && is_numeric($lado3))
	){
		if($lado1 == $lado2 && $lado2 == $lado3){
			return 'equilátero';
		}elseif ($lado1 != $lado2 && $lado2 != $lado3 && $lado3 != $lado1) {
			return 'escaleno';
		}elseif ($lado1 == $lado2 || $lado2 == $lado3 || $lado3 == $lado1) {
			return 'isóceles';
		}
	}
}