<?php

/**
 * @file
 * Default simple view template to display a list of rows.
 *
 * @ingroup views_templates
 */
?>

<?php if (!empty($title)): ?>
	  <h3><?php print $title; ?></h3>
<?php endif; ?>
<div class="row" style="height:260px;">
<?php foreach ($rows as $id => $row): ?>
	<div class="col-md-4" style="height:100%; margin-top:15px; margin-bottom:15px">
		<?php print $row; ?>
	</div>
<?php endforeach; ?>

	</div>
