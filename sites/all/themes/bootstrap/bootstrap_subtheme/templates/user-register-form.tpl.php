<div class="row">
    <div class="col-md-4">
    </div>
    <div class="col-md-4">
        <?php print render($form['field_image']);?>
    </div>

</div>

<div class="row">
    <div class="col-md-2">
    </div>
    <div class="col-md-8">
        <?php print render($form['field_nome']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-2">
    </div>
    <div class="col-md-4">
        <?php print render($form['account']['mail']);?>
    </div>
    <div class="col-md-4">
        <?php print render($form['field_cpf']);?>
    </div>

</div>

<div class="row">
    <div class="col-md-4">
    </div>
    <div class="col-md-4">
        <?php print render($form['field_data_de_nascimento']);?>
    </div>
</div>
<div class="row">
    <div class="col-md-4">
    </div>
    <div class="col-md-2">
        <?php print render($form['field_estado_civil']);?>
    </div>
    <div class="col-md-2">
        <?php print render($form['field_sexo']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-5">
    </div>
    <div class="col-md-2">
        <?php print render($form['actions']);?>
    </div>
</div>
<div>
    <?php dpm($variables['form']); ?>
    <?php //print drupal_render_children($form); ?>
</div>
