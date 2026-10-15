/*
 * FUN_1004f590 at 1004f590
 * undefined FUN_1004f590(void)
 * Address ranges: 1004f590-1004f83b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004f590(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  int extraout_w11;
  uint extraout_w12;
  undefined4 uVar7;
  undefined1 auVar8 [12];
  uint local_68;
  uint uStack_64;
  undefined8 local_60;
  undefined4 local_58;
  uint uStack_54;
  uint local_50;
  
  uVar7 = 0;
  if ((*(char *)(param_1 + 8) != '\0') &&
     (((*(uint *)(param_1 + 0x1b8) >> 3 & 1) == 0 ||
      (uVar7 = 0x8876024c, *(int *)(param_1 + 0x10c) == 0)))) {
    piVar1 = (int *)(param_1 + 0xfc);
    uVar7 = 0x887600e1;
    uVar5 = FUN_10038a68(*piVar1);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(uint *)(param_1 + 0x1b8);
      uVar4 = uVar6 >> 9 & 1;
      if (((uVar4 == 0) || ((*(uint *)(*piVar1 + 0x104) >> 4 & 1) != 0)) ||
         ((&DAT_100be33c)[*(int *)(*piVar1 + 0x11c) * 0x228] == '\0')) {
        local_60 = 0;
        uVar7 = 0x8876005f;
        if ((uVar6 & 0x200) == 0) {
          uVar7 = 0x8876024b;
        }
        local_68 = (uint)*(ushort *)(param_1 + 0x148);
        uStack_64 = (uint)*(ushort *)(param_1 + 0x14a);
        uStack_54 = (uint)*(ushort *)(param_1 + 0x14c);
        local_58 = 0;
        local_50 = (uint)*(ushort *)(param_1 + 0x14e);
        auVar8 = FUN_10003b00(uVar5,*(undefined4 *)(*piVar1 + 0x11c),&local_68);
        if (((auVar8._0_8_ & 1) != 0) || ((extraout_w12 >> 0xc & 1) != 0)) {
          iVar2 = *(int *)(extraout_w11 + 0x1d4 + auVar8._8_4_ * 0x228);
          iVar3 = param_1;
          do {
            if ((iVar3 != param_1) && ((*(uint *)(iVar3 + 0x1b8) >> 3 & 1) == 0)) break;
            *(undefined1 *)(iVar3 + 8) = 0;
            if (uVar4 != 0) {
              if (iVar2 != 0) {
                *(int *)(iVar2 + 0xcc) = *(int *)(iVar2 + 0xcc) + 1;
                FUN_100087c0(*(int *)(param_1 + 4));
                *(int *)(param_1 + 4) = iVar2;
              }
              *(undefined4 *)
               (extraout_w11 + 0x1d4 + *(int *)(*(int *)(param_1 + 0xfc) + 0x11c) * 0x228) =
                   *(undefined4 *)(param_1 + 4);
            }
            if (*(int *)(iVar3 + 0x118) != 0) {
              *(undefined1 *)(*(int *)(iVar3 + 0x118) + 8) = 0;
            }
            iVar3 = *(int *)(iVar3 + 0x110);
          } while (iVar3 != 0);
          uVar6 = 0;
          do {
            piVar1 = (int *)(param_1 + 0x120 + uVar6 * 4);
            while (iVar2 = *piVar1, iVar2 != 0) {
              *(undefined1 *)(iVar2 + 8) = 0;
              if (*(int *)(iVar2 + 0x118) != 0) {
                *(undefined1 *)(*(int *)(iVar2 + 0x118) + 8) = 0;
              }
              piVar1 = (int *)(iVar2 + 0x110);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 5);
          uVar7 = 0;
        }
      }
    }
  }
  if (((*(uint *)(param_1 + 0x1bc) & 0x20010) != 0) &&
     ((*(uint *)(param_1 + 0x1b8) >> 0xc & 1) != 0)) {
    for (; iVar2 = param_1, *(int *)(param_1 + 0x10c) != 0; param_1 = *(int *)(param_1 + 0x10c)) {
    }
    do {
      piVar1 = (int *)(iVar2 + 0x110);
      *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc0) = 0;
      iVar2 = *piVar1;
    } while (*piVar1 != 0);
    uVar6 = 0;
    do {
      piVar1 = (int *)(param_1 + 0x120 + uVar6 * 4);
      while (iVar2 = *piVar1, iVar2 != 0) {
        *(undefined4 *)(*(int *)(iVar2 + 4) + 0xc0) = 0;
        piVar1 = (int *)(iVar2 + 0x110);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
  }
  return uVar7;
}

