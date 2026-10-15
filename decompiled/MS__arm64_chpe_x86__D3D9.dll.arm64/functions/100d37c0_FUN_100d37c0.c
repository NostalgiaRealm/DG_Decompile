/*
 * FUN_100d37c0 at 100d37c0
 * undefined FUN_100d37c0(void)
 * Address ranges: 100d37c0-100d39fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100d37c0(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  int *piVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  undefined1 auStack_4c [12];
  
  piVar4 = (int *)(param_1 + (param_2 + 0x4a6) * 4);
  if (param_3 == *piVar4) {
    return;
  }
  FUN_10157b40(auStack_4c);
  pcVar8 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  if (param_4 == 0) {
    if (param_5 == 0) {
      bVar1 = false;
      uVar10 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
      (*extraout_w11_01)(uVar10,param_2,0,0,0);
      param_5 = 0;
      goto LAB_100d3920;
    }
    uVar10 = *(undefined4 *)(param_5 + 0x94);
    piVar2 = (int *)(param_5 + 0xa8);
  }
  else {
    uVar10 = *(undefined4 *)(param_4 + 0x44);
    piVar2 = (int *)(param_4 + 0x58);
    param_5 = param_4;
  }
  bVar1 = *piVar2 - 0x28U < 2;
  (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(param_5);
  *(uint *)(param_5 + 0x2c) = 1 << (ulonglong)(param_2 + 0x10 & 0x1f) | *(uint *)(param_5 + 0x2c);
  uVar9 = (*pcVar8)();
  (*extraout_w11_00)(uVar9,param_2,0,uVar10,0);
LAB_100d3920:
  if (*piVar4 != 0) {
    puVar3 = (uint *)(*piVar4 + 0x2c);
    *puVar3 = *puVar3 & (1 << (ulonglong)(param_2 + 0x10 & 0x1f) ^ 0xffffffffU);
    uVar10 = (*pcVar8)();
    (*extraout_w11_02)(uVar10);
  }
  *piVar4 = param_5;
  if ((param_5 == 0) || (*(char *)(param_5 + 0x32) == '\0')) {
    iVar11 = 0;
  }
  else {
    iVar11 = 1;
  }
  uVar7 = 1 << (ulonglong)(param_2 & 0x1f);
  *(uint *)(param_1 + 0x6680) =
       *(uint *)(param_1 + 0x6680) & (uVar7 ^ 0xffffffff) | iVar11 << (ulonglong)(param_2 & 0x1f);
  uVar5 = *(uint *)(param_1 + 0x6684) & (uVar7 ^ 0xffffffff);
  if (bVar1) {
    uVar5 = uVar7 | *(uint *)(param_1 + 0x6684);
  }
  uVar6 = *(uint *)(param_1 + 0x6688) & (uVar7 ^ 0xffffffff);
  if (bVar1) {
    uVar6 = uVar7 | *(uint *)(param_1 + 0x6688);
  }
  *(uint *)(param_1 + 0x6684) = uVar5;
  *(uint *)(param_1 + 0x6688) = uVar6;
  FUN_10157a90(auStack_4c);
  return;
}

