<div>
<?php print render($form['title']); ?>
<?php hide($form['body']['und']['0']['summary']); ?>
<?php hide($form['body']['und']['0']['format']); ?>
<?php print render($form['body']); ?>
<?php print render($form['field_vagas']); ?>
<?php print render($form['field_data']); ?>
<?php print render($form['field_tipo']); ?>
    <div class="row">
        <div class="col-md-6">
            <?php hide($form['field_origem']['und']['0']['locpick']['user_latitude']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['user_longitude']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['current']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['instructions']); ?>
            <?php hide($form['field_origem']['und']['0']['locpick']['map_instructions']); ?>
            <?php hide($form['field_origem']['und']['0']['country']); ?>
            <?php hide($form['field_origem']['und']['0']['delete_location']); ?>
            <?php hide($form['field_origem']['und']['0']['province']['#autocomplete_path']); ?>
            <?php print render($form['field_origem']); ?>
        </div>
        <div class="col-md-6">
            <?php hide($form['field_destino']['und']['0']['locpick']['user_latitude']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['user_longitude']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['current']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['instructions']); ?>
            <?php hide($form['field_destino']['und']['0']['locpick']['map_instructions']); ?>
            <?php hide($form['field_destino']['und']['0']['country']); ?>
            <?php hide($form['field_destino']['und']['0']['delete_location']); ?>
            <?php hide($form['field_destino']['und']['0']['province']['#autocomplete_path']); ?>
            <?php print render($form['field_destino']); ?>
        </div>
    </div>
    
<?php hide($form['additional_settings']['group']); ?>
<?php print render($form['actions']); ?>
<?php print drupal_render_children($form); ?>

<?php //dpm($variables); ?>
</div>