(function ($) {
  Drupal.behaviors.caronaForm = {
    attach: function() {
      $('.form-item-field-origem-und-0-locpick-user-latitude').hide();
      $('.form-item-field-origem-und-0-locpick-user-longitude').hide();
      $('.form-item-field-destino-und-0-locpick-user-latitude').hide();
      $('.form-item-field-destino-und-0-locpick-user-longitude').hide();
    }
  }
})(jQuery);