/*
 * FUN_100797a8 at 100797a8
 * undefined FUN_100797a8(void)
 * Address ranges: 100797a8-10079877
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100797a8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_10081cb0(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1009d178;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_10081da0(param_2);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_2;
      FUN_10081ee0(iVar2,param_3,param_2);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_1009d178;
    FUN_10081dc0(0);
    FUN_10081d50(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

