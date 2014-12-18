<div class="profile"<?php print $attributes; ?>>
    <div class="row">
        <div class="col-md-6">
            <?php print render($user_picture); ?>  
        </div>  
        <div class="col-md-6">
            <?php print render($field_nome); ?>
            <?php print render($field_data_de_nascimento); ?>
            <?php print render($field_cpf); ?>
            <?php print render($field_estado_civil); ?>
            <?php print render($field_sexo); ?>
        </div>
    </div>
    <?php if (!empty($review)): ?>
        <div class="review">
            <?php print render($review); ?>
        </div>
    <?php endif;?>
</div>