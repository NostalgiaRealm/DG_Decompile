/*
 * FUN_18002f2c8 at 18002f2c8
 * undefined __fastcall FUN_18002f2c8(longlong param_1)
 * Address ranges: 18002f2c8-18002f300
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f2c8(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x19d8);
  FUN_180041dac(plVar1,*(longlong *)(param_1 + 0x80));
  FUN_180045fa0(plVar1,1,param_1 + 0x80);
  return;
}

