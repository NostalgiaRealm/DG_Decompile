/*
 * FUN_18000bc30 at 18000bc30
 * undefined __cdecl FUN_18000bc30(longlong param_1, longlong param_2, uint param_3, int param_4)
 * Address ranges: 18000bc30-18000bd77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000bc30(longlong param_1,longlong param_2,uint param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
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
      lVar4 = *(longlong *)(param_1 + 0x260);
      lVar1 = param_1 + 8;
      *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) =
           *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) &
           ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
      while( true ) {
        lVar6 = lVar6 * 0x18;
        lVar2 = lVar6 + param_1;
        iVar3 = *(int *)(lVar2 + 0x10);
        **(undefined4 **)(lVar2 + 0x18) = *(undefined4 *)(param_2 + *(int *)(lVar1 + lVar6));
        *(undefined4 *)(lVar4 + (ulonglong)*(uint *)(lVar2 + 0xc) * 4) =
             **(undefined4 **)(lVar2 + 0x18);
        if (iVar3 != 1) {
          *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4) =
               *(undefined4 *)(param_2 + 4 + (longlong)*(int *)(lVar1 + lVar6));
          *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xc) + 1) * 4) =
               *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 4);
          if (iVar3 != 2) {
            *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8) =
                 *(undefined4 *)(param_2 + 8 + (longlong)*(int *)(lVar1 + lVar6));
            *(undefined4 *)(lVar4 + (ulonglong)(*(int *)(lVar2 + 0xc) + 2) * 4) =
                 *(undefined4 *)(*(longlong *)(lVar2 + 0x18) + 8);
          }
        }
        uVar5 = (local_10[0] & 0xaaaaaaaa) >> 1 | (local_10[0] & 0x55555555) << 1;
        uVar5 = (uVar5 & 0xcccccccc) >> 2 | (uVar5 & 0x33333333) << 2;
        uVar5 = (uVar5 & 0xf0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f) << 4;
        uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
        lVar6 = LZCOUNT(uVar5 >> 0x10 | uVar5 << 0x10);
        uVar5 = (uint)lVar6;
        if ((1 - (uVar5 >> 5) & 0xff) == 0) break;
        *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) =
             *(byte *)((longlong)local_10 + (longlong)((int)uVar5 >> 3)) &
             ((byte)(1 << (ulonglong)(uVar5 & 7)) ^ 0xff);
      }
    }
    param_2 = param_2 + (ulonglong)param_3;
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
  }
  return;
}

