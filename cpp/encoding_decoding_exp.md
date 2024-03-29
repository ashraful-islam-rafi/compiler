## encoding and decoding process : example for interger
Below example shows the process for `Integer` datatype. Integeres are represented by the tag `INT = 0x1` in this compiler.
Using this technique we can encode and decode other `datatypes` as well.

### encoding:  encode_int(val)
```
7ULL                                        = 0000000000000000000000000000000000000000000000000000000000000111
~(7ULL)                                     = 1111111111111111111111111111111111111111111111111111111111111000

val = 3
((u32)val) 					                = 00000000000000000000000000000011
((u64)((u32)(val)))			                = 0000000000000000000000000000000000000000000000000000000000000011
(((u64)((u32)(val))) << 32)	                = 0000000000000000000000000000001100000000000000000000000000000000
(((u64)((u32)(val))) << 32) | INT           = 0000000000000000000000000000001100000000000000000000000000000000
                                            | 0000000000000000000000000000000000000000000000000000000000000001
                                            ------------------------------------------------------------------
                                            = 0000000000000000000000000000001100000000000000000000000000000001
```

### decoding:  decode_int(val)
```
7ULL                     			        = 0000000000000000000000000000000000000000000000000000000000000111
~7ULL                    			        = 1111111111111111111111111111111111111111111111111111111111111000
mask(val)          		 			        = val & ~(7ULL)
                                            = 0000000000000000000000000000001100000000000000000000000000000001
                                            & 1111111111111111111111111111111111111111111111111111111111111000
                                            ------------------------------------------------------------------
                                            = 0000000000000000000000000000001100000000000000000000000000000000

mask(val) >> 32 	     			        = 0000000000000000000000000000000000000000000000000000000000000011
((u32)(mask(val) >> 32)) 			        = 00000000000000000000000000000011
((s32)((u32)(mask(val) >> 32)))	            = 11
```
which is `3`, so we have succefully decoded our encoded value `3`.

### Tag Checking 
```
7                                           = 0000000000000000000000000000000000000000000000000000000000000111
if ((decode_int(encode_int(3)) & 7) == INT) = 0000000000000000000000000000001100000000000000000000000000000001
                                            & 0000000000000000000000000000000000000000000000000000000000000111
                                            ------------------------------------------------------------------
                                            = 0000000000000000000000000000000000000000000000000000000000000001
```
This is in fact `1` (the `INT tag`), So this check will return `true`.