
<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['nome']);?>
    </div>
</div>
<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['e_mail']);?>
    </div>
</div>
<div class="row">
    <div class="col-md-4 col-md-offset-2">
        <?php print render($form['submitted']['assunto']);?>
    </div>
</div>
<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['submitted']['mensagem']);?>
    </div>
</div>    
<div class="row">
    <div class="text-center">
        <?php print render($form['actions']);?>
    </div>
</div>

<?php dpm($form);?>
<div>
    <?php print drupal_render_children($form);?>
</div>
