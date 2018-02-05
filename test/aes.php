<?php

$cipher_list = openssl_get_cipher_methods();

$data     = '资产';
$key      = 'e825d5edb5dj28a9';

$data_key = '6hwJaMwTaZ7g3+ZbHv7vbA==';


echo print_r($cipher_list, true);

/**
 *
 *
 */
class Security {
    public static function encrypt($input, $key)
    {
        $size  = mcrypt_get_block_size(MCRYPT_RIJNDAEL_128, MCRYPT_MODE_ECB);
        $input = Security::pkcs5_pad($input, $size);
        $td    = mcrypt_module_open(MCRYPT_RIJNDAEL_128, '', MCRYPT_MODE_ECB, '');
        $iv    = mcrypt_create_iv (mcrypt_enc_get_iv_size($td), MCRYPT_RAND);
        mcrypt_generic_init($td, $key, $iv);
        $data  = mcrypt_generic($td, $input);
        mcrypt_generic_deinit($td);
        mcrypt_module_close($td);
        $data  = base64_encode($data);
        return $data;
    }

    private static function pkcs5_pad ($text, $blocksize)
    {
        $pad = $blocksize - (strlen($text) % $blocksize);
        return $text . str_repeat(chr($pad), $pad);
    }

    public static function decrypt($sStr, $sKey)
    {
        $decrypted= mcrypt_decrypt(
            MCRYPT_RIJNDAEL_128,
            $sKey,
            base64_decode($sStr),
            MCRYPT_MODE_ECB
        );

        $dec_s = strlen($decrypted);
        $padding = ord($decrypted[$dec_s-1]);
        $decrypted = substr($decrypted, 0, -$padding);
        return $decrypted;
    }
}

$value = Security::encrypt($data , $key );
echo "\n九斗鱼网加密：" .$value ."\n资产平台加密：" . $data_key . "\n";
echo Security::decrypt($value, $key );



