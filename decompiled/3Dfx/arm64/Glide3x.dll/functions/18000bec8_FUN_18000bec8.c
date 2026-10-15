/*
 * FUN_18000bec8 at 18000bec8
 * undefined8 * __cdecl FUN_18000bec8(longlong param_1, undefined8 * param_2, longlong param_3)
 * Address ranges: 18000bec8-18000bfa7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18000bec8(longlong param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  uint local_10 [4];
  
  if (param_3 == 0) {
    param_3 = *(longlong *)(param_1 + 0x260);
  }
  local_10[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
  uVar4 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
  uVar4 = (uint)lVar5;
  if ((1 - (uVar4 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar4 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar4 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    while( true ) {
      lVar5 = param_1 + lVar5 * 0x18;
      uVar4 = *(uint *)(lVar5 + 0x10);
      puVar2 = (undefined8 *)(param_3 + (ulonglong)*(uint *)(lVar5 + 0xc) * 4);
      puVar3 = param_2;
      for (uVar1 = uVar4 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = *puVar3;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((uVar4 & 1) != 0) {
        *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
      }
      param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)*(uint *)(lVar5 + 0x10) * 4);
      uVar4 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
      uVar4 = (uint)lVar5;
      if ((1 - (uVar4 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar4 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar4 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar4 & 7)) ^ 0xff);
    }
  }
  return param_2;
}

