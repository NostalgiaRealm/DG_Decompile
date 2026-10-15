/*
 * FUN_180023b10 at 180023b10
 * undefined __cdecl FUN_180023b10(undefined8 * param_1)
 * Address ranges: 180023b10-180023b4f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180023b10(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  (**(code **)(*plVar2 + 0x2e0))(plVar2);
  *(undefined4 *)(plVar2 + 0x5a1) = uVar1;
  *(undefined1 *)(plVar2 + 0x65e) = 1;
  return;
}

