/*
 * FUN_1005c820 at 1005c820
 * undefined FUN_1005c820(void)
 * Address ranges: 1005c820-1005cbf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1005c820(int param_1,undefined8 param_2,int param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [12];
  
  iVar10 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
  if (iVar10 == 0) {
    FUN_1004bc70(0);
  }
  uVar12 = 0x80070057;
  if (((*(char *)(param_1 + 0x1750) != '\0') && (*(char *)(param_1 + 0x1751) != '\0')) &&
     (*(uint *)(param_1 + 0x167c) <= *(uint *)(param_1 + 0x1744))) {
    uVar2 = *(uint *)(param_1 + 0x1680);
    uVar12 = 0;
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      uVar9 = SoftwareBreakpoint(0xf004,0x1005c8c4);
      (*(code *)uVar9)();
    }
    uVar8 = 0;
    if (uVar2 != 0) {
      uVar8 = *(uint *)(param_1 + 0x1740) / uVar2;
    }
    uVar8 = uVar8 * uVar2;
    if (uVar8 != 0) {
      bVar7 = ~(byte)(*(uint *)(param_1 + 0x1734) >> 3) & 1;
      iVar10 = *(int *)(param_1 + 0x1748);
      iVar3 = *(int *)(param_1 + 0x1674);
      iVar4 = *(int *)(param_1 + 0x1678);
      if (iVar10 == 0) {
        iVar10 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
        if (iVar10 == 0) {
          FUN_1004bc70(0);
        }
        FUN_10096840(auStack_4c);
        uVar12 = 0x80070057;
        if (uVar8 < 0x10000 && iVar3 != 0) {
          if (iVar4 - 1U < 6 || param_3 == 2) {
            if (*(int *)(param_1 + 0x1688) == 3 && param_3 != 2) {
              uVar12 = 0x887602e1;
            }
            else {
              uVar12 = 0;
              if ((*(int *)(param_1 + 0x1688) != 3) && (uVar12 = 0, iVar4 - 1U < 6)) {
                iVar10 = *(int *)(param_1 + 0x18);
                if (((iVar10 == 0) || (*(char *)(iVar10 + 9) == '\0')) &&
                   ((iVar11 = *(int *)(param_1 + 0x28), iVar11 == 0 ||
                    (*(char *)(iVar11 + 9) == '\0')))) {
                  if (((iVar10 == 0) || (*(char *)(iVar10 + 8) == '\0')) &&
                     ((iVar11 == 0 || (*(char *)(iVar11 + 8) == '\0')))) {
                    uVar12 = FUN_1005a050(param_1,iVar4,param_1 + 0x1684,iVar3,uVar8,0,0,param_3,
                                          bVar7);
                  }
                  else {
                    uVar12 = 0x887601c2;
                  }
                }
                else {
                  uVar12 = 0x887601ae;
                }
              }
            }
          }
          else {
            uVar12 = 0x887602e0;
          }
        }
        puVar1 = auStack_4c;
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 0x174c);
        iVar11 = (*(code *)PTR_FUN_100a1078)();
        if (iVar11 == 0) {
          FUN_1004bc70(0);
        }
        FUN_10096840(auStack_50);
        uVar12 = 0x80070057;
        if (uVar8 < 0x10000 && iVar3 != 0) {
          if (iVar4 - 1U < 6 || param_3 == 2) {
            if (*(int *)(param_1 + 0x1688) == 3 && param_3 != 2) {
              uVar12 = 0x887602e1;
            }
            else {
              uVar12 = 0;
              if ((*(int *)(param_1 + 0x1688) != 3) && (uVar12 = 0, iVar4 - 1U < 6)) {
                iVar11 = *(int *)(param_1 + 0x18);
                if (((iVar11 == 0) || (*(char *)(iVar11 + 9) == '\0')) &&
                   ((iVar6 = *(int *)(param_1 + 0x28), iVar6 == 0 || (*(char *)(iVar6 + 9) == '\0'))
                   )) {
                  if (((iVar11 == 0) || (*(char *)(iVar11 + 8) == '\0')) &&
                     ((iVar6 == 0 || (*(char *)(iVar6 + 8) == '\0')))) {
                    uVar12 = FUN_1005a050(param_1,iVar4,param_1 + 0x1684,iVar10,uVar5,iVar3,uVar8,
                                          param_3,bVar7);
                  }
                  else {
                    uVar12 = 0x887601c2;
                  }
                }
                else {
                  uVar12 = 0x887601ae;
                }
              }
            }
          }
          else {
            uVar12 = 0x887602e0;
          }
        }
        puVar1 = auStack_50;
      }
      FUN_10096790(puVar1);
      (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
      if (param_3 == 2) {
        uVar12 = 0;
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1750) = 0;
  (*(code *)PTR_FUN_100a1044)(DAT_100a4c4c);
  return uVar12;
}

