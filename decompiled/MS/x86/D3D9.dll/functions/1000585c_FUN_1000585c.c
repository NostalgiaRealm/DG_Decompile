/*
 * FUN_1000585c at 1000585c
 * undefined __stdcall FUN_1000585c(int param_1, int param_2, uint param_3, uint param_4, uint param_5, uint param_6, int param_7, uint param_8, int param_9, int param_10)
 * Address ranges: 1000585c-1000596a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1000585c(int param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 int param_7,uint param_8,int param_9,int param_10)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (param_8 != 0) {
    do {
      iVar4 = local_10 * 0x10;
      uVar6 = *(uint *)(param_9 + 4 + iVar4);
      if (param_10 == 0) {
        uVar1 = *(uint *)(param_9 + iVar4);
      }
      else {
        uVar1 = *(uint *)(param_10 + local_10 * 8);
      }
      local_c = uVar6;
      if (param_10 != 0) {
        local_c = *(uint *)(param_10 + 4 + local_10 * 8);
      }
      uVar2 = (*(int *)(param_9 + 0xc + iVar4) - uVar6) / param_6;
      puVar3 = (undefined4 *)
               ((*(uint *)(param_9 + iVar4) / param_5) * param_7 +
               (uVar6 / param_6) * param_3 + param_1);
      puVar5 = (undefined4 *)((uVar1 / param_5) * param_7 + (local_c / param_6) * param_4 + param_2)
      ;
      uVar6 = ((uint)(*(int *)(param_9 + 8 + iVar4) - *(int *)(param_9 + iVar4)) / param_5) *
              param_7;
      if ((param_3 == uVar6) && (param_4 == uVar6)) {
        FUN_100cff00(puVar5,puVar3,uVar6 * uVar2);
      }
      else {
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          FUN_100cff00(puVar5,puVar3,uVar6);
          puVar3 = (undefined4 *)((int)puVar3 + param_3);
          puVar5 = (undefined4 *)((int)puVar5 + param_4);
        }
      }
      local_10 = local_10 + 1;
    } while (local_10 < param_8);
  }
  return;
}

