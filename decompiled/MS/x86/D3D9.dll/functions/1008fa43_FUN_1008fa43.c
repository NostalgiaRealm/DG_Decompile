/*
 * FUN_1008fa43 at 1008fa43
 * undefined4 * __fastcall FUN_1008fa43(undefined4 param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1008fa43-1008fa88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * __fastcall FUN_1008fa43(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_100cfd55(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = puVar1;
    *puVar1 = &PTR_FUN_100d7074;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
  }
  return puVar1;
}

