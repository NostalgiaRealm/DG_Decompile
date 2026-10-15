/*
 * FUN_1800cb480 at 1800cb480
 * undefined FUN_1800cb480(void)
 * Address ranges: 1800cb480-1800cb6ff
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800cb480(longlong param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  uint local_60 [4];
  
  uVar9 = 0x8876086c;
  if (param_2 < *(ushort *)(param_1 + -0xdc)) {
    puVar1 = (uint *)&DAT_00000e78;
    if (*(longlong *)(param_1 + -0x100) != 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + -0x100) + -0x59c0);
    }
    if (((*puVar1 >> 2 & 1) == 0) && (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar3 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar3 = true;
      iVar4 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar4 == 0) {
        FUN_180003398();
      }
    }
    lVar8 = *(longlong *)(param_1 + (ulonglong)param_2 * 8 + -0xd8);
    if ((*(int *)(lVar8 + 0xa4) != 3) &&
       ((lVar10 = *(longlong *)(lVar8 + 0x80), *(char *)(lVar10 + 0x6819) == '\0' ||
        (*(int *)(lVar8 + 0xa4) != 0)))) {
      if (*(longlong *)(lVar8 + 0x28) != 0) {
        *(uint *)(lVar8 + 0x48) = *(uint *)(lVar8 + 0x48) | 1;
      }
      lVar11 = *(longlong *)(lVar8 + 0x88);
      uVar2 = *(uint *)(lVar11 + 0x38);
      *(undefined1 *)(lVar11 + 0x3e) = 1;
      uVar6 = uVar2 & 0xffff;
      if (uVar6 != 0) {
        uVar5 = (uVar2 & 0xaaaa) >> 1 | (uVar2 & 0x5555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        local_60[0] = uVar6;
        lVar7 = LZCOUNT((uVar5 >> 8 | (uVar5 & 0xff00ff) << 8) << 0x10);
        uVar5 = (uint)lVar7;
        if ((1 - (uVar5 >> 5) & 0xff) != 0) {
          *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) =
               *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          while( true ) {
            (**(code **)(**(longlong **)(lVar10 + 0x28) + 0xd8))
                      (*(longlong **)(lVar10 + 0x28),lVar7,0,*(undefined8 *)(lVar11 + 0xe0),0,0,0,0)
            ;
            uVar5 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            lVar7 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
            uVar5 = (uint)lVar7;
            if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) =
                 *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          }
        }
        *(uint *)(lVar10 + 0xd18) = *(uint *)(lVar10 + 0xd18) | uVar6;
      }
      uVar2 = uVar2 >> 0x10;
      if (uVar2 != 0) {
        uVar6 = (uVar2 & 0xaaaaaaaa) >> 1 | (uVar2 & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        local_60[0] = uVar2;
        lVar7 = LZCOUNT((uVar6 >> 8 | (uVar6 & 0xff00ff) << 8) << 0x10);
        uVar6 = (uint)lVar7;
        if ((1 - (uVar6 >> 5) & 0xff) != 0) {
          *(byte *)((longlong)local_60 + (longlong)((int)uVar6 >> 3)) =
               *(byte *)((longlong)local_60 + (longlong)((int)uVar6 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
          while( true ) {
            (**(code **)(**(longlong **)(lVar10 + 0x28) + 0x1a8))
                      (*(longlong **)(lVar10 + 0x28),lVar7,0,*(undefined8 *)(lVar11 + 0xe0),0);
            uVar6 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
            uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
            uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
            uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
            lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
            uVar6 = (uint)lVar7;
            if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)local_60 + (longlong)((int)uVar6 >> 3)) =
                 *(byte *)((longlong)local_60 + (longlong)((int)uVar6 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
          }
        }
        *(uint *)(&DAT_000067fc + lVar10) = *(uint *)(&DAT_000067fc + lVar10) | uVar2;
      }
    }
    *(undefined1 *)(lVar8 + 0xbe) = 0;
    uVar9 = 0;
    if (bVar3) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar9;
}

