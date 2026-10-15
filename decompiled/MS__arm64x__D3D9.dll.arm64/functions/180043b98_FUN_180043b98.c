/*
 * FUN_180043b98 at 180043b98
 * undefined FUN_180043b98(void)
 * Address ranges: 180043b98-18004400b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180043b98(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined4 param_6,uint param_7,uint param_8,char param_9,byte param_10,
                  char param_11)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  uint local_a0;
  uint local_9c;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  undefined4 local_58;
  
  lVar12 = param_1 + 0x8000;
  FUN_18003dea0();
  lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  lVar7 = *(longlong *)(lVar8 + 0xb48) + 1;
  *(longlong *)(lVar8 + 0xb48) = lVar7;
  *(longlong *)(param_1 + 0xffd8) = lVar7;
  if ((param_2 == 6) && (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) {
    if (2 < param_8) {
      param_8 = param_8 - 2;
      iVar14 = 0;
      if (param_8 != 0) {
        local_80 = param_1 + 0x10000;
        local_98 = param_1 + 0x10000;
        local_9c = (uint)param_10;
        local_90 = lVar12;
        local_88 = param_4;
        local_78 = param_1 + 0xf000;
        while( true ) {
          iVar4 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar4 < 0x10) {
            FUN_18003feb0(param_1,0,1,0);
            iVar4 = 0;
          }
          uVar6 = (0x1000U - iVar4) / 3;
          if (param_8 < (0x1000U - iVar4) / 3) {
            uVar6 = param_8;
          }
          if (local_88 == 0) {
            FUN_18003df60(param_1,4,param_3);
          }
          else {
            FUN_180042a10(param_1,4,local_88 + -0x30,*(undefined8 *)(local_90 + 0x7f28),
                          *(undefined8 *)(local_90 + 0x7710),*(undefined4 *)(param_1 + 0x106c),
                          *(undefined4 *)(param_1 + 0x1028),0,uVar6 * 3,0,0);
          }
          *(byte *)(local_78 + 0x68f) =
               (*(uint *)(param_3 + 0x10) & (*(uint *)(local_80 + 0x180) ^ 0xffffffff)) != 0 |
               *(byte *)(local_78 + 0x68f);
          *(undefined4 *)(local_80 + 0x180) = *(undefined4 *)(param_3 + 0x10);
          *(undefined1 *)(local_98 + 0x184) = 1;
          if (uVar6 != 0) {
            puVar9 = *(uint **)(param_1 + 0x88);
            uVar5 = 0;
            do {
              uVar3 = uVar5 + iVar14 + param_7 + 1;
              if (param_9 == '\0') {
                uVar3 = (uint)*(ushort *)(param_5 + (ulonglong)uVar3 * 2);
              }
              else {
                uVar3 = *(uint *)(param_5 + (ulonglong)uVar3 * 4);
              }
              uVar10 = uVar5 + iVar14 + param_7 + 2;
              if (param_9 == '\0') {
                uVar11 = (uint)*(ushort *)(param_5 + (ulonglong)param_7 * 2);
                uVar10 = (uint)*(ushort *)(param_5 + (ulonglong)uVar10 * 2);
              }
              else {
                uVar11 = *(uint *)(param_5 + (ulonglong)param_7 * 4);
                uVar10 = *(uint *)(param_5 + (ulonglong)uVar10 * 4);
              }
              *puVar9 = uVar3;
              uVar5 = uVar5 + 1;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar10;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar11;
              puVar9 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
              *(uint **)(param_1 + 0x88) = puVar9;
            } while (uVar5 < uVar6);
          }
          param_8 = param_8 - uVar6;
          *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar6 * 3;
          if (param_8 == 0) break;
          local_a0 = *(uint *)(param_3 + 0x10);
          iVar14 = uVar6 + iVar14;
          uVar6 = (local_a0 & 0xaaaaaaaa) >> 1 | (local_a0 & 0x55555555) << 1;
          uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
          uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
          uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
          lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
          uVar6 = (uint)lVar7;
          if ((1 - (uVar6 >> 5) & 0xff) != 0) {
            *(byte *)((longlong)&local_a0 + (longlong)((int)uVar6 >> 3)) =
                 *(byte *)((longlong)&local_a0 + (longlong)((int)uVar6 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
            while( true ) {
              lVar7 = *(longlong *)(param_1 + 0xff38 + lVar7 * 8);
              if (lVar7 != 0) {
                FUN_1800015a0(lVar7 + 0x38);
              }
              uVar6 = (local_a0 & 0xaaaaaaaa) >> 1 | (local_a0 & 0x55555555) << 1;
              uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
              uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
              uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
              lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
              uVar6 = (uint)lVar7;
              if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
              *(byte *)((longlong)&local_a0 + (longlong)((int)uVar6 >> 3)) =
                   *(byte *)((longlong)&local_a0 + (longlong)((int)uVar6 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
            }
          }
          *(undefined4 *)(param_1 + 0x98) = param_6;
        }
        *(undefined4 *)(param_1 + 0x98) = param_6;
        lVar12 = local_90;
      }
      FUN_18003feb0(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xff30) != 0) {
    if (param_4 == 0) {
      FUN_18003df60(param_1,param_2,param_3);
      iVar14 = 1;
    }
    else {
      FUN_180042a10(param_1,param_2,param_4 + -0x30,*(undefined8 *)(param_1 + 0xff28),
                    *(longlong *)(param_1 + 0xff30),*(undefined4 *)(param_1 + 0x106c),
                    *(undefined4 *)(param_1 + 0x1028),0,0,0,*(undefined1 *)(param_4 + 0x1c));
      iVar14 = *(int *)(param_4 + 0x2c);
      if (iVar14 == 0) {
        iVar14 = 1;
      }
    }
    *(byte *)(param_1 + 0xf68f) =
         (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x10180) ^ 0xffffffff)) != 0 |
         *(byte *)(param_1 + 0xf68f);
    *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0x10184) = 1;
    cVar2 = FUN_18003ab70(param_1);
    if (cVar2 != '\0' && param_7 != 0xffffffff) {
      FUN_1800ea6e0(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),param_8,iVar14,
                    (ulonglong)param_7,param_6,0);
    }
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    iVar14 = *(int *)(lVar7 + 0x684) + -1;
    *(int *)(lVar7 + 0x684) = iVar14;
    if ((iVar14 == 0) && (*(int *)(lVar7 + 0x680) <= *(int *)(lVar7 + 0x678))) {
      FUN_1800e8548(lVar7 + 8,0);
    }
  }
  if (param_11 != '\0') {
    uVar13 = *(undefined8 *)(lVar12 + 0x7fd8);
    lVar7 = *(longlong *)(*(longlong *)(lVar12 + 0x76e0) + 0x1508);
    FUN_1800e8038(lVar7);
    FUN_1800e80d8(lVar7);
    uVar6 = *(uint *)(lVar7 + 0xb50);
    local_60 = (**(code **)(**(longlong **)(*(longlong *)(lVar7 + 0xb40) + 0x10) + 0x58))();
    uVar1 = (ulonglong)uVar6 * 8;
    local_58 = (undefined4)uVar13;
    local_70 = local_60 + (uVar1 | 4);
    local_68 = (undefined4)((ulonglong)uVar13 >> 0x20);
    local_60 = local_60 + uVar1;
    local_98 = 0x200000002;
    (**(code **)(**(longlong **)(lVar7 + 0x688) + 0x210))
              (*(longlong **)(lVar7 + 0x688),2,&local_70,&local_98);
  }
  return;
}

