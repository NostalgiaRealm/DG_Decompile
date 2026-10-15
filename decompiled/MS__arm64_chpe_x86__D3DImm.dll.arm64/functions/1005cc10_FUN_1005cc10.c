/*
 * FUN_1005cc10 at 1005cc10
 * undefined FUN_1005cc10(void)
 * Address ranges: 1005cc10-1005d00f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005cc10(int param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_54 [4];
  int *local_50;
  
  iVar7 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar7 == 0) {
    FUN_1004bc70(0);
  }
  uVar13 = 0x80070057;
  if (((*(char *)(param_1 + 0x1750) == '\0') || (uVar13 = 0, *(int *)(param_1 + 0x1748) != 0)) ||
     (*(char *)(param_1 + 0x1751) == '\0')) goto LAB_1005cfdc;
  puVar1 = (uint *)(param_1 + 0x1740);
  uVar11 = *puVar1;
  if (*(int *)(param_1 + 0x1738) - 4U <= uVar11) {
    uVar3 = *(uint *)(param_1 + 0x1680);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      uVar6 = SoftwareBreakpoint(0xf004,0x1005ccc0);
      (*(code *)uVar6)();
    }
    uVar12 = 0;
    if (uVar3 != 0) {
      uVar12 = uVar11 / uVar3;
    }
    if (uVar11 == uVar12 * uVar3) {
      uVar3 = *(uint *)(param_1 + 0x1734);
      piVar2 = (int *)(param_1 + 0x1674);
      iVar7 = *piVar2;
      local_50 = (int *)(param_1 + 0x1678);
      iVar4 = *local_50;
      iVar8 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
      if (iVar8 == 0) {
        FUN_1004bc70(0);
      }
      FUN_10096840(auStack_54);
      if (((((uVar11 < 0x10000 && iVar7 != 0) && (uVar12 = iVar4 - 1, uVar12 < 6 || param_3 == 2))
           && ((*(int *)(param_1 + 0x1688) != 3 && uVar12 < 6 &&
               ((iVar8 = *(int *)(param_1 + 0x18), iVar8 == 0 || (*(char *)(iVar8 + 9) == '\0'))))))
          && ((iVar5 = *(int *)(param_1 + 0x28), iVar5 == 0 || (*(char *)(iVar5 + 9) == '\0')))) &&
         (((iVar8 == 0 || (*(char *)(iVar8 + 8) == '\0')) &&
          ((iVar5 == 0 || (*(char *)(iVar5 + 8) == '\0')))))) {
        FUN_1005a050(param_1,iVar4,param_1 + 0x1684,iVar7,uVar11,0,0,param_3,~(byte)(uVar3 >> 3) & 1
                    );
      }
      FUN_10096790(auStack_54);
      (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
      iVar7 = *local_50;
      if (iVar7 == 3) {
        uVar3 = *(uint *)(param_1 + 0x1690);
        puVar9 = (undefined8 *)*piVar2;
        puVar10 = (undefined8 *)((int)puVar9 + (*puVar1 - 1) * uVar3);
        uVar11 = 0;
        if (uVar3 >> 3 != 0) {
          do {
            uVar6 = *puVar10;
            uVar11 = uVar11 + 1;
            puVar10 = puVar10 + 1;
            *puVar9 = uVar6;
            puVar9 = puVar9 + 1;
          } while (uVar11 < uVar3 >> 3);
        }
        if ((uVar3 >> 2 & 1) != 0) {
          *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        }
        *puVar1 = 1;
        uVar11 = 1;
      }
      else {
        if (iVar7 == 5) {
          puVar9 = (undefined8 *)*piVar2;
          uVar12 = *(uint *)(param_1 + 0x1690) >> 1 & 0x3fffffff;
          puVar10 = (undefined8 *)((int)puVar9 + (*puVar1 - 2) * *(uint *)(param_1 + 0x1690));
          uVar11 = 0;
          if (uVar12 >> 1 != 0) {
            do {
              uVar6 = *puVar10;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
              *puVar9 = uVar6;
              puVar9 = puVar9 + 1;
            } while (uVar11 < uVar12 >> 1);
          }
        }
        else {
          if (iVar7 != 6) {
            *puVar1 = 0;
            uVar11 = 0;
            goto LAB_1005cf68;
          }
          uVar3 = *(uint *)(param_1 + 0x1690);
          puVar10 = (undefined8 *)(*piVar2 + (*puVar1 - 1) * uVar3);
          uVar12 = uVar3 >> 2;
          puVar9 = (undefined8 *)(uVar3 + *piVar2);
          uVar11 = 0;
          if (uVar3 >> 3 != 0) {
            do {
              uVar6 = *puVar10;
              uVar11 = uVar11 + 1;
              puVar10 = puVar10 + 1;
              *puVar9 = uVar6;
              puVar9 = puVar9 + 1;
            } while (uVar11 < uVar3 >> 3);
          }
        }
        if ((uVar12 & 1) != 0) {
          *(undefined4 *)puVar9 = *(undefined4 *)puVar10;
        }
        *puVar1 = 2;
        uVar11 = 2;
      }
    }
  }
LAB_1005cf68:
  uVar3 = *(uint *)(param_1 + 0x1690);
  puVar10 = (undefined8 *)(*(int *)(param_1 + 0x1674) + uVar3 * uVar11);
  uVar11 = 0;
  if (uVar3 >> 3 != 0) {
    do {
      uVar6 = *param_2;
      uVar11 = uVar11 + 1;
      param_2 = param_2 + 1;
      *puVar10 = uVar6;
      puVar10 = puVar10 + 1;
    } while (uVar11 < uVar3 >> 3);
  }
  if ((uVar3 >> 2 & 1) != 0) {
    *(undefined4 *)puVar10 = *(undefined4 *)param_2;
  }
  *puVar1 = *puVar1 + 1;
  *(int *)(param_1 + 0x1744) = *(int *)(param_1 + 0x1744) + 1;
LAB_1005cfdc:
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar13;
}

