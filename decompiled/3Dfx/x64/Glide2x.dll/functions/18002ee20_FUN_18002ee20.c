/*
 * FUN_18002ee20 at 18002ee20
 * undefined __fastcall FUN_18002ee20(longlong param_1)
 * Address ranges: 18002ee20-18002ee58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002ee20(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 0x19d8);
  FUN_180041904(plVar1,*(longlong *)(param_1 + 0x80));
  FUN_180045af8(plVar1,1,param_1 + 0x80);
  return;
}

