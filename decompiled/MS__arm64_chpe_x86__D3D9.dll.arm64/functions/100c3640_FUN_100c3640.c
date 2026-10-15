/*
 * FUN_100c3640 at 100c3640
 * undefined FUN_100c3640(void)
 * Address ranges: 100c3640-100c386b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100c3640(int param_1,ulonglong param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_54;
  
  uVar5 = (ulonglong)param_3;
  uVar4 = FUN_100c0938(param_1,param_2,uVar5);
  if ((uVar4 & 1) == 0) {
    iVar2 = FUN_100bbe30(param_1,param_2 & 0xff,uVar5 & 0xffffffff);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x24);
    uVar8 = 0;
    uVar7 = 0;
    if (*puVar1 != 0) {
      do {
        uVar6 = 0;
        if (*(uint *)(param_1 + 0x20) != 0) {
          do {
            if (*(int *)(param_1 + 0x5c) != 0) {
              iVar2 = (*(code *)PTR_FUN_1016c210)
                                (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x2c) * uVar7 * 0x20
                                 + 0x10);
              if (iVar2 == 0) {
                uVar8 = 1 << (ulonglong)(uVar7 & 0x1f) | uVar8;
              }
            }
            uVar4 = FUN_100c2088(param_1,uVar6,uVar7,1);
            if ((uVar4 & 1) != 0) {
              uVar8 = 1 << (ulonglong)(uVar7 & 0x1f) | uVar8;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < *(uint *)(param_1 + 0x20));
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *puVar1);
    }
    if (*(int *)(param_1 + 0x34) - 3U < 3) {
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar3 = FUN_100c0968(param_1);
        FUN_100ce8c8(uVar3);
        FUN_100bb160(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x54),local_54,0,
                     *(undefined4 *)(&DAT_101625d0 + *(int *)(param_1 + 0x1c) * 4));
      }
      iVar2 = *(int *)(param_1 + 0x108);
    }
    else {
      if (*(int *)(param_1 + 0xfc) == 0) {
        FUN_100c1320(param_1);
      }
      iVar2 = *(int *)(param_1 + 0x108);
      if ((char)param_2 != '\0' && iVar2 != -1) {
        FUN_100bb5c0(param_1 + 0xf0,*puVar1 != 1,*(undefined4 *)(param_1 + 0x54));
        iVar2 = *(int *)(param_1 + 0x114);
      }
      if (uVar8 != 0) {
        FUN_100bd8c0(param_1,param_1 + 0x48,uVar8,*(int *)(param_1 + 0x108),*puVar1 != 1,0);
      }
    }
  }
  return iVar2;
}

