/*
 * FUN_1000419c at 1000419c
 * uint __stdcall FUN_1000419c(int param_1, int param_2, int param_3, uint param_4)
 * Address ranges: 1000419c-100041c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_1000419c(int param_1,int param_2,int param_3,uint param_4)

{
  uint in_EAX;
  uint uVar1;
  
  if ((((param_2 < 9) && (param_1 < 9)) && (param_4 < 0x10)) && (in_EAX = param_3 + 3, in_EAX < 7))
  {
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  else {
    uVar1 = in_EAX & 0xffffff00;
  }
  return uVar1;
}

