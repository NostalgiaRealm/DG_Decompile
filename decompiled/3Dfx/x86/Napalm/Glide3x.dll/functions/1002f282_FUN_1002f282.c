/*
 * FUN_1002f282 at 1002f282
 * undefined4 * __stdcall FUN_1002f282(undefined4 * param_1)
 * Address ranges: 1002f282-1002f2bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1002f282(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1005566f(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1002fd9b(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_1002fe17(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

