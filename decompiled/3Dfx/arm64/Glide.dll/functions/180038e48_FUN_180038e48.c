/*
 * FUN_180038e48 at 180038e48
 * undefined __cdecl FUN_180038e48(longlong param_1)
 * Address ranges: 180038e48-180038ea3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180038e48(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x90),0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x98),0);
  return;
}

