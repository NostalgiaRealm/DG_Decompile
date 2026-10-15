/*
 * FUN_1000435d at 1000435d
 * uint __fastcall FUN_1000435d(int param_1, int param_2)
 * Address ranges: 1000435d-10004384
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1000435d(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(&DAT_100588c8 + param_1 * 4);
  uVar3 = uVar1 >> ((&DAT_100588c3)[param_2] & 0x1f);
  if (uVar3 == 0) {
    uVar3 = 1;
  }
  uVar2 = uVar1;
  if (param_2 < 0) {
    uVar2 = uVar3;
    uVar3 = uVar1;
  }
  return uVar2 << 0x10 | uVar3;
}

