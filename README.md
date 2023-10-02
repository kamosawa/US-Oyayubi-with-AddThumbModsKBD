# US-Oyayubi-with-AddThumbModsKBD
I love ANSI layout keyboard, I love Nicola typing method but hate JIS keyboard layout so I made an two-key add-on keyboard for Oyayubi-Shifters.

* AddThumbModKbd_v1.iges : CAD data file importable nearly any 3D CAD programs for additional (hitching) keys keyboard frame. You need key switches with 12x13 box underneath (or edit this!). Hitching width (tollerance for width of main keyboard framepart next to spacebar) is about 6mm (edit this part depend on your main keyboard.)
* AddThumbModsKBD.ino : Ultra simple Arduino project file for Pro Micro or other Arduino Leonard clones. Key for left-thumb-shift is connected to pin9 (and GND) and right-thumb-shift to pin8 by default. This could be configured with lines defining KEYL and KEYR.
* us_oyayubi_oyamodi.json : Key mod file for Karabiner Elements (https://karabiner-elements.pqrs.org/). This is basically an updated USO-Layout (https://qiita.com/mochi/items/f6aac26e131a3062f844) that allows confortable Japanese input with ANSI keyboard, but supports additional two-key keyboard with output codes "Space" for left-thumb-shift key and "F15" for right-thumb-shift keys. Additionally it has a rule for toggle IME by hitting right-thumb-shift alone.

Now you don't need any busy fingers (Roman-Kana input style needs this), or thumbs (USO layout needs this). You could input Japanese in still, silent, stress-free manner.
