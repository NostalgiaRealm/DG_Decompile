/*
 * FUN_180001960 at 180001960
 * undefined __fastcall FUN_180001960(longlong * param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 180001960-1800019ca
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180001960(longlong *param_1,undefined4 *param_2,uint param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  
  uVar2 = (ulonglong)param_3;
  if ((ulonglong)*(uint *)(param_1 + 2) < (param_1[1] - *param_1) + uVar2) {
    FUN_180001904(param_1,param_3);
  }
  puVar3 = param_2;
  puVar5 = (undefined4 *)param_1[1];
  for (uVar1 = (ulonglong)(param_3 >> 2); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar5 = puVar5 + 1;
  }
  puVar4 = (undefined1 *)((uVar2 & 0xfffffffc) + (longlong)param_2);
  puVar6 = (undefined1 *)(param_1[1] + (uVar2 & 0xfffffffc));
  for (uVar1 = (ulonglong)(param_3 & 3); uVar1 != 0; uVar1 = uVar1 - 1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  param_1[1] = param_1[1] + uVar2;
  return;
}

