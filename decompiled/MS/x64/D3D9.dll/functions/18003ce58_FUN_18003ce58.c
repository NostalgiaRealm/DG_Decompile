/*
 * FUN_18003ce58 at 18003ce58
 * undefined __fastcall FUN_18003ce58(longlong param_1)
 * Address ranges: 18003ce58-18003ce7e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ce58(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x18),0);
  }
  return;
}

