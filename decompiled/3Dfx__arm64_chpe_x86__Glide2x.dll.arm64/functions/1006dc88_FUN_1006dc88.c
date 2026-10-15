/*
 * FUN_1006dc88 at 1006dc88
 * undefined FUN_1006dc88(void)
 * Address ranges: 1006dc88-1006dd57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1006dc88(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_10079f50(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_100954e0;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_1007a040(param_2);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_2;
      FUN_1007a780(iVar2,param_3,param_2);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_100954e0;
    FUN_1007a060(0);
    FUN_10079ff0(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

