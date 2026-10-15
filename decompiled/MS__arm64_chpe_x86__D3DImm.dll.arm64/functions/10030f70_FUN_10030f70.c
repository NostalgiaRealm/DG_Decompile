/*
 * FUN_10030f70 at 10030f70
 * undefined FUN_10030f70(void)
 * Address ranges: 10030f70-1003106f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10030f70(undefined8 *param_1)

{
  uint *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  code *extraout_w11;
  uint uVar5;
  
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  puVar1 = (uint *)(param_1 + 1);
  if (*puVar1 != 0) {
    uVar5 = 0;
    if (*puVar1 == 0) {
      iVar4 = 0;
      goto LAB_10030fdc;
    }
    do {
      iVar4 = *(int *)((int)param_1 + 4) + uVar5 * 0x40;
LAB_10030fdc:
      if (*(int *)(iVar4 + 0x10) != 0) {
        FUN_10075758(*(undefined4 *)(param_1 + 2),*(int *)(iVar4 + 0x10));
        uVar3 = (*pcVar2)();
        (*extraout_w11)(uVar3);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  FUN_10081dc0(*(undefined4 *)param_1);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  FUN_10081dc0(0);
  *param_1 = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  *puVar1 = 0;
  return;
}

