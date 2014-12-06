<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['account']['name']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['field_nome']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-4 col-md-offset-2">
        <?php print render($form['account']['mail']);?>
    </div>
    <div class="col-md-4">
        <?php print render($form['field_cpf']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['account']['pass_field']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['picture']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-4 col-md-offset-2">
        <?php print render($form['field_data_de_nascimento']);?>
    </div>
	<div class="col-md-4">
		<div class="col-md-5">
			<?php print render($form['field_estado_civil']);?>
		</div>
		<div class="col-md-5">
			<?php print render($form['field_sexo']);?>
		</div>
	</div>
</div>

<div class="row">
    <div class="text-center">
        <?php print render($form['actions']);?>
    </div>
</div>

<div>
    <?php //dpm($variables['form']); ?>
    <?php print drupal_render_children($form); ?>
</div>
