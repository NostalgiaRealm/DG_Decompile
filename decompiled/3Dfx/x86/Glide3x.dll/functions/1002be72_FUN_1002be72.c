/*
 * FUN_1002be72 at 1002be72
 * undefined4 * __stdcall FUN_1002be72(undefined4 * param_1)
 * Address ranges: 1002be72-1002bead
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1002be72(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_1005225f(0x6c);
  if (param_1 == (undefined4 *)0x0) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar1 = FUN_1002c98b(puVar1);
      return puVar1;
    }
  }
  else if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_1002ca07(puVar1,*param_1,param_1[1],param_1[2]);
    return puVar1;
  }
  return (undefined4 *)0x0;
}

