/*
 * FUN_1801dcdc0 at 1801dcdc0
 * undefined FUN_1801dcdc0(void)
 * Address ranges: 1801dcdc0-1801dcdef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801dcdc0(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + -0x24);
  param_2[3] = *(undefined4 *)(param_1 + -0x20);
  param_2[4] = *(undefined4 *)(param_1 + -0x58);
  param_2[1] = 7;
  param_2[2] = *(undefined4 *)(param_1 + -0x28);
  return 0;
}

