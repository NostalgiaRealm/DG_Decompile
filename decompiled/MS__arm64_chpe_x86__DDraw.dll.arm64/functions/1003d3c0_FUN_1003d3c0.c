/*
 * FUN_1003d3c0 at 1003d3c0
 * undefined FUN_1003d3c0(void)
 * Address ranges: 1003d3c0-1003d493
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1003d3c0(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  code *extraout_w11;
  undefined4 uVar5;
  
  iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
  if (iVar1 == 0) {
    FUN_10001c10(0);
  }
  uVar5 = 0x80070057;
  if ((((param_2 & 0xfffffff8) == 0) && (param_2 != 0)) &&
     (uVar5 = 0x80004001, (param_2 >> 1 & 1) == 0)) {
    uVar5 = 0;
    puVar4 = (undefined4 *)(param_1 + 0x120);
    puVar3 = &DAT_100be150 + *(int *)(param_1 + 0x11c) * 0x8a;
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    (*extraout_w11)(uVar2,*puVar4,puVar3[0x5f],puVar3[0x60]);
  }
  (*(code *)PTR_FUN_100ba0f0)(DAT_100c2958);
  return uVar5;
}

