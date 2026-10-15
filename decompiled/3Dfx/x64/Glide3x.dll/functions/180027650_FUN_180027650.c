/*
 * FUN_180027650 at 180027650
 * undefined __fastcall FUN_180027650(longlong param_1)
 * Address ranges: 180027650-1800276a2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180027650(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x2c0),0);
  plVar1 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x280) + 0x3340) + 8);
                    /* WARNING: Could not recover jumptable at 0x00018002769f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x78))(plVar1,*(undefined8 *)(param_1 + 0x2c8),0);
  return;
}

