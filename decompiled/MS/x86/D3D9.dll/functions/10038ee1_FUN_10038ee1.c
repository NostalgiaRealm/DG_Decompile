/*
 * FUN_10038ee1 at 10038ee1
 * undefined4 __fastcall FUN_10038ee1(int param_1)
 * Address ranges: 10038ee1-10038f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10038ee1(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_100bdcde(DAT_100dea9c,0x12,0x100dc200,param_1 + 4);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_100bdcde(DAT_100dea9c,6,0x100dc1cc,param_1 + 0x90);
    if (bVar1) {
      bVar1 = FUN_100bdcde(DAT_100dea9c,0x11,0x100dc1dc,param_1 + 0x4c);
      if (bVar1) {
        bVar1 = FUN_100bdcde(DAT_100dea9c,1,0x100dc1c8,param_1 + 0xb0);
        if (bVar1) {
          return CONCAT31(extraout_var_00,1);
        }
      }
    }
    FUN_10038f61(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

