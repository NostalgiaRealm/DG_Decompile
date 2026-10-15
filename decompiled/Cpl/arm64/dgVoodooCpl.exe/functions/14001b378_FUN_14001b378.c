/*
 * FUN_14001b378 at 14001b378
 * undefined __cdecl FUN_14001b378(undefined8 * param_1, longlong param_2, uint param_3, uint param_4)
 * Address ranges: 14001b378-14001b44f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14001b378(undefined8 *param_1,longlong param_2,uint param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint local_140 [2];
  char local_138 [264];
  
  local_140[0] = param_3 & param_4;
  local_138[0] = '\0';
  uVar1 = (local_140[0] & 0xaaaaaaaa) >> 1 | (local_140[0] & 0x55555555) << 1;
  uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
  uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
  uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
  lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
  uVar1 = (uint)lVar2;
  if ((1 - (uVar1 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_140 + (longlong)((int)uVar1 >> 3)) =
         *(byte *)((longlong)local_140 + (longlong)((int)uVar1 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
    while( true ) {
      FUN_140024cb8(local_138,*(char **)(param_2 + lVar2 * 8));
      uVar1 = (local_140[0] & 0xaaaaaaaa) >> 1 | (local_140[0] & 0x55555555) << 1;
      uVar1 = (uVar1 & 0xcccccccc) >> 2 | (uVar1 & 0x33333333) << 2;
      uVar1 = (uVar1 & 0xf0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f) << 4;
      uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
      lVar2 = LZCOUNT(uVar1 >> 0x10 | uVar1 << 0x10);
      uVar1 = (uint)lVar2;
      if ((1 - (uVar1 >> 5) & 0xff) == 0) break;
      *(byte *)((longlong)local_140 + (longlong)((int)uVar1 >> 3)) =
           *(byte *)((longlong)local_140 + (longlong)((int)uVar1 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar1 & 7)) ^ 0xff);
      FUN_140024cb8(local_138,", ");
    }
  }
  FUN_14001b090(param_1,local_138);
  return;
}

