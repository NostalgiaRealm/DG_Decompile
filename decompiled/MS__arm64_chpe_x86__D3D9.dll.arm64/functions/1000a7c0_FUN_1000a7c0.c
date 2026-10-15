/*
 * FUN_1000a7c0 at 1000a7c0
 * undefined FUN_1000a7c0(void)
 * Address ranges: 1000a7c0-1000a95b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000a7c0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5,uint param_6,
                 uint param_7,int param_8,uint param_9,undefined4 param_10,int param_11,
                 undefined4 param_12,int param_13)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = 0;
  if (param_9 != 0) {
    do {
      uVar11 = *(uint *)(param_11 + uVar12 * 0x10);
      if (param_6 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x1000a82c);
        (*(code *)uVar8)();
      }
      uVar5 = 0;
      if (param_6 != 0) {
        uVar5 = uVar11 / param_6;
      }
      uVar1 = *(uint *)(param_11 + 4 + uVar12 * 0x10);
      if (param_7 == 0) {
                    /* WARNING: Does not return */
        uVar8 = SoftwareBreakpoint(0xf004,0x1000a844);
        (*(code *)uVar8)();
      }
      uVar6 = 0;
      if (param_7 != 0) {
        uVar6 = uVar1 / param_7;
      }
      if (param_13 == 0) {
        uVar9 = 0;
        uVar10 = uVar1;
        if (param_6 != 0) {
          uVar9 = uVar11 / param_6;
        }
      }
      else {
        uVar10 = *(uint *)(param_13 + uVar12 * 8 + 4);
        uVar9 = 0;
        if (param_6 != 0) {
          uVar9 = *(uint *)(param_13 + uVar12 * 8) / param_6;
        }
      }
      uVar7 = 0;
      if (param_7 != 0) {
        uVar7 = (*(int *)(param_11 + 0xc + uVar12 * 0x10) - uVar1) / param_7;
      }
      iVar2 = param_2 + uVar5 * param_8 + uVar6 * param_4;
      uVar5 = 0;
      if (param_7 != 0) {
        uVar5 = uVar10 / param_7;
      }
      iVar3 = param_3 + uVar9 * param_8 + uVar5 * param_5;
      uVar5 = 0;
      if (param_6 != 0) {
        uVar5 = (*(int *)(param_11 + 8 + uVar12 * 0x10) - uVar11) / param_6;
      }
      iVar4 = uVar5 * param_8;
      if (param_4 == iVar4 && param_5 == iVar4) {
        FUN_101325a0(iVar3,iVar2,iVar4 * uVar7);
      }
      else if (uVar7 != 0) {
        uVar11 = 0;
        do {
          FUN_101325a0(iVar3,iVar2,iVar4);
          uVar11 = uVar11 + 1;
          iVar2 = iVar2 + param_4;
          iVar3 = iVar3 + param_5;
        } while (uVar11 < uVar7);
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < param_9);
  }
  return;
}

