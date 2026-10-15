/*
 * FUN_100221be at 100221be
 * undefined __fastcall FUN_100221be(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 100221be-10022268
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100221be(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  if ((param_2[0x19] == 0) && (*param_2 != 0x40)) {
    FUN_1004a618((int)param_2,2,'\0');
    uVar1 = FUN_1004a618((int)param_2,1,'\x01');
    param_2[0x19] = uVar1;
    FUN_1004b1c7(param_2,param_3,0x38);
    FUN_1004b1c7(param_2,param_3,0x6c);
  }
  return;
}

