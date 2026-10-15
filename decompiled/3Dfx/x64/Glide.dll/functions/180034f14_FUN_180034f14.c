/*
 * FUN_180034f14 at 180034f14
 * undefined __fastcall FUN_180034f14(longlong param_1)
 * Address ranges: 180034f14-180034f60
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180034f14(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x90),0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x31c0) + 8);
                    /* WARNING: Could not recover jumptable at 0x000180034f5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x98),0);
  return;
}

