/*
 * FUN_1008f850 at 1008f850
 * undefined FUN_1008f850(void)
 * Address ranges: 1008f850-1008fa87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1008f850(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined4 local_5c;
  
  iVar3 = *(int *)(param_1 + 0x34);
  auVar8 = FUN_1008f048(param_1,param_2);
  if ((auVar8._0_8_ & 1) == 0) {
    iVar3 = FUN_1008bf70(param_1,auVar8._8_8_ & 0xffffffff);
  }
  else {
    uVar7 = 0;
    uVar6 = 0;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        uVar5 = 0;
        if (*(uint *)(param_1 + 0x20) != 0) {
          do {
            if (*(int *)(param_1 + 0x60) != 0) {
              iVar1 = (*(code *)PTR_FUN_10134210)
                                (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x2c) * uVar6 * 0x1c
                                 + 0xc);
              if (iVar1 == 0) {
                uVar7 = 1 << (ulonglong)(uVar6 & 0x1f) | uVar7;
              }
            }
            uVar4 = FUN_10090280(param_1,uVar5,uVar6,1);
            if ((uVar4 & 1) != 0) {
              uVar7 = 1 << (ulonglong)(uVar6 & 0x1f) | uVar7;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + 0x20));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x24));
    }
    if (iVar3 - 3U < 3) {
      if ((*(int *)(param_1 + 0xb8) == 0) &&
         ((*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) != 0xa000
          || (*(int *)(param_1 + 0xe4) == 1)))) {
        uVar2 = FUN_1008f078(param_1);
        FUN_100adf70(uVar2);
        FUN_1008b758(param_1 + 0xac,*(undefined4 *)(param_1 + 0x54),local_5c);
      }
      if (*(char *)(param_1 + 0xda) == '\0') {
        return *(int *)(param_1 + 0xc0);
      }
      goto LAB_1008fa5c;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_1008f760(param_1);
    }
    iVar3 = *(int *)(param_1 + 0xc0);
    if (uVar7 != 0) {
      FUN_1008d688(param_1,param_1 + 0x48,param_1 + 0xac,uVar7,*(undefined4 *)(param_1 + 0x2c));
    }
  }
  if (*(char *)(param_1 + 0xda) == '\0') {
    return iVar3;
  }
LAB_1008fa5c:
  iVar3 = FUN_10090848(param_1);
  return iVar3;
}

