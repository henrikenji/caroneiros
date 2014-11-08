<div>
    <div class="row">
        <div class="col-md-6">
            <?php hide($form['field_origem']['und']['0']['locpick']['user_latitude']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['user_longitude']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['current']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['map_instructions']); ?>
            <?php hide($form['field_origem']['und']['0']['country']); ?>
            <?php print render($form['field_origem']); ?>
        </div>
        <div class="col-md-6">
            <?php hide($form['field_destino']['und']['0']['locpick']['user_latitude']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['user_longitude']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['current']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['map_instructions']); ?>
            <?php hide($form['field_destino']['und']['0']['country']); ?>
            <?php print render($form['field_destino']); ?>
        </div>
    </div>
    
<?php print render($form['additional_settings']['group']); ?>
<?php print drupal_render_children($form); ?>

<?php dpm($variables); ?>
</div>