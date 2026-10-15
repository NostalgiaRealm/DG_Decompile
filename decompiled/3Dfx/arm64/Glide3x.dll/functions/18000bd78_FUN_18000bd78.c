/*
 * FUN_18000bd78 at 18000bd78
 * undefined __cdecl FUN_18000bd78(longlong param_1, longlong * param_2, int param_3)
 * Address ranges: 18000bd78-18000bec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bd78(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint local_10 [4];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    local_10[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar6 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
    uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
    uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
    uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
    lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
    uVar6 = (uint)lVar7;
    if ((1 - (uVar6 >> 5) & 0xff) != 0) {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(param_1 + 0x260);
      lVar1 = param_1 + 8;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      while( true ) {
        lVar7 = lVar7 * 0x18;
        lVar2 = lVar7 + param_1;
        iVar3 = *(int *)(lVar2 + 0x10);
        **(undefined4 **)(lVar2 + 0x18) = *(undefined4 *)(lVar4 + *(int *)(lVar1 + lVar7));
        *(undefined4 *)(lVar5 + (ulonglong)*(uint *)(lVar2 + 0xc) * 4) =
             **(undefined4 **)(lVar2 + 0x18);
        if (iVar3 != 1) {
          *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4) =
               *(undefined4 *)(lVar4 + 4 + (longlong)*(int *)(lVar1 + lVar7));
          *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xc) + 1) * 4) =
               *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4);
          if (iVar3 != 2) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8) =
                 *(undefined4 *)(lVar4 + 8 + (longlong)*(int *)(lVar1 + lVar7));
            *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(lVar2 + 0xc) + 2) * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8);
          }
        }
        uVar6 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
        uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
        lVar7 = LZCOUNT(uVar6 >> 0x10 | uVar6 << 0x10);
        uVar6 = (uint)lVar7;
        if ((1 - (uVar6 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) =
             *(byte *)((longlong)local_10 + (longlong)((int)uVar6 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar6 & 7)) ^ 0xff);
      }
    }
    param_2 = param_2 + 1;
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
  }
  return;
}

