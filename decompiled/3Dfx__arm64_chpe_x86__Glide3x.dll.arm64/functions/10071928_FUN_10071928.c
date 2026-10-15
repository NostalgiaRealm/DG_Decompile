/*
 * FUN_10071928 at 10071928
 * undefined FUN_10071928(void)
 * Address ranges: 10071928-100719f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10071928(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  code *extraout_w11;
  
  puVar1 = (undefined4 *)FUN_1007dc70(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_1009935c;
    *(undefined8 *)(puVar1 + 1) = 0;
    puVar1[3] = 0;
    iVar2 = FUN_1007dd60(param_2);
    puVar1[2] = iVar2;
    if (iVar2 != 0) {
      puVar1[1] = param_2;
      FUN_1007e4a0(iVar2,param_3,param_2);
      (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11)(puVar1);
      return puVar1;
    }
    *puVar1 = &PTR_FUN_1009935c;
    FUN_1007dd80(0);
    FUN_1007dd10(puVar1,0x10);
  }
  return (undefined4 *)0x0;
}

