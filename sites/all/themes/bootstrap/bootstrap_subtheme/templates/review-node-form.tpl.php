<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['field_user']);?>
    </div>
</div>

<div class="row">
    <div class="col-md-6 col-md-offset-2">
        <?php print render($form['title']);?>
    </div>
    <div class="col-md-2">
        <span class="pull-right"><?php print render($form['field_rating']);?></span>
    </div>
</div>

<div class="row">
    <div class="col-md-8 col-md-offset-2">
        <?php print render($form['body']);?>
    </div>
</div>

<div class="row">
    <div class="text-center">
        <?php print render($form['actions']);?>
    </div>
</div>

<div>
    <?php hide($form['field_user']); ?>
    <?php print drupal_render_children($form); ?>   
</div>