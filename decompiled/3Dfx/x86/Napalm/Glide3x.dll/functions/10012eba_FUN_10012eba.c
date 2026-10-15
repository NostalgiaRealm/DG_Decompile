/*
 * FUN_10012eba at 10012eba
 * undefined4 __fastcall FUN_10012eba(int param_1)
 * Address ranges: 10012eba-10012f05
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10012eba(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_100415ca(DAT_1005fa00,0x1d,0x1005e320,param_1 + 0x920);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_100415ca(DAT_1005fa00,3,0x1005e318,param_1 + 0x994);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_10012f06(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

