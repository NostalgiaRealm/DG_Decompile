/*
 * FUN_10076fc8 at 10076fc8
 * undefined FUN_10076fc8(void)
 * Address ranges: 10076fc8-10077097
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10076fc8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_10083310(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1009f73c;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_10083400(param_2);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_2;
      FUN_10083b40(iVar2,param_3,param_2);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_1009f73c;
    FUN_10083420(0);
    FUN_100833b0(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

