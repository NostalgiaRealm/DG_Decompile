/*
 * FUN_180152ad8 at 180152ad8
 * undefined FUN_180152ad8(void)
 * Address ranges: 180152ad8-180152f93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180152ad8(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined4 param_6,uint param_7,uint param_8,char param_9,byte param_10,
                  char param_11)

{
  ulonglong uVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar12;
  longlong lVar13;
  undefined8 uVar14;
  int iVar15;
  uint local_9c;
  uint local_98;
  int local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_50;
  undefined4 local_48;
  
  local_80 = param_1 + 0xf000;
  lVar13 = param_1 + 0x8000;
  local_90 = param_5;
  FUN_18014c730();
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
  lVar9 = *(longlong *)(lVar10 + 0xb48) + 1;
  *(longlong *)(lVar10 + 0xb48) = lVar9;
  *(longlong *)(param_1 + 0xffd8) = lVar9;
  if ((param_2 == 6) && (*(char *)(*(longlong *)(param_1 + 0xf6e8) + 0x1b) == '\0')) {
    if (2 < param_8) {
      param_8 = param_8 - 2;
      if (param_8 != 0) {
        local_70 = param_1 + 0x10000;
        local_68 = param_1 + 0x10000;
        iVar15 = 0;
        local_98 = (uint)param_10;
        local_88 = lVar13;
        local_78 = param_4;
        while( true ) {
          iVar6 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x90);
          if (0x1000U - iVar6 < 0x10) {
            FUN_18014e9a0(param_1,0,1,0);
            iVar6 = 0;
          }
          uVar8 = (0x1000U - iVar6) / 3;
          if (param_8 < (0x1000U - iVar6) / 3) {
            uVar8 = param_8;
          }
          if (local_78 == 0) {
            FUN_18014c840(param_1,4,param_3);
          }
          else {
            FUN_180151898(param_1,4,local_78 + -0x30,*(undefined8 *)(local_88 + 0x7f28),
                          *(undefined8 *)(local_88 + 0x7710),*(undefined4 *)(param_1 + 0x106c),
                          *(undefined4 *)(param_1 + 0x1028),0,uVar8 * 3,0,0);
          }
          *(byte *)(local_80 + 0x68f) =
               (*(uint *)(param_3 + 0x10) & (*(uint *)(local_70 + 0x180) ^ 0xffffffff)) != 0 |
               *(byte *)(local_80 + 0x68f);
          *(undefined4 *)(local_70 + 0x180) = *(undefined4 *)(param_3 + 0x10);
          *(undefined1 *)(local_68 + 0x184) = 1;
          if (uVar8 != 0) {
            puVar11 = *(uint **)(param_1 + 0x88);
            uVar7 = 0;
            do {
              uVar4 = uVar7 + iVar15 + param_7 + 1;
              if (param_9 == '\0') {
                uVar4 = (uint)*(ushort *)(local_90 + (ulonglong)uVar4 * 2);
              }
              else {
                uVar4 = *(uint *)(local_90 + (ulonglong)uVar4 * 4);
              }
              uVar12 = uVar7 + iVar15 + param_7 + 2;
              if (param_9 == '\0') {
                uVar5 = (uint)*(ushort *)(local_90 + (ulonglong)param_7 * 2);
                uVar12 = (uint)*(ushort *)(local_90 + (ulonglong)uVar12 * 2);
              }
              else {
                uVar5 = *(uint *)(local_90 + (ulonglong)param_7 * 4);
                uVar12 = *(uint *)(local_90 + (ulonglong)uVar12 * 4);
              }
              *puVar11 = uVar4;
              uVar7 = uVar7 + 1;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 4) = uVar12;
              *(uint *)(*(longlong *)(param_1 + 0x88) + 8) = uVar5;
              puVar11 = (uint *)(*(longlong *)(param_1 + 0x88) + 0xc);
              *(uint **)(param_1 + 0x88) = puVar11;
            } while (uVar7 < uVar8);
          }
          param_8 = param_8 - uVar8;
          *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + uVar8 * 3;
          if (param_8 == 0) break;
          local_9c = *(uint *)(param_3 + 0x10);
          iVar15 = uVar8 + iVar15;
          uVar8 = (local_9c & 0xaaaaaaaa) >> 1 | (local_9c & 0x55555555) << 1;
          uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
          lVar9 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
          uVar8 = (uint)lVar9;
          if ((1 - (uVar8 >> 5) & 0xff) != 0) {
            local_94 = iVar15;
            *(byte *)((longlong)&local_9c + (longlong)((int)uVar8 >> 3)) =
                 *(byte *)((longlong)&local_9c + (longlong)((int)uVar8 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
            while( true ) {
              lVar9 = *(longlong *)(param_1 + 0xff38 + lVar9 * 8);
              if (lVar9 != 0) {
                FUN_1801042e0(lVar9 + 0x38);
              }
              uVar8 = (local_9c & 0xaaaaaaaa) >> 1 | (local_9c & 0x55555555) << 1;
              uVar8 = (uVar8 & 0xcccccccc) >> 2 | (uVar8 & 0x33333333) << 2;
              uVar8 = (uVar8 & 0xf0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f) << 4;
              uVar8 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
              lVar9 = LZCOUNT(uVar8 >> 0x10 | uVar8 << 0x10);
              uVar8 = (uint)lVar9;
              iVar15 = local_94;
              if ((1 - (uVar8 >> 5) & 0xff) == 0) break;
              *(byte *)((longlong)&local_9c + (longlong)((int)uVar8 >> 3)) =
                   *(byte *)((longlong)&local_9c + (longlong)((int)uVar8 >> 3)) &
                   ((byte)(1 << (ulonglong)(uVar8 & 7)) ^ 0xff);
            }
          }
          *(undefined4 *)(param_1 + 0x98) = param_6;
        }
        *(undefined4 *)(param_1 + 0x98) = param_6;
        lVar13 = local_88;
      }
      FUN_18014e9a0(param_1,0,0,0);
      *(undefined4 *)(param_1 + 0x98) = 0;
    }
  }
  else if (*(longlong *)(param_1 + 0xff30) != 0) {
    if (param_4 == 0) {
      FUN_18014c840(param_1,param_2,param_3);
      iVar15 = 1;
    }
    else {
      FUN_180151898(param_1,param_2,param_4 + -0x30,*(undefined8 *)(param_1 + 0xff28),
                    *(longlong *)(param_1 + 0xff30),*(undefined4 *)(param_1 + 0x106c),
                    *(undefined4 *)(param_1 + 0x1028),0,0,0,*(undefined1 *)(param_4 + 0x1c));
      iVar15 = *(int *)(param_4 + 0x2c);
      if (iVar15 == 0) {
        iVar15 = 1;
      }
    }
    *(byte *)(local_80 + 0x68f) =
         (*(uint *)(param_3 + 0x10) & (*(uint *)(param_1 + 0x10180) ^ 0xffffffff)) != 0 |
         *(byte *)(local_80 + 0x68f);
    *(undefined4 *)(param_1 + 0x10180) = *(undefined4 *)(param_3 + 0x10);
    *(undefined1 *)(param_1 + 0x10184) = 1;
    cVar3 = FUN_180149120(param_1);
    if (cVar3 != '\0' && param_7 != 0xffffffff) {
      FUN_180209d30(*(undefined8 *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508),param_8,iVar15,
                    (ulonglong)param_7,param_6,0);
    }
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xf6e0) + 0x1508);
    iVar15 = *(int *)(lVar9 + 0x684) + -1;
    *(int *)(lVar9 + 0x684) = iVar15;
    if ((iVar15 == 0) && (*(int *)(lVar9 + 0x680) <= *(int *)(lVar9 + 0x678))) {
      FUN_180207560(lVar9 + 8,0);
    }
  }
  if (param_11 != '\0') {
    uVar14 = *(undefined8 *)(lVar13 + 0x7fd8);
    lVar9 = *(longlong *)(*(longlong *)(lVar13 + 0x76e0) + 0x1508);
    FUN_180206f40(lVar9);
    FUN_180206ff8(lVar9);
    puVar2 = __hybrid_os_arm64x_dispatch_icall;
    uVar8 = *(uint *)(lVar9 + 0xb50);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_50 = (*extraout_x11)();
    uVar1 = (ulonglong)uVar8 * 8;
    local_48 = (undefined4)uVar14;
    local_60 = local_50 + (uVar1 | 4);
    local_58 = (undefined4)((ulonglong)uVar14 >> 0x20);
    local_50 = local_50 + uVar1;
    local_90 = 0x200000002;
    uVar14 = (*(code *)puVar2)(0x180224000);
    (*extraout_x11_00)(uVar14,2,&local_60,&local_90);
  }
  return;
}

