/*
 * FUN_18003ca60 at 18003ca60
 * undefined __fastcall FUN_18003ca60(longlong param_1)
 * Address ranges: 18003ca60-18003ca86
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18003ca60(longlong param_1)

{
  longlong *plVar1;
  
  if (*(int *)(param_1 + 0x30) == 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + 8);
    (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x20),0);
  }
  return;
}

