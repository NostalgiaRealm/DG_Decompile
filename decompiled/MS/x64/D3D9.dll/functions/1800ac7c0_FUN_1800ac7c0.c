/*
 * FUN_1800ac7c0 at 1800ac7c0
 * undefined __fastcall FUN_1800ac7c0(longlong param_1, uint * param_2, uint * param_3, uint * param_4, uint * param_5)
 * Address ranges: 1800ac7c0-1800ac7fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ac7c0(longlong param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x2c) * 0x2c;
  bVar1 = (&DAT_18010ff39)[lVar4];
  bVar2 = (&DAT_18010ff3a)[lVar4];
  bVar3 = (&DAT_18010ff3b)[lVar4];
  *param_2 = (uint)(byte)(&DAT_18010ff38)[lVar4];
  *param_3 = (uint)bVar1;
  *param_4 = (uint)bVar2;
  *param_5 = (uint)bVar3;
  return;
}

