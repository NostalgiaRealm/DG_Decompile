/*
 * FUN_180048e10 at 180048e10
 * undefined FUN_180048e10(void)
 * Address ranges: 180048e10-18004918b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048e10(longlong param_1,longlong param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint local_170;
  int local_16c;
  longlong local_168;
  undefined4 local_160 [68];
  
  local_170 = *(uint *)(param_2 + 0x10);
  uVar14 = 0;
  local_16c = 0;
  uVar10 = (local_170 & 0xaaaaaaaa) >> 1 | (local_170 & 0x55555555) << 1;
  uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
  uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
  uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
  lVar11 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
  uVar10 = (uint)lVar11;
  if ((1 - (uVar10 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)&local_170 + (longlong)((int)uVar10 >> 3)) =
         *(byte *)((longlong)&local_170 + (longlong)((int)uVar10 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
    puVar1 = (uint *)(param_1 + 0x100e8);
    uVar15 = uVar14;
    while( true ) {
      lVar9 = *(longlong *)(param_1 + 0xffe0 + lVar11 * 8);
      lVar12 = 0;
      uVar10 = (uint)lVar11;
      iVar2 = (int)uVar10 >> 3;
      if (lVar9 != 0) {
        lVar12 = *(longlong *)
                  (*(longlong *)(lVar9 + 0x40) + (ulonglong)*(uint *)(lVar9 + 0x54) * 0x10);
        FUN_1800015a0(lVar12 + 0x38);
        lVar9 = *(longlong *)(param_1 + 0xffe0 + lVar11 * 8);
        if (*(int *)(lVar9 + 0x30) == 1) {
          lVar9 = lVar9 + 0x34;
          bVar13 = *(byte *)(lVar9 + iVar2);
          *(byte *)(lVar9 + iVar2) = bVar13 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
          uVar6 = (**(code **)(*(longlong *)(lVar12 + 0x40) + 0x10))(lVar12 + 0x40,lVar11);
          *puVar1 = (uVar6 & 0xff | (uint)((bVar13 >> (ulonglong)(uVar10 & 7) & 1) != 0)) <<
                    (ulonglong)(uVar10 & 0x1f) | *puVar1;
        }
      }
      bVar13 = *(byte *)((longlong)puVar1 + (longlong)iVar2);
      *(byte *)((longlong)puVar1 + (longlong)iVar2) =
           bVar13 & ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      uVar14 = uVar15;
      if ((bVar13 >> (ulonglong)(uVar10 & 7) & 1) != 0) {
        (&local_168)[uVar15 * 2] = lVar12;
        uVar14 = (ulonglong)((int)uVar15 + 1);
        local_160[uVar15 * 4] = *(undefined4 *)(param_1 + 0x10068 + lVar11 * 4);
        local_160[uVar15 * 4 + 1] = *(undefined4 *)(param_1 + 0x100a8 + lVar11 * 4);
        *(byte *)((longlong)&local_16c + (longlong)iVar2) =
             *(byte *)((longlong)&local_16c + (longlong)iVar2) |
             (byte)(1 << (ulonglong)(uVar10 & 7));
      }
      uVar10 = (local_170 & 0xaaaaaaaa) >> 1 | (local_170 & 0x55555555) << 1;
      uVar10 = (uVar10 & 0xcccccccc) >> 2 | (uVar10 & 0x33333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      lVar11 = LZCOUNT(uVar10 >> 0x10 | uVar10 << 0x10);
      uVar10 = (uint)lVar11;
      if ((1 - (uVar10 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)&local_170 + (longlong)((int)uVar10 >> 3)) =
           *(byte *)((longlong)&local_170 + (longlong)((int)uVar10 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar10 & 7)) ^ 0xff);
      uVar15 = uVar14;
    }
  }
  iVar2 = local_16c;
  bVar13 = 0;
  uVar15 = uVar14;
  if (param_3 != '\0') {
    lVar9 = 0;
    bVar13 = *(byte *)(param_1 + 0x10104);
    lVar11 = *(longlong *)(param_1 + 0x10060);
    if (lVar11 != 0) {
      lVar9 = *(longlong *)
               (*(longlong *)(lVar11 + 0x40) + (ulonglong)*(uint *)(lVar11 + 0x54) * 0x10);
      FUN_1800015a0(lVar9 + 0x38);
      lVar11 = *(longlong *)(param_1 + 0x10060);
      if (*(int *)(lVar11 + 0x30) == 1) {
        bVar3 = *(byte *)(lVar11 + 0x34);
        *(byte *)(lVar11 + 0x34) = bVar3 & 0xfe;
        bVar5 = (**(code **)(*(longlong *)(lVar9 + 0x40) + 0x10))(lVar9 + 0x40,0);
        bVar13 = bVar5 | (bVar3 & 1) != 0 | bVar13;
      }
    }
    if (bVar13 != 0) {
      *(undefined1 *)(param_1 + 0x10104) = 0;
      (&local_168)[uVar14 * 2] = lVar9;
      uVar15 = (ulonglong)((int)uVar14 + 1);
      local_160[uVar14 * 4] = *(undefined4 *)(param_1 + 0x100ec);
    }
  }
  if ((iVar2 == 0) && (bVar13 == 0)) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0xf6e0);
  FUN_180101630(lVar11 + 0x12c0);
  if (*(char *)(lVar11 + 0x14c4) != '\0') {
    uVar10 = (int)uVar15 * 0x10;
    puVar7 = (undefined8 *)FUN_180101500(lVar11 + 0x12c0,(ulonglong)(uVar10 + 0x18));
    pcVar4 = __imp_KERNEL32_dll_Sleep;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_1800015a0(lVar11 + 0x14c0);
      puVar7[1] = (ulonglong)(uVar10 + 0x18);
      puVar7[3] = param_1;
      uVar14 = (longlong)puVar7 + 0x2fU & 0xfffffffffffffff8;
      *(int *)(puVar7 + 4) = iVar2;
      *(byte *)((longlong)puVar7 + 0x24) = bVar13;
      puVar7[2] = uVar14;
      thunk_FUN_180001218(uVar14,&local_168,uVar10);
      *(undefined8 *)(uVar14 + uVar10) = 0;
      *puVar7 = FUN_180049190;
      *(undefined8 **)(lVar11 + (ulonglong)*(uint *)(lVar11 + 0x14bc) * 0x28 + 0x1350) =
           (undefined8 *)(uVar14 + uVar10);
      pcVar4 = __imp_KERNEL32_dll_SetEvent;
      if (*(char *)(lVar11 + 0x14c5) != '\0') {
        *(undefined4 *)(lVar11 + 0x12c0) = 0;
        (*pcVar4)(*(undefined8 *)(lVar11 + 0x1340));
        return;
      }
      goto LAB_18004916c;
    }
    *(undefined4 *)(lVar11 + 0x12c0) = 0;
    (*pcVar4)(100);
    FUN_180101630(lVar11 + 0x12c0);
  }
  plVar8 = *(longlong **)(lVar11 + 0x14a0);
  *plVar8 = (longlong)&local_168;
  plVar8[1] = param_1;
  *(int *)(plVar8 + 2) = iVar2;
  *(byte *)((longlong)plVar8 + 0x14) = bVar13;
  FUN_180049190();
LAB_18004916c:
  *(undefined4 *)(lVar11 + 0x12c0) = 0;
  return;
}

