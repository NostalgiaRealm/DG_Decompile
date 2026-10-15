/*
 * FUN_100036d3 at 100036d3
 * undefined __fastcall FUN_100036d3(undefined4 * param_1)
 * Address ranges: 100036d3-100036fc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100036d3(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_100626b8;
  FUN_10005a15((int)(param_1 + 1));
  (**(code **)(*(int *)param_1[2] + 0x10))();
  *param_1 = &PTR_LAB_10062724;
  thunk_FUN_10060be1((LPVOID)param_1[3]);
  return;
}

