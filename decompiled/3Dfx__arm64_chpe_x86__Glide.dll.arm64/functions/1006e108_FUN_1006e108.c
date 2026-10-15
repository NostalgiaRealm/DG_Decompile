/*
 * FUN_1006e108 at 1006e108
 * undefined FUN_1006e108(void)
 * Address ranges: 1006e108-1006e1d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1006e108(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_1007a3d0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_10095510;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_1007a4c0(param_2);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_2;
      FUN_1007ac00(iVar2,param_3,param_2);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_10095510;
    FUN_1007a4e0(0);
    FUN_1007a470(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

