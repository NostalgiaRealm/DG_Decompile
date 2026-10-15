/*
 * FUN_1001e6aa at 1001e6aa
 * undefined4 __fastcall FUN_1001e6aa(int param_1)
 * Address ranges: 1001e6aa-1001e6f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1001e6aa(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_1003b6dc(DAT_1005974c,0x17,0x100583e8,param_1 + 0x4a0);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1003b6dc(DAT_1005974c,3,0x100583e0,param_1 + 0x4fc);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_1001e6f6(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

