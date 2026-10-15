/*
 * FUN_1002ebc3 at 1002ebc3
 * undefined __fastcall FUN_1002ebc3(undefined4 param_1, int * param_2, int * param_3)
 * Address ranges: 1002ebc3-1002ec6d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002ebc3(undefined4 param_1,int *param_2,int *param_3)

{
  uint uVar1;
  
  if ((param_2[0x19] == 0) && (*param_2 != 0x40)) {
    FUN_10047ec0((int)param_2,2,'\0');
    uVar1 = FUN_10047ec0((int)param_2,1,'\x01');
    param_2[0x19] = uVar1;
    FUN_10048a6f(param_2,param_3,0x38);
    FUN_10048a6f(param_2,param_3,0x6c);
  }
  return;
}

