/*
 * FUN_1002ec6e at 1002ec6e
 * undefined __fastcall FUN_1002ec6e(int param_1, int * param_2, int * param_3)
 * Address ranges: 1002ec6e-1002ed86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ec6e(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  FUN_1002ebc3(param_1,param_2,param_3);
  uVar1 = FUN_10047ec0((int)param_2,1,'\x01');
  param_2[param_1 + 0x1e] = uVar1;
  if (*param_2 == 0x40) {
    FUN_10048a6f(param_2,param_3,0x38);
  }
  FUN_10048a6f(param_2,param_3,0);
  FUN_10048a6f(param_2,param_3,0x38);
  FUN_10048a6f(param_2,param_3,0x34);
  FUN_10048a6f(param_2,param_3,0x33);
  return;
}

