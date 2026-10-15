/*
 * FUN_1801e3bc0 at 1801e3bc0
 * undefined FUN_1801e3bc0(void)
 * Address ranges: 1801e3bc0-1801e3bf7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801e3bc0(longlong param_1,undefined4 *param_2)

{
  *param_2 = 100;
  param_2[5] = *(undefined4 *)(param_1 + -0x3c);
  param_2[3] = *(undefined4 *)(param_1 + -0x34);
  param_2[4] = *(undefined4 *)(param_1 + -0x70);
  param_2[1] = 6;
  param_2[2] = *(undefined4 *)(param_1 + -0x40);
  return 0;
}

