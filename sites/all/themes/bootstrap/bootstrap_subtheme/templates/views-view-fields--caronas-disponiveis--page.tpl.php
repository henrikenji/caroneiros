<?php

/**
 * @file
 * Default simple view template to all the fields as a row.
 *
 * - $view: The view in use.
 * - $fields: an array of $field objects. Each one contains:
 *   - $field->content: The output of the field.
 *   - $field->raw: The raw data for the field, if it exists. This is NOT output safe.
 *   - $field->class: The safe class id to use.
 *   - $field->handler: The Views field handler object controlling this field. Do not use
 *     var_export to dump this object, as it can't handle the recursion.
 *   - $field->inline: Whether or not the field should be inline.
 *   - $field->inline_html: either div or span based on the above flag.
 *   - $field->wrapper_prefix: A complete wrapper containing the inline_html to use.
 *   - $field->wrapper_suffix: The closing tag for the wrapper.
 *   - $field->separator: an optional separator that may appear before a field.
 *   - $field->label: The wrap label text to use.
 *   - $field->label_html: The full HTML of the label to use including
 *     configured element type.
 * - $row: The raw result object from the query, with all data it fetched.
 *
 * @ingroup views_templates
 */
?>
<?php dpm($variables); ?>
<?php if (strpos($fields['field_tipo']->content, 'oferece')): ?>
	<div style="padding:5px; background-color:#dff0d8; border:4px solid #5cb85c; height:100%;">
<?php elseif (strpos($fields['field_tipo']->content, 'solicita')): ?>
	<div style="padding:5px; background-color:#d9edf7; border:4px solid #5bc0de; height:100%;">
<?php else: ?>
	<div style="padding:5px; background-color:#f2dede; border:4px solid #d9534f; height:100%;">
<?php endif; ?>
	<div class="row" style="margin-bottom:20px;">
		<div class="col-md-4">
			<?php print $fields['picture']->content; ?>
		</div>
		<div class="col-md-8">
			<div>
				<h4><?php print $fields['title']->content; ?></h4>
			</div>
			<span class="glyphicon glyphicon-calendar"></span>
			<div style="display:inline-block; margin:5px 0 5px 0;">
				<?php print $fields['field_data']->content; ?>
			</div>
			</br>
			<span class="glyphicon glyphicon-user"></span>
			<div style="display:inline-block;">
				<?php print $fields['field_vagas']->content; ?>
			</div>
		</div>
	</div>
	<div>
		<strong><?php print $fields['field_origem']->label_html; ?></strong>
		<?php print $fields['field_origem']->content; ?>
	</div>
	<div>
		<strong><?php print $fields['field_destino']->label_html; ?></strong>
		<?php print $fields['field_destino']->content; ?>
	</div>
</div>