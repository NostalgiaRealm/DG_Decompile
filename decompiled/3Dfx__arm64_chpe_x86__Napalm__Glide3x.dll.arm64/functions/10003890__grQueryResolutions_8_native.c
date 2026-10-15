/*
 * _grQueryResolutions@8_native at 10003890
 * undefined _grQueryResolutions@8_native(void)
 * Address ranges: 10003890-10003b9b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grQueryResolutions_8_native(int *param_1,uint *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined4 *extraout_w8;
  undefined4 *extraout_w8_00;
  code *extraout_w11;
  code *extraout_w11_00;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint local_58;
  int iStack_54;
  int local_48;
  
  iVar2 = FUN_1000ae60();
  iVar8 = 0;
  uVar7 = FUN_1000b5c0(iVar2);
  if ((uVar7 & 1) != 0) {
    if (((*param_1 == 0x7fff7fff) && (param_1[1] == 0x7fff7fff)) &&
       (iVar3 = FUN_1000cd68(iVar2), iVar3 == 4)) {
      uVar7 = FUN_1000b680(iVar2);
      pcVar1 = __hybrid_WowA64DispatchIndirectCallCfgFunctionPointer;
      if ((uVar7 & 1) != 0) {
        uVar4 = (*__hybrid_WowA64DispatchIndirectCallCfgFunctionPointer)();
        uVar5 = (*extraout_w11)(uVar4,*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),
                                *extraout_w8);
        if (uVar5 != 0) {
          uVar6 = 0;
          do {
            uVar10 = 2;
            do {
              uVar9 = 0;
              do {
                if (param_2 != (uint *)0x0) {
                  uVar4 = (*pcVar1)();
                  (*extraout_w11_00)(uVar4,&local_58,*(undefined4 *)(iVar2 + 0x10),
                                     *(undefined4 *)(iVar2 + 0x14),*extraout_w8_00,uVar6);
                  *param_2 = local_58 | iStack_54 << 0x10;
                  param_2[1] = local_48 << 0x10;
                  param_2[2] = uVar10;
                  param_2[3] = uVar9;
                  param_2 = param_2 + 4;
                }
                uVar9 = uVar9 + 1;
                iVar8 = iVar8 + 0x10;
              } while (uVar9 <= (uVar10 == 2));
              uVar10 = uVar10 + 1;
            } while (uVar10 < 4);
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar5);
        }
      }
    }
    else {
      uVar5 = 0;
      do {
        iVar3 = *param_1;
        if ((iVar3 == 0xff || iVar3 == -1) || (iVar3 == (&DAT_1009fd80)[uVar5])) {
          uVar6 = 0;
          do {
            iVar3 = param_1[1];
            if ((iVar3 == 0xff || iVar3 == -1) || (iVar3 == (&DAT_1009fd50)[uVar6])) {
              uVar10 = 2;
              do {
                if (param_1[2] == 0xffffffff || param_1[2] == uVar10) {
                  uVar9 = 0;
                  do {
                    if ((param_1[3] == 0xffffffff || param_1[3] == uVar9) &&
                       ((uint)(ushort)(&DAT_1009fd12)[uVar5 * 2] *
                        (uint)(ushort)(&DAT_1009fd10)[uVar5 * 2] * (uVar9 + uVar10) * 2 <=
                        *(uint *)(*(int *)(iVar2 + 0x1c) + 0x78f))) {
                      if (param_2 != (uint *)0x0) {
                        *param_2 = (&DAT_1009fd80)[uVar5];
                        param_2[1] = (&DAT_1009fd50)[uVar6];
                        param_2[2] = uVar10;
                        param_2[3] = uVar9;
                        param_2 = param_2 + 4;
                      }
                      iVar8 = iVar8 + 0x10;
                    }
                    uVar9 = uVar9 + 1;
                  } while (uVar9 <= (uVar10 == 2));
                }
                uVar10 = uVar10 + 1;
              } while (uVar10 < 4);
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < 9);
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0x10);
    }
  }
  return iVar8;
}

