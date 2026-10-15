/*
 * FUN_100a2ff0 at 100a2ff0
 * undefined FUN_100a2ff0(void)
 * Address ranges: 100a2ff0-100a31e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100a2ff0(int param_1,undefined1 param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined4 local_5c;
  
  uVar4 = (ulonglong)param_3;
  auVar8 = FUN_100a0318(param_1,param_2,uVar4);
  if ((auVar8._0_8_ & 1) == 0) {
    uVar3 = FUN_1009bae0(param_1,auVar8._8_8_ & 0xffffffff,uVar4 & 0xffffffff);
  }
  else {
    puVar1 = (uint *)(param_1 + 0x24);
    uVar7 = 0;
    uVar6 = 0;
    if (*puVar1 != 0) {
      do {
        uVar5 = 0;
        if (*(uint *)(param_1 + 0x20) != 0) {
          do {
            if (*(int *)(param_1 + 0x5c) != 0) {
              iVar2 = (*(code *)PTR_FUN_10134210)
                                (*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x2c) * uVar6 * 0x20
                                 + 0x10);
              if (iVar2 == 0) {
                uVar7 = 1 << (ulonglong)(uVar6 & 0x1f) | uVar7;
              }
            }
            uVar4 = FUN_100a1a48(param_1,uVar5,uVar6,1);
            if ((uVar4 & 1) != 0) {
              uVar7 = 1 << (ulonglong)(uVar6 & 0x1f) | uVar7;
            }
            uVar5 = uVar5 + 1;
          } while (uVar5 < *(uint *)(param_1 + 0x20));
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *puVar1);
    }
    if (*(int *)(param_1 + 0x34) - 3U < 3) {
      if (*(int *)(param_1 + 0xfc) == 0) {
        uVar3 = FUN_100a0348(param_1);
        FUN_100adf70(uVar3);
        FUN_1009b030(param_1 + 0xf0,*(undefined4 *)(param_1 + 0x54),local_5c);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x108);
    }
    else {
      if (*(int *)(param_1 + 0xfc) == 0) {
        FUN_100a0d00(param_1);
      }
      uVar3 = *(undefined4 *)(param_1 + 0x108);
      if (uVar7 != 0) {
        FUN_1009d2e0(param_1,param_1 + 0x48,uVar7,uVar3,*puVar1 != 1,0);
      }
    }
  }
  return uVar3;
}

