<div class="row">
    <div class="col-md-4 col-md-offset-4">
        <?php print render($form['name']);?>
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
