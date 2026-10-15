/*
 * FUN_180005df8 at 180005df8
 * undefined FUN_180005df8(void)
 * Address ranges: 180005df8-180005fb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180005df8(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint local_50 [4];
  
  lVar5 = *(longlong *)(param_2 + 0x30);
  if (lVar5 != 0) {
    uVar1 = *(uint *)(lVar5 + 0x38);
    *(undefined1 *)(lVar5 + 0x3e) = 1;
    uVar3 = uVar1 & 0xffff;
    if (uVar3 != 0) {
      uVar2 = (uVar1 & 0xaaaa) >> 1 | (uVar1 & 0x5555) << 1;
      uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
      local_50[0] = uVar3;
      lVar4 = LZCOUNT((uVar2 >> 8 | (uVar2 & 0xff00ff) << 8) << 0x10);
      uVar2 = (uint)lVar4;
      if ((1 - (uVar2 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)local_50 + (longlong)((int)uVar2 >> 3)) =
             *(byte *)((longlong)local_50 + (longlong)((int)uVar2 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
        while( true ) {
          if ((*(int *)(lVar5 + 0x20) - 3U & 0xfffffffd) == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0xd8))
                      (*(longlong **)(param_1 + 0x28),lVar4,0,*(undefined8 *)(lVar5 + 0x58),0,0,0,0)
            ;
          }
          uVar2 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
          uVar2 = (uVar2 & 0xcccccccc) >> 2 | (uVar2 & 0x33333333) << 2;
          uVar2 = (uVar2 & 0xf0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f) << 4;
          uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
          lVar4 = LZCOUNT(uVar2 >> 0x10 | uVar2 << 0x10);
          uVar2 = (uint)lVar4;
          if ((1 - (uVar2 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_50 + (longlong)((int)uVar2 >> 3)) =
               *(byte *)((longlong)local_50 + (longlong)((int)uVar2 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar2 & 7)) ^ 0xff);
        }
      }
      *(uint *)(param_1 + 0xd18) = *(uint *)(param_1 + 0xd18) | uVar3;
    }
    uVar1 = uVar1 >> 0x10;
    if (uVar1 != 0) {
      uVar3 = (uVar1 & 0xaaaaaaaa) >> 1 | (uVar1 & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      local_50[0] = uVar1;
      lVar4 = LZCOUNT((uVar3 >> 8 | (uVar3 & 0xff00ff) << 8) << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) != 0) {
        *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) =
             *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        while( true ) {
          if ((*(int *)(lVar5 + 0x20) - 3U & 0xfffffffd) == 0) {
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x1a8))
                      (*(longlong **)(param_1 + 0x28),lVar4,0,*(undefined8 *)(lVar5 + 0x58),0);
          }
          uVar3 = (local_50[0] & 0xaaaaaaaa) >> 1 | (local_50[0] & 0x55555555) << 1;
          uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
          lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
          uVar3 = (uint)lVar4;
          if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
          *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) =
               *(byte *)((longlong)local_50 + (longlong)((int)uVar3 >> 3)) &
               ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
        }
      }
      *(uint *)(&DAT_000067fc + param_1) = *(uint *)(&DAT_000067fc + param_1) | uVar1;
    }
  }
  return;
}

