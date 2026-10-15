/*
 * FUN_18015b168 at 18015b168
 * undefined FUN_18015b168(void)
 * Address ranges: 18015b168-18015b4eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18015b168(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  code *extraout_x11;
  code *extraout_x11_00;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined8 uVar17;
  longlong local_a0;
  uint local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  
  lVar10 = *param_1;
  local_a0 = *(longlong *)((longlong)param_1 + 0x14);
  iVar15 = (int)param_1[1];
  lVar12 = *(longlong *)((longlong)param_1 + 0xc);
  local_80 = lVar10 + 0xf000;
  iVar2 = *(int *)((longlong)param_1 + 0x1c);
  uVar14 = *(uint *)(param_1 + 4);
  bVar5 = *(byte *)(param_1 + 5);
  uVar16 = (uint)bVar5;
  lVar11 = lVar10 + 0x8000;
  local_78 = local_a0;
  FUN_18014c730(lVar10);
  lVar9 = *(longlong *)(*(longlong *)(lVar10 + 0xf6e0) + 0x1508);
  lVar13 = *(longlong *)(lVar9 + 0xb48) + 1;
  *(longlong *)(lVar9 + 0xb48) = lVar13;
  uVar3 = *(undefined4 *)(lVar10 + 0x1028);
  uVar4 = *(undefined4 *)(lVar10 + 0x106c);
  *(longlong *)(lVar10 + 0xffd8) = lVar13;
  if (iVar15 == 6) {
    if (2 < uVar14) {
      uVar14 = uVar14 - 2;
      iVar15 = 0;
      if (uVar14 != 0) {
        local_70 = lVar10 + 0x10000;
        local_a0 = lVar10 + 0x10000;
        local_98 = (uint)bVar5;
        local_90 = *(undefined8 *)(lVar10 + 0xff28);
        local_88 = lVar11;
        while( true ) {
          iVar8 = *(int *)(lVar10 + 0x94) + *(int *)(lVar10 + 0x90);
          if (0x1000U - iVar8 < 0x10) {
            FUN_18014e9a0(lVar10,0,1,0);
            iVar8 = 0;
          }
          uVar1 = (0x1000U - iVar8) / 3;
          if (uVar14 < (0x1000U - iVar8) / 3) {
            uVar1 = uVar14;
          }
          if (local_78 == 0) {
            FUN_18014c840(lVar10,4,lVar12);
          }
          else {
            FUN_180151898(lVar10,4,local_78 + -0x30,local_90,*(undefined8 *)(local_88 + 0x7710),
                          uVar4,uVar3,0,uVar1 * 3,0,0);
          }
          *(byte *)(local_80 + 0x68f) =
               (*(uint *)(lVar12 + 0x10) & (*(uint *)(local_70 + 0x180) ^ 0xffffffff)) != 0 |
               *(byte *)(local_80 + 0x68f);
          *(undefined4 *)(local_70 + 0x180) = *(undefined4 *)(lVar12 + 0x10);
          *(undefined1 *)(local_a0 + 0x184) = 1;
          uVar16 = 0;
          if (uVar1 != 0) {
            do {
              **(int **)(lVar10 + 0x88) = uVar16 + iVar2 + 1 + iVar15;
              iVar8 = uVar16 + iVar2 + 2 + iVar15;
              uVar16 = uVar16 + 1;
              *(int *)(*(longlong *)(lVar10 + 0x88) + 4) = iVar8;
              *(int *)(*(longlong *)(lVar10 + 0x88) + 8) = iVar2;
              *(longlong *)(lVar10 + 0x88) = *(longlong *)(lVar10 + 0x88) + 0xc;
            } while (uVar16 < uVar1);
          }
          uVar14 = uVar14 - uVar1;
          *(uint *)(lVar10 + 0x94) = *(int *)(lVar10 + 0x94) + uVar1 * 3;
          lVar11 = local_88;
          uVar16 = local_98;
          if (uVar14 == 0) break;
          iVar15 = uVar1 + iVar15;
          FUN_18014ef50(lVar10,lVar12);
        }
      }
      FUN_18014e9a0(lVar10,0,0,0);
    }
  }
  else {
    if (local_a0 == 0) {
      FUN_18014c840(lVar10,iVar15,lVar12);
    }
    else {
      FUN_180151898(lVar10,iVar15,local_a0 + -0x30,*(undefined8 *)(lVar10 + 0xff28),
                    *(undefined8 *)(lVar10 + 0xff30),uVar4,uVar3,0,0,0,
                    *(undefined1 *)(local_a0 + 0x1c));
    }
    *(byte *)(local_80 + 0x68f) =
         (*(uint *)(lVar12 + 0x10) & (*(uint *)(lVar10 + 0x10180) ^ 0xffffffff)) != 0 |
         *(byte *)(local_80 + 0x68f);
    *(undefined4 *)(lVar10 + 0x10180) = *(undefined4 *)(lVar12 + 0x10);
    *(undefined1 *)(lVar10 + 0x10184) = 0;
    uVar7 = FUN_180149120(lVar10);
    if ((uVar7 & 1) != 0) {
      FUN_180209ca8(*(undefined8 *)(*(longlong *)(lVar10 + 0xf6e0) + 0x1508),uVar14,1,iVar2,0);
    }
    FUN_18014c6f0(lVar10);
  }
  if (uVar16 != 0) {
    uVar17 = *(undefined8 *)(lVar11 + 0x7fd8);
    lVar13 = *(longlong *)(*(longlong *)(lVar11 + 0x76e0) + 0x1508);
    FUN_180206f40(lVar13);
    FUN_180206ff8(lVar13);
    puVar6 = __hybrid_os_arm64x_dispatch_icall;
    uVar14 = *(uint *)(lVar13 + 0xb50);
    (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
    local_58 = (*extraout_x11)();
    uVar7 = (ulonglong)uVar14 * 8;
    local_50 = (undefined4)uVar17;
    local_68 = local_58 + (uVar7 | 4);
    local_60 = (undefined4)((ulonglong)uVar17 >> 0x20);
    local_58 = local_58 + uVar7;
    local_a0 = 0x200000002;
    uVar17 = (*(code *)puVar6)(0x180224000);
    (*extraout_x11_00)(uVar17,2,&local_68,&local_a0);
  }
  return;
}

