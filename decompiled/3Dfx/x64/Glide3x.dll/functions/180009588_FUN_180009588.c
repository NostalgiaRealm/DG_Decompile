/*
 * FUN_180009588 at 180009588
 * undefined __fastcall FUN_180009588(longlong param_1, longlong param_2, ulonglong param_3, int param_4)
 * Address ranges: 180009588-180009678
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180009588(longlong param_1,longlong param_2,ulonglong param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  byte *pbVar4;
  ulonglong uVar5;
  uint local_res20 [2];
  
  if (param_4 != 0) {
    do {
      local_res20[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
      uVar3 = 0;
      if (local_res20[0] != 0) {
        for (; (local_res20[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      if (local_res20[0] != 0) {
        lVar2 = *(longlong *)(param_1 + 0x260);
        pbVar4 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
        *pbVar4 = *pbVar4 & ~('\x01' << (uVar3 & 7));
        while( true ) {
          uVar5 = (ulonglong)(uVar3 & 0xff);
          iVar1 = *(int *)(param_1 + 0x10 + uVar5 * 0x18);
          **(undefined4 **)(param_1 + 0x18 + uVar5 * 0x18) =
               *(undefined4 *)(param_2 + *(int *)(param_1 + 8 + uVar5 * 0x18));
          *(undefined4 *)(lVar2 + (ulonglong)*(uint *)(param_1 + 0xc + uVar5 * 0x18) * 4) =
               **(undefined4 **)(param_1 + 0x18 + uVar5 * 0x18);
          if (iVar1 != 1) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar5 * 0x18) + 4) =
                 *(undefined4 *)(param_2 + 4 + (longlong)*(int *)(param_1 + 8 + uVar5 * 0x18));
            *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc + uVar5 * 0x18) + 1) * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar5 * 0x18) + 4);
            if (iVar1 != 2) {
              *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar5 * 0x18) + 8) =
                   *(undefined4 *)(param_2 + 8 + (longlong)*(int *)(param_1 + 8 + uVar5 * 0x18));
              *(undefined4 *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0xc + uVar5 * 0x18) + 2) * 4) =
                   *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar5 * 0x18) + 8);
            }
          }
          uVar3 = 0;
          if (local_res20[0] != 0) {
            for (; (local_res20[0] >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
            }
          }
          if (local_res20[0] == 0) break;
          pbVar4 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar3 >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << (uVar3 & 7));
        }
      }
      *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
      param_2 = param_2 + (param_3 & 0xffffffff);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

