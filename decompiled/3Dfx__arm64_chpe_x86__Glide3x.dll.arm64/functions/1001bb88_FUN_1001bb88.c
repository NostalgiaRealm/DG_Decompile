/*
 * FUN_1001bb88 at 1001bb88
 * undefined FUN_1001bb88(void)
 * Address ranges: 1001bb88-1001bd87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001bb88(int param_1)

{
  bool bVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  code *extraout_w11_04;
  int iVar7;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  code *local_110;
  undefined1 auStack_108 [88];
  int local_b0;
  undefined1 auStack_a8 [88];
  int local_50;
  
  iVar7 = 0;
  iVar6 = *(int *)(*(int *)(param_1 + 4) + 0x29d8) + 0x4a0;
  (*(code *)PTR_FUN_100a003c)(iVar6);
  pcVar2 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  local_118 = 0;
  uVar3 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
  (*extraout_w11)(uVar3,&local_118);
  if (local_118 != 0) {
    uVar3 = (*pcVar2)();
    iVar4 = (*extraout_w11_00)(uVar3,auStack_108);
    if (-1 < iVar4) {
      local_120 = 0;
      local_11c = 0;
      local_110 = pcVar2;
      bVar1 = false;
      iVar4 = 0;
      local_114 = iVar6;
      do {
        uVar3 = (*pcVar2)();
        iVar5 = (*extraout_w11_01)(uVar3,iVar4,&local_120);
        iVar6 = local_114;
        iVar7 = local_11c;
        if (iVar5 < 0) break;
        if (local_120 != 0) {
          uVar3 = (*local_110)();
          iVar6 = (*extraout_w11_02)(uVar3,auStack_a8);
          if ((-1 < iVar6) && (local_50 == local_b0)) {
            bVar1 = true;
            local_11c = iVar4;
          }
          uVar3 = (*pcVar2)();
          (*extraout_w11_03)(uVar3);
        }
        iVar4 = iVar4 + 1;
        iVar6 = local_114;
        iVar7 = local_11c;
      } while (!bVar1);
    }
    uVar3 = (*pcVar2)();
    (*extraout_w11_04)(uVar3);
  }
  (*(code *)PTR_FUN_100a0090)(iVar6);
  return iVar7;
}

