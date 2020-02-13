# ft_printf

ft_printf must achieve the following mandatory requirements:  
  
* Manage the following conversions: `f`, `lf`, `Lf`, `s`, `S`, `p`, `d`, `D`, `i`, `o`, `O`, `u`, `U`, `x`, `X`, `c`, `C`
* Manage the flags `#`, `0`, `-`, `+` & `space`
* Manage the precision
* Manage the flags `hh`, `h`, `l`, `ll`, `j`, `z`.
  
The function cannot leak. All errors must be handled carefully. In no way can the function quit in an unexpected manner (Segmentation fault, bus error, double free, etc).  
Allowed functions are `write`, `getloacale`, `malloc`, `free`, `exit` and the three functions of `stdarg`. Everything else is forbidden
