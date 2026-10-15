/*
 * FUN_1002da80 at 1002da80
 * undefined FUN_1002da80(void)
 * Address ranges: 1002da80-1002dc97
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002da80(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  undefined1 auStack_50 [16];
  
  pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  iVar2 = *(int *)(param_1 + 8);
  uVar8 = 2;
  if (*(int *)(iVar2 + 0x40) != 1) {
    uVar8 = 0;
  }
  uVar9 = 8;
  if (*(int *)(iVar2 + 0x38) == 0) {
    uVar9 = 0;
  }
  iVar3 = *(int *)(iVar2 + 0x3c);
  uVar10 = 4;
  if (*(int *)(iVar2 + 0x34) == 0) {
    uVar10 = 0;
  }
  piVar1 = (int *)(param_1 + 0x3018);
  uVar5 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  plVar6 = (longlong *)(*extraout_w11)(uVar5,auStack_50);
  FUN_10064bb0(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),8,
               *plVar6 + (ulonglong)
                         (*(int *)(*piVar1 + 0x3310) * (uVar8 | uVar9 | (uint)(iVar3 == 1) | uVar10)
                         ));
  uVar5 = (*pcVar4)();
  lVar7 = (*extraout_w11_00)(uVar5);
  FUN_10064c50(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),*(int *)(param_1 + 0xc) + 9,
               lVar7 + (ulonglong)(uint)(*(int *)(param_1 + 0x301c) * param_2));
  uVar5 = (*pcVar4)();
  lVar7 = (*extraout_w11_01)(uVar5);
  FUN_10064c50(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),*(int *)(param_1 + 0xc) + 0xc,
               lVar7 + (ulonglong)(uint)(*(int *)(param_1 + 0x301c) * param_3));
  FUN_10063e28(*(undefined4 *)(*(int *)(*piVar1 + 0x3308) + 0x1304),
               *(undefined4 *)(param_1 + 0x3020),0,1,0x80);
  return;
}

