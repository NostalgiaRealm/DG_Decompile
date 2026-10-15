/*
 * FUN_100af740 at 100af740
 * undefined FUN_100af740(void)
 * Address ranges: 100af740-100af9a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_100af740(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  uint extraout_w9;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_5c;
  
  uVar3 = FUN_100aef38(param_1);
  if ((uVar3 & 1) == 0) {
    iVar1 = FUN_100abdb0(param_1,param_2);
  }
  else {
    uVar6 = 0;
    uVar5 = 0;
    uVar4 = extraout_w9;
    if (*(uint *)(param_1 + 0x24) != 0) {
      do {
        uVar4 = 0;
        if (*(uint *)(param_1 + 0x20) != 0) {
          do {
            if (*(int *)(param_1 + 0x60) != 0) {
              iVar1 = (*(code *)PTR_FUN_1016c210)
                                (*(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x2c) * uVar5 * 0x1c
                                 + 0xc);
              if (iVar1 == 0) {
                uVar6 = 1 << (ulonglong)(uVar5 & 0x1f) | uVar6;
              }
            }
            uVar3 = FUN_100b01a0(param_1,uVar4,uVar5,1);
            if ((uVar3 & 1) != 0) {
              uVar6 = 1 << (ulonglong)(uVar5 & 0x1f) | uVar6;
            }
            uVar4 = uVar4 + 1;
          } while (uVar4 < *(uint *)(param_1 + 0x20));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x24));
      uVar4 = extraout_w9 & 0xff;
    }
    if (uVar4 != 0) {
      if ((*(int *)(param_1 + 0xb8) == 0) &&
         ((*(int *)(*(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x10) * 0x1510 + 0x520) != 0xa000
          || (*(int *)(param_1 + 0xe4) == 1)))) {
        uVar2 = FUN_100aef68(param_1);
        FUN_100ce8c8(uVar2);
        FUN_100ab3e8(param_1 + 0xac,*(undefined4 *)(param_1 + 0x54),local_5c);
      }
      if (*(char *)(param_1 + 0xda) == '\0') {
        return *(int *)(param_1 + 0xc0);
      }
      goto LAB_100af978;
    }
    if (*(int *)(param_1 + 0xc0) == 0) {
      FUN_100af650(param_1);
    }
    iVar1 = *(int *)(param_1 + 0xc0);
    if ((param_2 != '\0') && (iVar1 != 0)) {
      FUN_100ab780(param_1 + 0xac,*(undefined4 *)(param_1 + 0x54));
      iVar1 = *(int *)(param_1 + 200);
    }
    if (uVar6 != 0) {
      FUN_100ad578(param_1,param_1 + 0x48,param_1 + 0xac,uVar6,*(undefined4 *)(param_1 + 0x2c));
    }
  }
  if (*(char *)(param_1 + 0xda) == '\0') {
    return iVar1;
  }
LAB_100af978:
  iVar1 = FUN_100b0768(param_1,param_2);
  return iVar1;
}

