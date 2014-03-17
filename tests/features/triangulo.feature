@javascript
Feature: Triângulos

	Scenario: Triângulo Equilátero
		Given I am on "/triangulos"
			And I fill in "lado1" with "10"
			And I fill in "lado2" with "10"
			And I fill in "lado3" with "10"
		When I press "Calcular"
		Then I should see "Triângulo equilátero"

	Scenario: Triângulo Isóceles
		Given I am on "/triangulos"
			And I fill in "lado1" with "9"
			And I fill in "lado2" with "10"
			And I fill in "lado3" with "10"
		When I press "Calcular"
		Then I should see "Triângulo isóceles"

	Scenario: Triângulo Escaleno
		Given I am on "/triangulos"
			And I fill in "lado1" with "10"
			And I fill in "lado2" with "11"
			And I fill in "lado3" with "12"
		When I press "Calcular"
		Then I should see "Triângulo escaleno"
	
	Scenario: Não quero ver imagens
		Given I am on "/triangulos"
			And I fill in "lado1" with "10"
			And I fill in "lado2" with "11"
			And I fill in "lado3" with "12"
		When I press "Calcular"
		Then I should not see image