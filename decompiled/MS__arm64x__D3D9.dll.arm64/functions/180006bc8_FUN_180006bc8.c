/*
 * FUN_180006bc8 at 180006bc8
 * undefined FUN_180006bc8(void)
 * Address ranges: 180006bc8-180006cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006bc8(longlong param_1,uint param_2,byte param_3)

{
  char *pcVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  uint local_40 [4];
  
  uVar3 = (param_2 & 0xaaaaaaaa) >> 1 | (param_2 & 0x55555555) << 1;
  uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
  uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  local_40[0] = param_2;
  lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
  uVar3 = (uint)lVar4;
  if ((1 - (uVar3 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_40 + (longlong)((int)uVar3 >> 3)) =
         *(byte *)((longlong)local_40 + (longlong)((int)uVar3 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    while( true ) {
      lVar4 = *(longlong *)(param_1 + 0x66c8 + lVar4 * 8);
      plVar2 = *(longlong **)(lVar4 + 0x60);
      if ((plVar2 != (longlong *)0x0) && ((*(uint *)(lVar4 + 0x50) >> 9 & 1) != 0)) {
        (**(code **)(*plVar2 + 0x20))();
      }
      uVar3 = (local_40[0] & 0xaaaaaaaa) >> 1 | (local_40[0] & 0x55555555) << 1;
      uVar3 = (uVar3 & 0xcccccccc) >> 2 | (uVar3 & 0x33333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      lVar4 = LZCOUNT(uVar3 >> 0x10 | uVar3 << 0x10);
      uVar3 = (uint)lVar4;
      if ((1 - (uVar3 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_40 + (longlong)((int)uVar3 >> 3)) =
           *(byte *)((longlong)local_40 + (longlong)((int)uVar3 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar3 & 7)) ^ 0xff);
    }
  }
  if ((param_3 & 1) != 0) {
    lVar4 = *(longlong *)(&DAT_000066c0 + param_1);
    if ((*(longlong **)(lVar4 + 0x60) != (longlong *)0x0) &&
       ((*(uint *)(lVar4 + 0x50) >> 9 & 1) != 0)) {
      pcVar1 = &DAT_00000020;
      if (*(longlong *)(lVar4 + 0x40) != 0) {
        pcVar1 = (char *)(*(longlong *)(lVar4 + 0x40) + -0x6818);
      }
      if (*pcVar1 != '\0') {
        (**(code **)(**(longlong **)(lVar4 + 0x60) + 0x20))();
      }
    }
  }
  return;
}

