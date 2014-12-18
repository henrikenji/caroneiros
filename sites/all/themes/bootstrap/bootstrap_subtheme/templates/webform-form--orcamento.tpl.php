<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['descricao']);?>
    </div>
</div>
<div class="row">
    <br>
</div>
<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['nome_da_empresa']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['cidade']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['responsavel']);?>
    </div>
</div>
<div class="row">
    <div class="col-md-4 col-md-offset-2">
        <?php print render($form['submitted']['e_mail']);?>
    </div>
    <div class="col-md-4">
        <?php print render($form['submitted']['telefone']);?>
    </div>
</div>
<div class="row">
    <br>
</div>
<div class="row">
    <div class="text-center">
        <?php print render($form['actions']);?>
    </div>
</div>

<div>
    <?php //dpm($form)?>
    <?php print drupal_render_children($form);?>
</div>