/*
 * FUN_1800091fc at 1800091fc
 * undefined __fastcall FUN_1800091fc(longlong param_1, undefined4 * param_2, ulonglong param_3, char param_4)
 * Address ranges: 1800091fc-1800092f7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800091fc(longlong param_1,undefined4 *param_2,ulonglong param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint local_res20 [2];
  
  lVar5 = param_1 + 0x184 + (param_3 & 0xffffffff) * 0x50;
  if (param_4 == '\0') {
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + 0x260);
    }
    local_res20[0] = *(uint *)(param_1 + 0x15c) & *(uint *)(param_1 + 0x158);
    uVar2 = 0;
    if (local_res20[0] != 0) {
      for (; (local_res20[0] >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    if (local_res20[0] != 0) {
      pbVar3 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar2 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
      while( true ) {
        uVar4 = (ulonglong)(uVar2 & 0xff);
        iVar1 = *(int *)(param_1 + 0x10 + uVar4 * 0x18);
        **(undefined4 **)(param_1 + 0x18 + uVar4 * 0x18) =
             *(undefined4 *)((longlong)param_2 + (longlong)*(int *)(param_1 + 8 + uVar4 * 0x18));
        *(undefined4 *)(lVar5 + (ulonglong)*(uint *)(param_1 + 0xc + uVar4 * 0x18) * 4) =
             **(undefined4 **)(param_1 + 0x18 + uVar4 * 0x18);
        if (iVar1 != 1) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar4 * 0x18) + 4) =
               *(undefined4 *)
                ((longlong)param_2 + (longlong)*(int *)(param_1 + 8 + uVar4 * 0x18) + 4);
          *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc + uVar4 * 0x18) + 1) * 4) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar4 * 0x18) + 4);
          if (iVar1 != 2) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar4 * 0x18) + 8) =
                 *(undefined4 *)
                  ((longlong)param_2 + (longlong)*(int *)(param_1 + 8 + uVar4 * 0x18) + 8);
            *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xc + uVar4 * 0x18) + 2) * 4) =
                 *(undefined4 *)(*(longlong *)(param_1 + 0x18 + uVar4 * 0x18) + 8);
          }
        }
        uVar2 = 0;
        if (local_res20[0] != 0) {
          for (; (local_res20[0] >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
          }
        }
        if (local_res20[0] == 0) break;
        pbVar3 = (byte *)((longlong)local_res20 + ((longlong)(int)uVar2 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar2 & 7));
      }
    }
  }
  else {
    FUN_180009770(param_1,param_2,lVar5);
  }
  return;
}

