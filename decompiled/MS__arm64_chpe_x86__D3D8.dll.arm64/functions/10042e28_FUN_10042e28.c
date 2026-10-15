/*
 * FUN_10042e28 at 10042e28
 * undefined FUN_10042e28(void)
 * Address ranges: 10042e28-10042fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10042e28(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int *piVar5;
  code *extraout_w11;
  code *extraout_w11_00;
  int *piVar6;
  uint uVar7;
  
  pcVar3 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      if (uVar7 < uVar4) {
        iVar1 = *(int *)(param_1 + 4) + uVar7 * 0x18;
        piVar5 = (int *)(iVar1 + 0x10);
        piVar6 = (int *)(iVar1 + 0x14);
      }
      else {
        piVar5 = (int *)&DAT_00000008;
        piVar6 = (int *)&DAT_0000000c;
      }
      iVar2 = *piVar5;
      iVar1 = param_2 + 0x4a0;
      if (iVar2 != 0) {
        (*(code *)PTR_FUN_10134070)(iVar1);
        piVar5 = (int *)(param_3 * 0x1510 + param_2 + 0x7f0);
        if (iVar2 == *piVar5) {
          *piVar5 = 0;
        }
        (*pcVar3)();
        (*extraout_w11)(iVar2);
        (*(code *)PTR_FUN_101340bc)(iVar1);
      }
      iVar2 = *piVar6;
      if (iVar2 != 0) {
        (*(code *)PTR_FUN_10134070)(iVar1);
        piVar5 = (int *)(param_3 * 0x1510 + param_2 + 0x7f8);
        if (iVar2 == *piVar5) {
          *piVar5 = 0;
        }
        (*pcVar3)();
        (*extraout_w11_00)(iVar2);
        (*(code *)PTR_FUN_101340bc)(iVar1);
      }
      uVar7 = uVar7 + 1;
      uVar4 = *(uint *)(param_1 + 8);
    } while (uVar7 < uVar4);
  }
  return;
}

