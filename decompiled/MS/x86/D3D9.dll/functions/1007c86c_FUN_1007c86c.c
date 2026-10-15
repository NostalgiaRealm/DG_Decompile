/*
 * FUN_1007c86c at 1007c86c
 * undefined4 __fastcall FUN_1007c86c(int param_1)
 * Address ranges: 1007c86c-1007c8b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1007c86c(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_100bdcde(DAT_100dea9c,1,0x100dcd08,param_1 + 0x1d024);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_100bdcde(DAT_100dea9c,0x28,0x100dccb8,param_1 + 0x1cf84);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_1007c8b8(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

