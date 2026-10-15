/*
 * FUN_100792a0 at 100792a0
 * undefined FUN_100792a0(void)
 * Address ranges: 100792a0-100794af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100792a0(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint local_40 [4];
  
  (*(code *)PTR_FUN_100a1014)(param_1);
  local_40[0] = param_4;
  puVar6 = (undefined4 *)FUN_100794b0(param_1 + 0x28,local_40);
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (uint *)(param_1 + 0x18);
    uVar12 = *puVar7;
    puVar1 = puVar6 + 5;
    piVar9 = puVar6 + 8;
    puVar2 = puVar6 + 4;
    uVar8 = (uVar12 + param_2) - 1 & -uVar12;
    if (uVar8 != 0) {
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x10079324);
        (*(code *)uVar5)();
      }
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = ((uVar8 - param_4) + param_3) / uVar12;
      }
      uVar10 = 0;
      if (uVar12 != 0) {
        uVar10 = (param_3 - param_4) / uVar12;
      }
      puVar6 = (undefined4 *)switchD_1007b190::caseD_1007b1c8(puVar6,*puVar2,*puVar1,uVar10,uVar11);
      uVar12 = *puVar7;
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        uVar5 = SoftwareBreakpoint(0xf004,0x10079348);
        (*(code *)uVar5)();
      }
      uVar11 = 0;
      if (uVar12 != 0) {
        uVar11 = uVar8 / uVar12;
      }
      *piVar9 = *piVar9 - uVar11;
    }
    if (((*piVar9 == 0) && ((ulonglong)*(uint *)(param_1 + 0x1c) < *(ulonglong *)(puVar6 + 2))) &&
       (*(int *)(param_1 + 0x20) == 0)) {
      FUN_10081dc0(*puVar6);
      FUN_10081dc0(*puVar2);
      FUN_10081dc0(*puVar1);
      puVar7 = (uint *)(param_1 + 0x30);
      uVar8 = *puVar7;
      if (uVar8 != 0) {
        uVar12 = 0;
        uVar11 = uVar8;
        do {
          uVar10 = uVar11 + uVar12 >> 1;
          uVar13 = *(ulonglong *)(*(int *)(param_1 + 0x2c) + uVar10 * 0x38);
          uVar4 = uVar10;
          if (uVar13 <= param_4) {
            if (param_4 <= uVar13) break;
            uVar12 = uVar10 + 1;
            uVar10 = uVar12;
            uVar4 = uVar11;
          }
          uVar11 = uVar4;
        } while (uVar11 != uVar12);
        if ((uVar10 != uVar8) &&
           (*(ulonglong *)(*(int *)(param_1 + 0x2c) + uVar10 * 0x38) == (ulonglong)param_4)) {
          uVar10 = uVar10 + 1;
          if (uVar10 < uVar8) {
            do {
              uVar8 = uVar10 + 1;
              puVar3 = (undefined8 *)(*(int *)(param_1 + 0x2c) + uVar10 * 0x38);
              puVar3[-6] = puVar3[1];
              puVar3[-7] = *puVar3;
              puVar3[-4] = puVar3[3];
              puVar3[-5] = puVar3[2];
              puVar3[-2] = puVar3[5];
              puVar3[-3] = puVar3[4];
              puVar3[-1] = puVar3[6];
              uVar10 = uVar8;
            } while (uVar8 < *puVar7);
          }
          *puVar7 = *puVar7 - 1;
        }
      }
    }
  }
  (*(code *)PTR_FUN_100a1044)(param_1);
  return;
}

