/*
 * FUN_10110388 at 10110388
 * undefined FUN_10110388(void)
 * Address ranges: 10110388-101105bf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10110388(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  code *extraout_w11;
  code *extraout_w11_00;
  code *extraout_w11_01;
  code *extraout_w11_02;
  code *extraout_w11_03;
  uint uVar8;
  int iVar9;
  
  iVar9 = 0;
  uVar6 = (*(code *)PTR_FUN_1016c074)(param_1 + 0x4a0);
  if (*(uint *)(param_1 + 0x4bc) != 0) {
    piVar1 = (int *)(param_1 + 0x4b8);
    uVar8 = 0;
    do {
      piVar2 = *(int **)(*piVar1 + uVar8 * 4);
      if ((*piVar2 == param_2) && (*(char *)((int)piVar2 + 0xd5b) == '\0')) {
        if ((param_3 != 0) && (piVar2[0x358] == param_3)) {
          piVar2[0x358] = 0;
        }
        piVar2 = (int *)(*(int *)(*piVar1 + uVar8 * 4) + 0xc);
        iVar9 = *piVar2 + -1;
        *piVar2 = iVar9;
        if (iVar9 == 0) {
          *(undefined1 *)(*(int *)(*piVar1 + uVar8 * 4) + 0xd5b) = 1;
          iVar3 = *(int *)(*piVar1 + uVar8 * 4);
          if (*(int *)(iVar3 + 4) != 0) {
            FUN_1010f220(uVar6,iVar3);
            pcVar4 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
            puVar7 = (undefined4 *)(*piVar1 + uVar8 * 4);
            (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
            (*extraout_w11)(param_1,*puVar7);
            puVar7 = (undefined4 *)(*piVar1 + uVar8 * 4);
            (*pcVar4)();
            (*extraout_w11_00)(param_1,*puVar7);
            puVar7 = (undefined4 *)(*piVar1 + uVar8 * 4);
            (*pcVar4)();
            (*extraout_w11_01)(param_1,*puVar7);
            puVar7 = (undefined4 *)(*piVar1 + uVar8 * 4);
            (*pcVar4)();
            (*extraout_w11_02)(param_1,*puVar7);
            uVar5 = (*pcVar4)();
            (*extraout_w11_03)(uVar5);
          }
          FUN_1010e8f8(param_1,*(undefined4 *)(*piVar1 + uVar8 * 4));
        }
        break;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x4bc));
  }
  (*(code *)PTR_FUN_1016c0c0)(param_1 + 0x4a0);
  return iVar9;
}

