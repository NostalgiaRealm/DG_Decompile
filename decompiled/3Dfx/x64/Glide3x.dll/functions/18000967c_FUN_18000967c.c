/*
 * FUN_18000967c at 18000967c
 * undefined __fastcall FUN_18000967c(longlong param_1, longlong * param_2, int param_3)
 * Address ranges: 18000967c-18000976d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18000967c(longlong param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  uint local_res18 [4];
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    local_res18[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar4 = 0;
    if (local_res18[0] != 0) {
      for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    if (local_res18[0] != 0) {
      lVar2 = *param_2;
      pbVar5 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
      *pbVar5 = *pbVar5 & ~('\x01' << (uVar4 & 7));
      lVar3 = *(longlong *)(param_1 + 0x260);
      while( true ) {
        uVar6 = (ulonglong)(uVar4 & 0xff);
        iVar1 = *(int *)(param_1 + 0x10 + uVar6 * 0x18);
        **(undefined4 **)(param_1 + 0x18 + uVar6 * 0x18) =
             *(undefined4 *)(lVar2 + *(int *)(param_1 + 8 + uVar6 * 0x18));
        *(undefined4 *)(lVar3 + (ulonglong)*(uint *)(param_1 + 0xc + uVar6 * 0x18) * 4) =
             **(undefined4 **)(param_1 + 0x18 + uVar6 * 0x18);
        if (iVar1 != 1) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar6 * 0x18) + 4) =
               *(undefined4 *)(lVar2 + 4 + (longlong)*(int *)(param_1 + 8 + uVar6 * 0x18));
          *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xc + uVar6 * 0x18) + 1) * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar6 * 0x18) + 4);
          if (iVar1 != 2) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar6 * 0x18) + 8) =
                 *(undefined4 *)(lVar2 + 8 + (longlong)*(int *)(param_1 + 8 + uVar6 * 0x18));
            *(undefined4 *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0xc + uVar6 * 0x18) + 2) * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar6 * 0x18) + 8);
          }
        }
        uVar4 = 0;
        if (local_res18[0] != 0) {
          for (; (local_res18[0] >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
          }
        }
        if (local_res18[0] == 0) break;
        pbVar5 = (byte *)((longlong)local_res18 + ((longlong)(int)uVar4 >> 3));
        *pbVar5 = *pbVar5 & ~('\x01' << (uVar4 & 7));
      }
    }
    *(longlong *)(param_1 + 0x260) = *(longlong *)(param_1 + 0x260) + 0x50;
    param_2 = param_2 + 1;
  }
  return;
}

