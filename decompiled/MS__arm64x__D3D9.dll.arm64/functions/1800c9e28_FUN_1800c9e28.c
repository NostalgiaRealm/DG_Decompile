/*
 * FUN_1800c9e28 at 1800c9e28
 * undefined FUN_1800c9e28(void)
 * Address ranges: 1800c9e28-1800ca083
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1800c9e28(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint local_60 [4];
  
  uVar7 = 0x8876086c;
  if (*(char *)(param_1 + -2) != '\0') {
    if (((*(uint *)(*(longlong *)(param_1 + -0x40) + 0xe78) >> 2 & 1) == 0) &&
       (*(int *)(DAT_18024e310 + 0x30) == 0)) {
      bVar2 = false;
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 1;
    }
    else {
      bVar2 = true;
      iVar3 = (*__imp_KERNEL32_dll_TryEnterCriticalSection)(DAT_18024e310);
      if (iVar3 == 0) {
        FUN_180003398();
      }
    }
    if ((*(int *)(param_1 + -0x1c) != 3) &&
       ((lVar8 = *(longlong *)(param_1 + -0x40), *(char *)(lVar8 + 0x6819) == '\0' ||
        (*(int *)(param_1 + -0x1c) != 0)))) {
      if (*(longlong *)(param_1 + -0x98) != 0) {
        *(uint *)(param_1 + -0x78) = *(uint *)(param_1 + -0x78) | 1;
      }
      lVar9 = *(longlong *)(param_1 + -0x38);
      uVar1 = *(uint *)(lVar9 + 0x38);
      *(undefined1 *)(lVar9 + 0x3e) = 1;
      uVar5 = uVar1 & 0xffff;
      if (uVar5 != 0) {
        uVar4 = (uVar1 & 0xaaaa) >> 1 | (uVar1 & 0x5555) << 1;
        uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
        local_60[0] = uVar5;
        lVar6 = LZCOUNT((uVar4 >> 8 | (uVar4 & 0xff00ff) << 8) << 0x10);
        uVar4 = (uint)lVar6;
        if ((1 - (uVar4 >> 5) & 0xff) != 0) {
          *(byte *)((longlong)local_60 + (longlong)((int)uVar4 >> 3)) =
               *(byte *)((longlong)local_60 + (longlong)((int)uVar4 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          while( true ) {
            (**(code **)(**(longlong **)(lVar8 + 0x28) + 0xd8))
                      (*(longlong **)(lVar8 + 0x28),lVar6,0,*(undefined8 *)(lVar9 + 0xe0),0,0,0,0);
            uVar4 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
            uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
            uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
            uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
            lVar6 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
            uVar4 = (uint)lVar6;
            if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)local_60 + (longlong)((int)uVar4 >> 3)) =
                 *(byte *)((longlong)local_60 + (longlong)((int)uVar4 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
          }
        }
        *(uint *)(lVar8 + 0xd18) = *(uint *)(lVar8 + 0xd18) | uVar5;
      }
      uVar1 = uVar1 >> 0x10;
      if (uVar1 != 0) {
        uVar5 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        local_60[0] = uVar1;
        lVar6 = LZCOUNT((uVar5 >> 8 | (uVar5 & 0xff00ff) << 8) << 0x10);
        uVar5 = (uint)lVar6;
        if ((1 - (uVar5 >> 5) & 0xff) != 0) {
          *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) =
               *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          while( true ) {
            (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x1a8))
                      (*(longlong **)(lVar8 + 0x28),lVar6,0,*(undefined8 *)(lVar9 + 0xe0),0);
            uVar5 = (local_60[0] & 0xaaaaaaaa) >> 1 | (local_60[0] & 0x55555555) << 1;
            uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
            uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
            uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
            lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
            uVar5 = (uint)lVar6;
            if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
            *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) =
                 *(byte *)((longlong)local_60 + (longlong)((int)uVar5 >> 3)) &
                 ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
          }
        }
        *(uint *)(&DAT_000067fc + lVar8) = *(uint *)(&DAT_000067fc + lVar8) | uVar1;
      }
    }
    *(undefined1 *)(param_1 + -2) = 0;
    uVar7 = 0;
    if (bVar2) {
      (*__imp_KERNEL32_dll_LeaveCriticalSection)(DAT_18024e310);
    }
    else {
      *(undefined4 *)(DAT_18024e310 + 0x2c) = 0;
    }
  }
  return uVar7;
}

