/*
 * FUN_1002e8e4 at 1002e8e4
 * undefined __fastcall FUN_1002e8e4(int param_1, int * param_2, int * param_3)
 * Address ranges: 1002e8e4-1002e9fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e8e4(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  FUN_1002e839(param_1,param_2,param_3);
  uVar1 = FUN_10047b30((int)param_2,1,'\x01');
  param_2[param_1 + 0x1e] = uVar1;
  if (*param_2 == 0x40) {
    FUN_100486df(param_2,param_3,0x38);
  }
  FUN_100486df(param_2,param_3,0);
  FUN_100486df(param_2,param_3,0x38);
  FUN_100486df(param_2,param_3,0x34);
  FUN_100486df(param_2,param_3,0x33);
  return;
}

