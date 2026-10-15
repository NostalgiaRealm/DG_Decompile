/*
 * FUN_1005d020 at 1005d020
 * undefined FUN_1005d020(void)
 * Address ranges: 1005d020-1005d2fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005d020(int param_1,undefined2 param_2,int param_3)

{
  uint *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [4];
  int *local_4c;
  
  iVar9 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar9 == 0) {
    FUN_1004bc70(0);
  }
  uVar12 = 0x80070057;
  if (*(char *)(param_1 + 0x1750) == '\0') goto LAB_1005d2c8;
  iVar9 = *(int *)(param_1 + 0x1748);
  uVar12 = 0;
  if ((iVar9 == 0) || (*(char *)(param_1 + 0x1751) == '\0')) goto LAB_1005d2c8;
  puVar2 = *(undefined2 **)(param_1 + 0x1674);
  puVar1 = (uint *)(param_1 + 0x1740);
  uVar11 = *puVar1;
  if (*(int *)(param_1 + 0x1738) - 4U <= uVar11) {
    uVar3 = *(uint *)(param_1 + 0x1680);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar8 = SoftwareBreakpoint(0xf004,0x1005d0e0);
      (*(code *)uVar8)();
    }
    uVar7 = 0;
    if (uVar3 != 0) {
      uVar7 = uVar11 / uVar3;
    }
    if (uVar11 == uVar7 * uVar3) {
      uVar3 = *(uint *)(param_1 + 0x1734);
      uVar4 = *(undefined4 *)(param_1 + 0x174c);
      local_4c = (int *)(param_1 + 0x1678);
      iVar5 = *local_4c;
      iVar10 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
      if (iVar10 == 0) {
        FUN_1004bc70(0);
      }
      FUN_10096840(auStack_50);
      if ((((((uVar11 < 0x10000 && puVar2 != (undefined2 *)0x0) &&
             (uVar7 = iVar5 - 1, uVar7 < 6 || param_3 == 2)) &&
            (*(int *)(param_1 + 0x1688) != 3 && uVar7 < 6)) &&
           ((iVar10 = *(int *)(param_1 + 0x18), iVar10 == 0 || (*(char *)(iVar10 + 9) == '\0')))) &&
          ((iVar6 = *(int *)(param_1 + 0x28), iVar6 == 0 || (*(char *)(iVar6 + 9) == '\0')))) &&
         (((iVar10 == 0 || (*(char *)(iVar10 + 8) == '\0')) &&
          ((iVar6 == 0 || (*(char *)(iVar6 + 8) == '\0')))))) {
        FUN_1005a050(param_1,iVar5,param_1 + 0x1684,iVar9,uVar4,puVar2,uVar11,param_3,
                     ~(byte)(uVar3 >> 3) & 1);
      }
      FUN_10096790(auStack_50);
      (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
      iVar9 = *local_4c;
      if (iVar9 == 3) {
        *puVar2 = puVar2[*puVar1 - 1];
        uVar11 = 1;
      }
      else {
        if (iVar9 == 5) {
          *puVar2 = puVar2[*puVar1 - 2];
        }
        else if (iVar9 != 6) goto LAB_1005d29c;
        puVar2[1] = puVar2[*puVar1 - 1];
        uVar11 = 2;
      }
      *puVar1 = uVar11;
    }
  }
LAB_1005d29c:
  puVar2[*puVar1] = param_2;
  *puVar1 = *puVar1 + 1;
  *(int *)(param_1 + 0x1744) = *(int *)(param_1 + 0x1744) + 1;
LAB_1005d2c8:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar12;
}

