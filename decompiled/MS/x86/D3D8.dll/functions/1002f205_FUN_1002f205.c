/*
 * FUN_1002f205 at 1002f205
 * undefined4 __fastcall FUN_1002f205(int param_1)
 * Address ranges: 1002f205-1002f284
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1002f205(int param_1)

{
  bool bVar1;
  uint3 extraout_var;
  undefined3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 uVar2;
  
  bVar1 = FUN_1009b706(DAT_100ba2dc,0x12,0x100b7ed8,param_1 + 4);
  uVar2 = extraout_var;
  if (bVar1) {
    bVar1 = FUN_1009b706(DAT_100ba2dc,6,0x100b7ea4,param_1 + 0x90);
    if (bVar1) {
      bVar1 = FUN_1009b706(DAT_100ba2dc,0x11,0x100b7eb4,param_1 + 0x4c);
      if (bVar1) {
        bVar1 = FUN_1009b706(DAT_100ba2dc,1,0x100b7ea0,param_1 + 0xb0);
        if (bVar1) {
          return CONCAT31(extraout_var_00,1);
        }
      }
    }
    FUN_1002f285(param_1);
    uVar2 = extraout_var_01;
  }
  return (uint)uVar2 << 8;
}

