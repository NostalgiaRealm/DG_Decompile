/*
 * FUN_10022269 at 10022269
 * undefined __fastcall FUN_10022269(int param_1, int * param_2, int * param_3)
 * Address ranges: 10022269-10022381
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10022269(int param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  FUN_100221be(param_1,param_2,param_3);
  uVar1 = FUN_1004a618((int)param_2,1,'\x01');
  param_2[param_1 + 0x1e] = uVar1;
  if (*param_2 == 0x40) {
    FUN_1004b1c7(param_2,param_3,0x38);
  }
  FUN_1004b1c7(param_2,param_3,0);
  FUN_1004b1c7(param_2,param_3,0x38);
  FUN_1004b1c7(param_2,param_3,0x34);
  FUN_1004b1c7(param_2,param_3,0x33);
  return;
}

