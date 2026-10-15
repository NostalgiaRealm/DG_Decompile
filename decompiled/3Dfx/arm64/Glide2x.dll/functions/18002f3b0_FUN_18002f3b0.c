/*
 * FUN_18002f3b0 at 18002f3b0
 * undefined __cdecl FUN_18002f3b0(undefined8 * param_1)
 * Address ranges: 18002f3b0-18002f3ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002f3b0(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  (**(code **)(*plVar2 + 0x2a0))(plVar2);
  *(undefined4 *)(plVar2 + 0x58d) = uVar1;
  *(undefined1 *)(plVar2 + 0x62e) = 1;
  return;
}

