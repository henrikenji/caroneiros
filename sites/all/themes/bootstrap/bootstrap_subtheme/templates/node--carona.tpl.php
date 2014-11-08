<?php

/**
 * @file
 */
?>
<div id="node-<?php print $node->nid; ?>" class="row <?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="col-md-6">
    <div class="carona-description">
      <h3><strong><?php print $title?></strong></h3>
      <div class="clearfix">
        <?php if ($display_submitted): ?>
          <div class="carona-info meta submitted pull-left">
            <?php print $user_picture; ?>
          </div>
          <div>
            <p><span class="glyphicon glyphicon-calendar"></span> <?php print $date; ?></p>
            <p><span class="glyphicon glyphicon-time"></span> <?php print $hour; ?></p>
            <p><span class="glyphicon glyphicon-user"></span> <?php print $vaccancies; ?></p>
            <p><span class="glyphicon glyphicon-star"></span> <?php print $distance; ?></p>
          </div>
        <?php endif; ?>    
      </div>
    </div>
  </div>
  <div class="col-md-6">
    <?php print render($content['map']); ?>
  </div>

  <div>
      <?php print $button; ?>
  <div>
</div>