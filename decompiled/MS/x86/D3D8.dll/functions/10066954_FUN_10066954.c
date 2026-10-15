/*
 * FUN_10066954 at 10066954
 * undefined4 __fastcall FUN_10066954(int param_1)
 * Address ranges: 10066954-1006699f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10066954(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_1009b706(DAT_100ba2dc,1,0x100b89e0,param_1 + 0x1d024);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1009b706(DAT_100ba2dc,0x28,0x100b8990,param_1 + 0x1cf84);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_100669a0(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

