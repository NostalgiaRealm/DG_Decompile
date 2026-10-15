/*
 * FUN_180018a58 at 180018a58
 * undefined __fastcall FUN_180018a58(longlong param_1, byte param_2, uint * param_3, uint * param_4, uint * param_5)
 * Address ranges: 180018a58-180018aa1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180018a58(longlong param_1,byte param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xe8);
  uVar2 = *(uint *)(param_1 + 0xec);
  uVar3 = *(uint *)(param_1 + 0xf0);
  *param_5 = uVar3 >> (param_2 & 0x1f);
  *param_3 = uVar1 >> (param_2 & 0x1f);
  *param_4 = uVar2 >> (param_2 & 0x1f);
  if (uVar1 >> (param_2 & 0x1f) == 0) {
    *param_3 = 1;
  }
  if (uVar2 >> (param_2 & 0x1f) == 0) {
    *param_4 = 1;
  }
  if (uVar3 >> (param_2 & 0x1f) == 0) {
    *param_5 = 1;
  }
  return;
}

