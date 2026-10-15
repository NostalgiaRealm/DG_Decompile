/*
 * FUN_10125730 at 10125730
 * undefined FUN_10125730(void)
 * Address ranges: 10125730-101257ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10125730(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_101321c0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_10160364;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_101322b0(param_1);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_1;
      FUN_101325a0(iVar2,param_2,param_1);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_10160364;
    FUN_101322d0(0);
    FUN_10132260(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

