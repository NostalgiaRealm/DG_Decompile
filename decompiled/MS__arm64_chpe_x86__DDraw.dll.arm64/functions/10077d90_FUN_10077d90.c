/*
 * FUN_10077d90 at 10077d90
 * undefined FUN_10077d90(void)
 * Address ranges: 10077d90-10077e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10077d90(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_100913c0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_100b2f90;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_100914b0(param_1);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_1;
      FUN_100917a0(iVar2,param_2,param_1);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_100b2f90;
    FUN_100914d0(0);
    FUN_10091460(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

