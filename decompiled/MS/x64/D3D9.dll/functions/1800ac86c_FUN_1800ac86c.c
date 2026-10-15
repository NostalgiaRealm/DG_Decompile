/*
 * FUN_1800ac86c at 1800ac86c
 * longlong * __fastcall FUN_1800ac86c(longlong param_1, longlong * param_2, longlong param_3, byte param_4, longlong param_5, uint param_6, int param_7)
 * Address ranges: 1800ac86c-1800acb95
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_1800ac86c(longlong param_1,longlong *param_2,longlong param_3,byte param_4,longlong param_5,
             uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar1 = *(uint *)(param_1 + 8) >> (param_4 & 0x1f);
  if (*(uint *)(param_1 + 8) >> (param_4 & 0x1f) == 0) {
    uVar1 = 1;
  }
  uVar2 = *(uint *)(param_1 + 0xc) >> (param_4 & 0x1f);
  if (*(uint *)(param_1 + 0xc) >> (param_4 & 0x1f) == 0) {
    uVar2 = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x10) >> (param_4 & 0x1f);
  if (*(uint *)(param_1 + 0x10) >> (param_4 & 0x1f) == 0) {
    uVar3 = 1;
  }
  lVar4 = thunk_FUN_1800fbccc((ulonglong)(uVar3 * uVar2 * uVar1 * 4));
  if (lVar4 != 0) {
    *param_2 = lVar4;
    *(uint *)(param_2 + 1) = uVar1;
    uVar6 = *(uint *)(param_1 + 0x14);
    *(uint *)((longlong)param_2 + 0xc) = uVar2;
    *(uint *)(param_2 + 2) = uVar3;
    local_60 = 0;
    local_68 = 0;
    local_58 = 0;
    local_50 = 0;
    if (uVar6 < 0xe) {
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x14);
      local_68 = ((longlong)((int)*(char *)(param_3 + 0x59 + uVar5 * 4) << 8) << 2 | 0xb0U) +
                 param_3;
      local_60 = ((longlong)((int)*(char *)(param_3 + 0x58 + uVar5 * 4) << 8) << 2 | 0xb0U) +
                 param_3;
      local_58 = ((longlong)((int)*(char *)(param_3 + 0x5a + uVar5 * 4) << 8) << 2 | 0xb0U) +
                 param_3;
      local_50 = ((longlong)((int)*(char *)(param_3 + 0x5b + uVar5 * 4) << 8) << 2 | 0xb0U) +
                 param_3;
    }
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x14);
    if (*(int *)(&DAT_1800ff000 + uVar5 * 4) == 8) {
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          lVar8 = (ulonglong)(uVar6 * param_7) + param_5;
          if (uVar2 != 0) {
            uVar9 = uVar2;
            do {
              uVar5 = 0;
              if (uVar1 != 0) {
                do {
                  *(undefined4 *)(lVar4 + uVar5 * 4) =
                       *(undefined4 *)(local_60 + (ulonglong)*(byte *)(lVar8 + uVar5) * 4);
                  uVar7 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar7;
                } while (uVar7 < uVar1);
              }
              lVar8 = lVar8 + (ulonglong)param_6;
              lVar4 = lVar4 + (ulonglong)uVar1 * 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
    }
    else if (*(int *)(&DAT_1800ff000 + uVar5 * 4) == 0x10) {
      uVar6 = 0;
      if (uVar3 != 0) {
        do {
          lVar8 = (ulonglong)(uVar6 * param_7) + param_5;
          if (uVar2 != 0) {
            uVar9 = uVar2;
            do {
              uVar5 = 0;
              if (uVar1 != 0) {
                do {
                  uVar7 = (int)uVar5 * 2;
                  *(uint *)(lVar4 + uVar5 * 4) =
                       *(uint *)(local_68 + (ulonglong)*(byte *)(lVar8 + (ulonglong)(uVar7 + 1)) * 4
                                ) |
                       *(uint *)(local_60 + (ulonglong)*(byte *)(lVar8 + (ulonglong)uVar7) * 4);
                  uVar7 = (int)uVar5 + 1;
                  uVar5 = (ulonglong)uVar7;
                } while (uVar7 < uVar1);
              }
              lVar8 = lVar8 + (ulonglong)param_6;
              lVar4 = lVar4 + (ulonglong)uVar1 * 4;
              uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
      }
    }
    else if ((*(int *)(&DAT_1800ff000 + uVar5 * 4) == 0x20) && (uVar6 = 0, uVar3 != 0)) {
      do {
        lVar8 = (ulonglong)(uVar6 * param_7) + param_5;
        if (uVar2 != 0) {
          uVar9 = uVar2;
          do {
            uVar5 = 0;
            if (uVar1 != 0) {
              do {
                uVar7 = (int)uVar5 * 4;
                *(uint *)(lVar4 + uVar5 * 4) =
                     *(uint *)(local_50 + (ulonglong)*(byte *)(lVar8 + (ulonglong)(uVar7 + 3)) * 4)
                     | *(uint *)(local_58 + (ulonglong)*(byte *)(lVar8 + (ulonglong)(uVar7 + 2)) * 4
                                ) |
                     *(uint *)(local_68 + (ulonglong)*(byte *)(lVar8 + (ulonglong)(uVar7 + 1)) * 4)
                     | *(uint *)(local_60 + (ulonglong)*(byte *)(lVar8 + (ulonglong)uVar7) * 4);
                uVar7 = (int)uVar5 + 1;
                uVar5 = (ulonglong)uVar7;
              } while (uVar7 < uVar1);
            }
            lVar8 = lVar8 + (ulonglong)param_6;
            lVar4 = lVar4 + (ulonglong)uVar1 * 4;
            uVar9 = uVar9 - 1;
          } while (uVar9 != 0);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar3);
    }
  }
  return param_2;
}

