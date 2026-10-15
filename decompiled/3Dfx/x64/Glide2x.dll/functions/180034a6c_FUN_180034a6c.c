/*
 * FUN_180034a6c at 180034a6c
 * undefined __fastcall FUN_180034a6c(longlong param_1)
 * Address ranges: 180034a6c-180034ab8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034a6c(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x90),0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
                    /* WARNING: Could not recover jumptable at 0x000180034ab5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x98),0);
  return;
}

