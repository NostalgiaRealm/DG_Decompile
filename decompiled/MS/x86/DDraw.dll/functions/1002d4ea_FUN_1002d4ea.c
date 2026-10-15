/*
 * FUN_1002d4ea at 1002d4ea
 * undefined __stdcall FUN_1002d4ea(int param_1, int param_2, undefined4 * param_3, int param_4, undefined4 * param_5, uint param_6)
 * Address ranges: 1002d4ea-1002d571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d4ea(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 < *(int *)(param_1 + 0xc)) {
    do {
      uVar1 = param_6 >> 2;
      puVar3 = param_3;
      puVar5 = param_5;
      if (param_6 < 0x100) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar5 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar5 = puVar5 + 1;
        }
        puVar4 = (undefined1 *)((int)param_3 + (param_6 & 0xfffffffc));
        puVar6 = (undefined1 *)((param_6 & 0xfffffffc) + (int)param_5);
        for (uVar1 = param_6 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar6 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        FUN_10060d80(param_5,param_3,param_6);
      }
      param_3 = (undefined4 *)((int)param_3 + param_4);
      param_5 = (undefined4 *)((int)param_5 + *(int *)(param_2 + 0x14));
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xc));
  }
  return;
}

