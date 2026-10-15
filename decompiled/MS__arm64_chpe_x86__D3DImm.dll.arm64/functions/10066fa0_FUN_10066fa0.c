/*
 * FUN_10066fa0 at 10066fa0
 * undefined FUN_10066fa0(void)
 * Address ranges: 10066fa0-10067093
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10066fa0(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  
  pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if ((*(uint *)(param_1 + 0x70) & 0x10800) != 0x10000) goto LAB_1006707c;
  if (*(int *)(param_1 + 300) == 0) {
    puVar5 = (undefined4 *)(param_1 + 0x10);
    uVar2 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
    iVar3 = (*extraout_w11)(uVar2,*puVar5,0);
    *(int *)(param_1 + 300) = iVar3;
    if (iVar3 != 0) goto LAB_10067020;
  }
  else {
LAB_10067020:
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x14);
    puVar5 = (undefined4 *)(param_1 + 4);
    uVar2 = (*pcVar1)();
    (*extraout_w11_00)(uVar2,*puVar5,uVar4 & 0xffffffff);
  }
  if (*(int *)(param_1 + 0x130) == -1) {
    *(int *)(param_1 + 0x130) = 0;
  }
LAB_1006707c:
  *(undefined8 *)(param_1 + 0x14) = 0;
  return;
}

