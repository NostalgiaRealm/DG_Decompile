/*
 * FUN_18001e900 at 18001e900
 * int __cdecl FUN_18001e900(longlong param_1, longlong param_2, undefined8 * param_3)
 * Address ranges: 18001e900-18001e9eb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_18001e900(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint local_10 [4];
  
  iVar4 = 0;
  local_10[0] = *(uint *)(param_1 + 0x474) & *(uint *)(param_1 + 0x470);
  uVar5 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
  uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
  uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
  uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
  lVar7 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
  uVar5 = (uint)lVar7;
  if ((1 - (uVar5 >> 5) & 0xff) != 0) {
    *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) =
         *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) &
         ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
    while( true ) {
      lVar1 = lVar7 * 0x18 + param_1;
      uVar5 = *(uint *)(lVar1 + 0x328);
      puVar2 = (undefined8 *)(param_2 + *(int *)(param_1 + 800 + lVar7 * 0x18));
      puVar3 = param_3;
      for (uVar6 = uVar5 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
      if ((uVar5 & 1) != 0) {
        *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
      }
      uVar5 = *(uint *)(lVar1 + 0x328);
      iVar4 = uVar5 + iVar4;
      uVar6 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
      lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
      uVar6 = (uint)lVar7;
      if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
      param_3 = (undefined8 *)((longlong)param_3 + (ulonglong)uVar5 * 4);
      *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
    }
  }
  return iVar4;
}

