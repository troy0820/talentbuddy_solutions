<?php

function rotate_matrix($lines) {
    // Write your code here
    // To print results to the standard output you can use print
    // Example: print "Hello world!";
     $j=0;
     $f = sizeof($lines)-1;
        while($j < $f+1){
        for($i=$f; $i >= 0; $i--){
        $str = explode(",", $lines[$i]);
           echo $str[$j] . " ";
            }
            echo "\n";
            $j++;
        }
    }
?>