/*
 * FUN_10011a53 at 10011a53
 * undefined4 __fastcall FUN_10011a53(int param_1)
 * Address ranges: 10011a53-10011a9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10011a53(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_1003e1c1(DAT_1005b820,0x17,0x1005a218,param_1 + 0x920);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1003e1c1(DAT_1005b820,3,0x1005a210,param_1 + 0x97c);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_10011a9f(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

