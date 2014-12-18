(function ($) {
  Drupal.behaviors.reviewForm = {
    attach: function() {
      console.log('d');
      $('.field-name-field-user').hide();
    }
  }
})(jQuery);