/*
 * FUN_100719f8 at 100719f8
 * undefined FUN_100719f8(void)
 * Address ranges: 100719f8-10071bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100719f8(int param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong extraout_x1;
  ulonglong extraout_x1_00;
  uint uVar10;
  code *extraout_w11;
  code *extraout_w11_00;
  uint uVar11;
  uint uVar12;
  
  pcVar6 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
  uVar12 = 0;
  do {
    if (*(int *)(param_1 + 0x2dc + uVar12 * 0x38) != 0) {
      iVar4 = param_1 + uVar12 * 0x38;
      (*(code *)PTR_FUN_100a003c)(iVar4 + 0x2f0);
      uVar11 = *(uint *)(iVar4 + 0x2e4);
      if (uVar11 != 0) {
        uVar9 = ZEXT48(FUN_100913d0);
        piVar1 = (int *)(iVar4 + 0x2e0);
        puVar2 = (uint *)(iVar4 + 0x2e4);
        do {
          uVar7 = (*pcVar6)(*(undefined4 *)(*piVar1 + uVar11 * 4 + -4),uVar9);
          iVar8 = (*extraout_w11)(uVar7);
          uVar9 = extraout_x1;
          if (iVar8 == param_2) {
            if (*(int *)(*piVar1 + uVar11 * 4 + -4) != 0) {
              uVar7 = (*pcVar6)();
              (*extraout_w11_00)(uVar7,1);
              uVar9 = extraout_x1_00;
            }
            uVar10 = *puVar2;
            if (uVar11 - 1 < uVar10) {
              uVar3 = uVar11;
              if (uVar11 < uVar10) {
                do {
                  puVar5 = (undefined4 *)(*piVar1 + uVar3 * 4);
                  uVar3 = uVar3 + 1;
                  puVar5[-1] = *puVar5;
                  uVar10 = *puVar2;
                } while (uVar3 < uVar10);
              }
              *puVar2 = uVar10 - 1;
            }
          }
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      iVar8 = *(int *)(iVar4 + 0x30c);
      while (iVar8 == param_2) {
        (*(code *)PTR_FUN_100a00dc)(0);
        iVar8 = *(int *)(iVar4 + 0x30c);
      }
      (*(code *)PTR_FUN_100a0090)(iVar4 + 0x2f0);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 8);
  return;
}

