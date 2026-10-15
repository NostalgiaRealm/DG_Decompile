/*
 * FUN_18000bfa8 at 18000bfa8
 * undefined __cdecl FUN_18000bfa8(longlong param_1, undefined8 * param_2, uint param_3, int param_4)
 * Address ranges: 18000bfa8-18000c09f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bfa8(longlong param_1,undefined8 *param_2,uint param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint local_10 [4];
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    local_10[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar5 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
    uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
    uVar5 = (uint)lVar6;
    if ((1 - (uVar5 >> 5) & 0xff) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x260);
      *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
      puVar7 = param_2;
      while( true ) {
        lVar1 = param_1 + lVar6 * 0x18;
        uVar5 = *(uint *)(lVar1 + 0x10);
        puVar3 = (undefined8 *)(lVar8 + (ulonglong)*(uint *)(lVar1 + 0xc) * 4);
        puVar4 = puVar7;
        for (uVar2 = uVar5 >> 1; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar3 = *puVar4;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
        if ((uVar5 & 1) != 0) {
          *(undefined4 *)puVar3 = *(undefined4 *)puVar4;
        }
        uVar5 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        uVar5 = (uint)lVar6;
        if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
        puVar7 = (undefined8 *)((longlong)puVar7 + (ulonglong)*(uint *)(lVar1 + 0x10) * 4);
        *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) =
             *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
      }
    }
    param_2 = (undefined8 *)((longlong)param_2 + (ulonglong)param_3);
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
  }
  return;
}

