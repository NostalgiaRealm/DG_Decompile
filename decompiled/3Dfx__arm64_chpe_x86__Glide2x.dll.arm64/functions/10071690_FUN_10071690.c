/*
 * FUN_10071690 at 10071690
 * undefined FUN_10071690(void)
 * Address ranges: 10071690-10071857
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10071690(int param_1,undefined8 param_2,int param_3,ulonglong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  int extraout_w15;
  ulonglong local_20 [2];
  
  local_20[0] = param_4;
  iVar5 = FUN_10072960(param_1 + 0x3c,local_20);
  if (iVar5 != 0) {
    puVar6 = (uint *)(param_1 + 0x28);
    uVar10 = *puVar6;
    uVar7 = (uVar10 + extraout_w15) - 1 & -uVar10;
    uVar9 = param_3 - (int)param_4;
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(0xf004,0x100716e4);
      (*(code *)uVar4)();
    }
    uVar8 = 0;
    if (uVar10 != 0) {
      uVar8 = (uVar9 + uVar7) / uVar10;
    }
    uVar3 = 0;
    if (uVar10 != 0) {
      uVar3 = uVar9 / uVar10;
    }
    iVar5 = FUN_10077548(iVar5,*(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),uVar3,
                         uVar8);
    uVar10 = *puVar6;
    piVar1 = (int *)(iVar5 + 0x20);
    if (uVar10 == 0) {
                    /* WARNING: Does not return */
      uVar4 = SoftwareBreakpoint(0xf004,0x10071710);
      (*(code *)uVar4)();
    }
    uVar9 = 0;
    if (uVar10 != 0) {
      uVar9 = uVar7 / uVar10;
    }
    *piVar1 = *piVar1 - uVar9;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) - uVar7;
    if (((*piVar1 == 0) && ((ulonglong)*(uint *)(param_1 + 0x2c) < *(ulonglong *)(iVar5 + 8))) &&
       (*(int *)(param_1 + 0x30) == 0)) {
      FUN_10071568(param_1,iVar5);
      puVar6 = (uint *)(param_1 + 0x44);
      uVar7 = *puVar6;
      if (uVar7 != 0) {
        uVar10 = 0;
        uVar9 = uVar7;
        do {
          uVar8 = uVar9 + uVar10 >> 1;
          uVar11 = *(ulonglong *)(*(int *)(param_1 + 0x40) + uVar8 * 0x38);
          uVar3 = uVar8;
          if (uVar11 <= param_4) {
            if (param_4 <= uVar11) break;
            uVar10 = uVar8 + 1;
            uVar8 = uVar10;
            uVar3 = uVar9;
          }
          uVar9 = uVar3;
        } while (uVar9 != uVar10);
        if ((uVar8 != uVar7) && (*(ulonglong *)(*(int *)(param_1 + 0x40) + uVar8 * 0x38) == param_4)
           ) {
          uVar8 = uVar8 + 1;
          if (uVar8 < uVar7) {
            do {
              uVar7 = uVar8 + 1;
              puVar2 = (undefined8 *)(*(int *)(param_1 + 0x40) + uVar8 * 0x38);
              puVar2[-6] = puVar2[1];
              puVar2[-7] = *puVar2;
              puVar2[-4] = puVar2[3];
              puVar2[-5] = puVar2[2];
              puVar2[-2] = puVar2[5];
              puVar2[-3] = puVar2[4];
              puVar2[-1] = puVar2[6];
              uVar8 = uVar7;
            } while (uVar7 < *puVar6);
          }
          *puVar6 = *puVar6 - 1;
        }
      }
    }
  }
  return;
}

