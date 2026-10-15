/*
 * FUN_1000fa87 at 1000fa87
 * undefined4 __fastcall FUN_1000fa87(int param_1)
 * Address ranges: 1000fa87-1000fad2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1000fa87(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_1004b332(DAT_1006c250,1,0x10069378,param_1 + 0xd024);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1004b332(DAT_1006c250,0x28,0x10069328,param_1 + 0xcf84);
    if (bVar1) {
      return CONCAT31(extraout_var_00,1);
    }
    FUN_1000fad3(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

