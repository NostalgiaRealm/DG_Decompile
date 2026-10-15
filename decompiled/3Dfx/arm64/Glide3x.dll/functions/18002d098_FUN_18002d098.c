/*
 * FUN_18002d098 at 18002d098
 * undefined __cdecl FUN_18002d098(longlong param_1)
 * Address ranges: 18002d098-18002d0f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002d098(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x2c0),0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x2c8),0);
  return;
}

