<?php
// $Id: sh.inc,v 1.9 2008/11/17 16:01:57 alexiswilke Exp $

/**
 * @file
 * "Saint Helena" specific data
 */

/**
 * Implementation of hook_province_list().
 *
 * Its a hook from Addresses module to list all
 * states/provinces/teritories of a given country
 *
 * @return
 *   Array. states where the keys are the state
 *   code and the value is the state name
 */
function addresses_province_list_sh() {
  return array(
    'A' => t('Ascension'),
    'S' => t('Saint Helena'),
    'T' => t('Tristan da Cunha')
  );
}
