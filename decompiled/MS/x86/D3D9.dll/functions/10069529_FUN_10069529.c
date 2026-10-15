/*
 * FUN_10069529 at 10069529
 * uint __stdcall FUN_10069529(int param_1, int * param_2, int param_3)
 * Address ranges: 10069529-1006957d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_10069529(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = FUN_100c2e34(param_1 + 0x18,4,'\x01');
  FUN_10068cb2(param_3);
  FUN_100c3be1((int *)(param_1 + 0x18),param_2,0x36);
  return uVar1;
}

