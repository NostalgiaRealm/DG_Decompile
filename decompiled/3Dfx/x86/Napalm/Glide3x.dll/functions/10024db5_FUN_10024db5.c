/*
 * FUN_10024db5 at 10024db5
 * undefined __fastcall FUN_10024db5(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 10024db5-10024e5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10024db5(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  if ((param_2[0x19] == 0) && (*param_2 != 0x40)) {
    FUN_1004da21((int)param_2,2,'\0');
    uVar1 = FUN_1004da21((int)param_2,1,'\x01');
    param_2[0x19] = uVar1;
    FUN_1004e5d0(param_2,param_3,0x38);
    FUN_1004e5d0(param_2,param_3,0x6c);
  }
  return;
}

