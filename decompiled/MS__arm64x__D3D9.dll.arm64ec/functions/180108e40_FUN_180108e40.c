/*
 * FUN_180108e40 at 180108e40
 * undefined FUN_180108e40(void)
 * Address ranges: 180108e40-1801093e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180108e40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  code *extraout_x11;
  code *extraout_x11_00;
  code *extraout_x11_01;
  code *pcVar12;
  code *extraout_x11_02;
  code *extraout_x11_03;
  code *extraout_x11_04;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  ulonglong local_a8;
  uint local_a0;
  uint local_98;
  longlong local_90;
  int local_88;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  
  local_60 = param_1 + 0x4000;
  local_88 = FUN_18011ce68();
  if (-1 < local_88) {
    local_a0 = 0;
    lVar14 = *(longlong *)(*(longlong *)(param_1 + 0x3f8) + (ulonglong)(param_2 - 1) * 8);
    lVar13 = lVar14 + 0x8000;
    local_68 = lVar14 + 0xa000;
    local_a8 = *(ulonglong *)(lVar14 + 0xacf0);
    uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
    uVar9 = (uint)uVar11;
    while ((1 - (uVar9 >> 6) & 0xff) == 0) {
      local_a0 = local_a0 + 0x40;
      if (0xf < local_a0) goto LAB_180108fd4;
      local_a8 = *(ulonglong *)(lVar14 + 0xacf0 + (ulonglong)(local_a0 >> 6) * 8);
      uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
      uVar9 = (uint)uVar11;
    }
    *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) =
         *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) & ((byte)(1 << (uVar11 & 7)) ^ 0xff);
    iVar15 = (int)uVar11 + local_a0;
    if (iVar15 != -1) {
      local_80 = lVar13;
      do {
        uVar9 = local_a0;
        FUN_18010a538(param_1,iVar15,*(undefined8 *)(lVar14 + 0xab60 + (longlong)iVar15 * 8),
                      *(undefined4 *)(lVar14 + 44000 + (longlong)iVar15 * 4),
                      *(undefined4 *)(lVar14 + 0xac20 + (longlong)iVar15 * 4));
        uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        uVar10 = (uint)uVar11;
        while ((1 - (uVar10 >> 6) & 0xff) == 0) {
          uVar9 = uVar9 + 0x40;
          local_a0 = uVar9;
          lVar13 = local_80;
          if (0xf < uVar9) goto LAB_180108fd4;
          local_a8 = *(ulonglong *)(lVar14 + 0xacf0 + (ulonglong)(uVar9 >> 6) * 8);
          uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
          uVar10 = (uint)uVar11;
        }
        *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) =
             *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) & ((byte)(1 << (uVar11 & 7)) ^ 0xff);
        iVar15 = local_a0 + (int)uVar11;
        lVar13 = local_80;
      } while (iVar15 != -1);
    }
LAB_180108fd4:
    if (*(char *)(local_68 + 0xcfa) != '\0') {
      FUN_18010a780(param_1,*(undefined8 *)(lVar13 + 0x2b58));
    }
    puVar7 = __hybrid_os_arm64x_dispatch_icall;
    local_a0 = 0;
    lVar1 = lVar14 + 0xacd8;
    local_a8 = *(ulonglong *)(lVar13 + 0x2cd8);
    uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
    uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
    uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
    uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
    uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
    uVar9 = (uint)uVar11;
    while ((1 - (uVar9 >> 6) & 0xff) == 0) {
      local_a0 = local_a0 + 0x40;
      if (0xf < local_a0) {
        uVar9 = 0xffffffff;
        goto LAB_180109074;
      }
      local_a8 = *(ulonglong *)(lVar1 + (ulonglong)(local_a0 >> 6) * 8);
      uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
      uVar9 = (uint)uVar11;
    }
    *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) =
         *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) & ((byte)(1 << (uVar11 & 7)) ^ 0xff);
    uVar9 = local_a0 + (int)uVar11;
LAB_180109074:
    local_80 = lVar13;
    if (uVar9 != 0xffffffff) {
      local_98 = local_a0;
      lVar2 = param_1 + 0x1338;
      local_70 = lVar1;
      local_78 = local_a8;
      local_90 = lVar14 + 0x5310;
      local_50 = param_1 + 0xcc0;
      do {
        iVar15 = 0;
        lVar13 = *(longlong *)(local_90 + (longlong)(int)uVar9 * 8);
        local_58 = lVar13;
        local_a8 = local_78;
        local_a0 = local_98;
        local_70 = lVar1;
        if (lVar13 == 0) {
          uVar8 = (*(code *)puVar7)(0x180225000);
          (*extraout_x11_02)(uVar8,uVar9,0,0,0,0,0,0);
        }
        else if (lVar13 != *(longlong *)(lVar2 + (longlong)(int)uVar9 * 8)) {
          iVar4 = *(int *)(lVar13 + 0x20);
          if (iVar4 == 3) {
            uVar8 = (*(code *)puVar7)(0x180225000);
            pcVar12 = extraout_x11_01;
LAB_180109164:
            (*pcVar12)(uVar8,uVar9,0,*(undefined8 *)(lVar13 + 0x58),0,0,0,0);
            iVar15 = *(int *)(lVar13 + 0x74);
          }
          else if (iVar4 == 4) {
            uVar8 = (*(code *)puVar7)(0x180225000);
            (*extraout_x11_00)(uVar8,uVar9,0,*(undefined8 *)(lVar13 + 0xe0),0,0,0,0);
            iVar15 = *(int *)(lVar13 + 0xf8);
          }
          else if (iVar4 == 5) {
            uVar8 = (*(code *)puVar7)(0x180225000);
            pcVar12 = extraout_x11;
            goto LAB_180109164;
          }
        }
        lVar13 = *(longlong *)(local_90 + (longlong)(int)uVar9 * 8);
        lVar14 = *(longlong *)(lVar2 + (longlong)(int)uVar9 * 8);
        if (lVar13 != lVar14) {
          uVar10 = 1 << (ulonglong)(uVar9 & 0x1f);
          if (lVar13 != 0) {
            (*(code *)puVar7)(0x180224000);
            (*extraout_x11_03)();
            lVar13 = *(longlong *)(local_90 + (longlong)(int)uVar9 * 8);
            *(uint *)(lVar13 + 0x38) = *(uint *)(lVar13 + 0x38) | uVar10;
          }
          lVar13 = *(longlong *)(lVar2 + (longlong)(int)uVar9 * 8);
          if (lVar13 != 0) {
            *(uint *)(lVar13 + 0x38) = *(uint *)(lVar13 + 0x38) & (uVar10 ^ 0xffffffff);
            (*(code *)puVar7)(0x180224000);
            (*extraout_x11_04)();
          }
          lVar14 = *(longlong *)(local_90 + (longlong)(int)uVar9 * 8);
          *(longlong *)(lVar2 + (longlong)(int)uVar9 * 8) = lVar14;
        }
        *(uint *)(param_1 + 0xd14) =
             (uint)((lVar14 != 0) != (bool)*(char *)(local_50 + (int)uVar9)) <<
             (ulonglong)(uVar9 & 0x1f) | *(uint *)(param_1 + 0xd14);
        *(bool *)(local_50 + (int)uVar9) = lVar14 != 0;
        if ((*(longlong *)(lVar2 + (longlong)(int)uVar9 * 8) == 0) ||
           (bVar6 = true, 1 < iVar15 - 0x28U)) {
          bVar6 = false;
        }
        uVar5 = 1 << (ulonglong)(uVar9 & 0x1f);
        uVar10 = *(uint *)(local_60 + 0x27f4) & (uVar5 ^ 0xffffffff);
        if (bVar6) {
          uVar10 = uVar5 | *(uint *)(local_60 + 0x27f4);
        }
        uVar3 = *(uint *)(local_60 + 0x27f8) & (uVar5 ^ 0xffffffff);
        if (bVar6) {
          uVar3 = uVar5 | *(uint *)(local_60 + 0x27f8);
        }
        *(uint *)(local_60 + 0x27f4) = uVar10;
        *(uint *)(local_60 + 0x27f8) = uVar3;
        lVar13 = *(longlong *)(lVar2 + (longlong)(int)uVar9 * 8);
        if ((lVar13 == 0) || (*(char *)(lVar13 + 0x3e) == '\0')) {
          iVar15 = 0;
        }
        else {
          iVar15 = 1;
        }
        *(uint *)(param_1 + 0xd18) =
             iVar15 << (ulonglong)(uVar9 & 0x1f) | *(uint *)(param_1 + 0xd18) & (uVar5 ^ 0xffffffff)
        ;
        uVar11 = (local_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_78 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
        uVar9 = (uint)uVar11;
        while ((1 - (uVar9 >> 6) & 0xff) == 0) {
          local_98 = local_98 + 0x40;
          local_a0 = local_98;
          if (0xf < local_98) goto LAB_180109398;
          local_a8 = *(ulonglong *)(local_70 + (ulonglong)(local_98 >> 6) * 8);
          uVar11 = (local_a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_a8 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20);
          uVar9 = (uint)uVar11;
        }
        *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) =
             *(byte *)((longlong)&local_a8 + (uVar11 >> 3)) & ((byte)(1 << (uVar11 & 7)) ^ 0xff);
        uVar9 = local_a0 + (int)uVar11;
        local_98 = local_a0;
        if (uVar9 == 0xffffffff) break;
        local_78 = local_a8;
        local_70 = lVar1;
      } while( true );
    }
LAB_180109398:
    if ((*(char *)(local_68 + 0xcfb) != '\0') &&
       (*(int *)(local_80 + 0x2c60) != *(int *)(local_60 + 0x27f0))) {
      *(int *)(local_60 + 0x27f0) = *(int *)(local_80 + 0x2c60);
      *(undefined4 *)(local_60 + 0x27f8) = 0xffff;
      *(undefined4 *)(local_60 + 0x2804) = 0x1f;
    }
  }
  return local_88;
}

