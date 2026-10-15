/*
 * FUN_1003ab30 at 1003ab30
 * undefined FUN_1003ab30(void)
 * Address ranges: 1003ab30-1003abdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003ab30(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  code *extraout_w11;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar2 = 0x80070057;
  if (param_2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(param_1 + 0x120);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,auStack_40,*puVar3);
    uVar2 = 0;
    *param_2 = local_30;
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar2;
}

