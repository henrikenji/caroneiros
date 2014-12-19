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
    <?php if (!empty($historico)): ?>
				<h3><?php print $title; ?></h3>
        <div class="historico">
            <?php print $historico; ?>
        </div>
    <?php endif;?>
    <?php if (!empty($caronas)): ?>
				<h3><?php print $caronas_title; ?></h3>
        <div class="caronas">
            <?php print $caronas; ?>
        </div>
    <?php endif;?>
    <?php if (!empty($solicitacao)): ?>
      <h3><?php print $solicitacao_title; ?></h3>
      <div class="solicitacao">
        <?php print $solicitacao; ?>
      </div>
    <?php endif;?>

</div>
