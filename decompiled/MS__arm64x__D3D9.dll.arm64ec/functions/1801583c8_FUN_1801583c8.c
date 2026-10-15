/*
 * FUN_1801583c8 at 1801583c8
 * undefined FUN_1801583c8(void)
 * Address ranges: 1801583c8-1801586ff;180158754-1801587a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1801583c8(longlong param_1,longlong param_2,byte param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  code *extraout_x11;
  code *extraout_x11_00;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  code *pcVar16;
  uint local_170 [2];
  code *local_168;
  int local_160;
  uint local_15c;
  longlong local_158;
  longlong local_150;
  undefined4 local_148 [66];
  
  local_170[0] = *(uint *)(param_2 + 0x10);
  local_160 = 0;
  uVar14 = 0;
  uVar9 = (local_170[0] & 0xaaaaaaaa) >> 1 | (local_170[0] & 0x55555555) << 1;
  uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
  uVar6 = (uint)lVar10;
  pcVar16 = (code *)__hybrid_os_arm64x_dispatch_icall;
  uVar9 = (uint)param_3;
  if ((1 - (uVar6 >> 5) & 0xff) != 0) {
    local_158 = param_1;
    local_168 = (code *)__hybrid_os_arm64x_dispatch_icall;
    local_15c = (uint)param_3;
    *(byte *)((longlong)local_170 + (longlong)((int)uVar6 >> 3)) =
         *(byte *)((longlong)local_170 + (longlong)((int)uVar6 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    puVar1 = (uint *)(param_1 + 0x100e8);
    lVar11 = param_1 + 0xffe0;
    uVar15 = uVar14;
    while( true ) {
      lVar8 = *(longlong *)(lVar11 + lVar10 * 8);
      lVar13 = 0;
      uVar9 = (uint)lVar10;
      iVar2 = (int)uVar9 >> 3;
      if (lVar8 != 0) {
        lVar13 = *(longlong *)
                  (*(longlong *)(lVar8 + 0x40) + (ulonglong)*(uint *)(lVar8 + 0x54) * 0x10);
        FUN_1801042e0(lVar13 + 0x38);
        lVar8 = *(longlong *)(lVar11 + lVar10 * 8);
        if (*(int *)(lVar8 + 0x30) == 1) {
          lVar8 = lVar8 + 0x34;
          bVar12 = *(byte *)(lVar8 + iVar2);
          *(byte *)(lVar8 + iVar2) = bVar12 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
          (*local_168)();
          uVar6 = (*extraout_x11)(lVar13 + 0x40,lVar10);
          *puVar1 = (uVar6 & 0xff | (uint)((bVar12 >> (ulonglong)(uVar9 & 7) & 1) != 0)) <<
                    (ulonglong)(uVar9 & 0x1f) | *puVar1;
        }
      }
      bVar12 = *(byte *)((longlong)puVar1 + (longlong)iVar2);
      *(byte *)((longlong)puVar1 + (longlong)iVar2) =
           bVar12 & ((byte)(1 << (ulonglong)(uVar9 & 7)) ^ 0xff);
      uVar14 = uVar15;
      if ((bVar12 >> (ulonglong)(uVar9 & 7) & 1) != 0) {
        (&local_150)[uVar15 * 2] = lVar13;
        uVar14 = (ulonglong)((int)uVar15 + 1);
        local_148[uVar15 * 4] = *(undefined4 *)(local_158 + 0x10068 + lVar10 * 4);
        local_148[uVar15 * 4 + 1] = *(undefined4 *)(local_158 + 0x100a8 + lVar10 * 4);
        *(byte *)((longlong)&local_160 + (longlong)iVar2) =
             *(byte *)((longlong)&local_160 + (longlong)iVar2) | (byte)(1 << (ulonglong)(uVar9 & 7))
        ;
      }
      uVar9 = (local_170[0] & 0xaaaaaaaa) >> 1 | (local_170[0] & 0x55555555) << 1;
      uVar9 = (uVar9 & 0xcccccccc) >> 2 | (uVar9 & 0x33333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
      lVar10 = LZCOUNT(uVar9 >> 0x10 | uVar9 << 0x10);
      uVar6 = (uint)lVar10;
      param_1 = local_158;
      pcVar16 = local_168;
      uVar9 = local_15c;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_170 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)local_170 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      uVar15 = uVar14;
    }
  }
  iVar2 = local_160;
  bVar12 = 0;
  uVar15 = uVar14;
  if (uVar9 != 0) {
    local_168 = (code *)(param_1 + 0x10000);
    lVar11 = 0;
    bVar12 = *(byte *)(param_1 + 0x10104);
    lVar10 = *(longlong *)(param_1 + 0x10060);
    if (lVar10 != 0) {
      lVar11 = *(longlong *)
                (*(longlong *)(lVar10 + 0x40) + (ulonglong)*(uint *)(lVar10 + 0x54) * 0x10);
      FUN_1801042e0(lVar11 + 0x38);
      lVar10 = *(longlong *)(param_1 + 0x10060);
      if (*(int *)(lVar10 + 0x30) == 1) {
        bVar3 = *(byte *)(lVar10 + 0x34);
        *(byte *)(lVar10 + 0x34) = bVar3 & 0xfe;
        (*pcVar16)(0x180224000);
        bVar5 = (*extraout_x11_00)(lVar11 + 0x40,0);
        bVar12 = bVar5 | (bVar3 & 1) != 0 | bVar12;
      }
    }
    if (bVar12 != 0) {
      (&local_150)[uVar14 * 2] = lVar11;
      uVar15 = (ulonglong)((int)uVar14 + 1);
      local_148[uVar14 * 4] = *(undefined4 *)(param_1 + 0x100ec);
      local_168[0x104] = (code)0x0;
    }
  }
  if ((iVar2 != 0) || (bVar12 != 0)) {
    lVar10 = *(longlong *)(param_1 + 0xf6e0);
    FUN_180221850(lVar10 + 0x12c0);
    if (*(char *)(lVar10 + 0x14c4) != '\0') {
      iVar4 = (int)uVar15 * 0x10;
      local_168 = (code *)CONCAT44(local_168._4_4_,iVar4 + 0x18);
      lVar11 = FUN_1802218b0(lVar10 + 0x12c0);
      if (lVar11 != 0) {
        FUN_1801042e0(lVar10 + 0x14c0);
        *(ulonglong *)(lVar11 + 8) = (ulonglong)local_168 & 0xffffffff;
        *(longlong *)(lVar11 + 0x18) = param_1;
        *(int *)(lVar11 + 0x20) = iVar2;
        *(byte *)(lVar11 + 0x24) = bVar12;
        uVar14 = lVar11 + 0x2fU & 0xfffffffffffffff8;
        *(ulonglong *)(lVar11 + 0x10) = uVar14;
                    /* WARNING: Subroutine does not return */
        thunk_FUN_180104c48(uVar14,&local_150,iVar4);
      }
      FUN_180221bb0(lVar10 + 0x12c0);
      thunk_FUN_1802237c0(100);
      FUN_180221850(lVar10 + 0x12c0);
    }
    plVar7 = *(longlong **)(lVar10 + 0x14a0);
    *plVar7 = (longlong)&local_150;
    plVar7[1] = param_1;
    *(int *)(plVar7 + 2) = iVar2;
    *(byte *)((longlong)plVar7 + 0x14) = bVar12;
    FUN_1801587a8();
    FUN_180221bb0(lVar10 + 0x12c0);
  }
  return;
}

