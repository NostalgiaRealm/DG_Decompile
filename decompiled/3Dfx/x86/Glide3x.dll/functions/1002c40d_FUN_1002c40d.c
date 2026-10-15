/*
 * FUN_1002c40d at 1002c40d
 * undefined1 __fastcall FUN_1002c40d(uint param_1, uint param_2)
 * Address ranges: 1002c40d-1002c44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __fastcall FUN_1002c40d(uint param_1,uint param_2)

{
  if ((((((param_1 == 0xffffffff) || (param_1 == 0xfffffffe)) || (param_1 == 0xfffffffd)) ||
       ((param_1 == 0xfffffffc || (param_1 == 0xfffffffb)))) ||
      ((param_1 == 0xfffffffa || ((param_1 == 0xfffffff8 || (param_1 == 0xfffffff9)))))) &&
     (((param_1 == param_2 && (param_1 != 0xfffffff9)) || (param_2 < 0x100)))) {
    return 1;
  }
  return 0;
}

