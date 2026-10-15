/*
 * FUN_10024296 at 10024296
 * ushort __fastcall FUN_10024296(ushort param_1, int param_2)
 * Address ranges: 10024296-100242cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort __fastcall FUN_10024296(ushort param_1,int param_2)

{
  ushort uVar1;
  
  if (param_2 == 1) {
    uVar1 = 0;
  }
  else if (param_2 == 2) {
    uVar1 = 0x100;
  }
  else if (param_2 == 3) {
    uVar1 = 0x200;
  }
  else {
    if (param_2 != 4) {
      return 0;
    }
    uVar1 = 0x300;
  }
  uVar1 = FUN_10024111(param_1,uVar1);
  return uVar1;
}

