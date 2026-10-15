/*
 * FUN_1801e1e40 at 1801e1e40
 * undefined FUN_1801e1e40(void)
 * Address ranges: 1801e1e40-1801e1ebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801e1e40(longlong param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 0x98);
  param_2[1] = *(undefined4 *)(param_1 + 0x9c);
  param_2[2] = *(undefined4 *)(param_1 + 0xe0);
  param_2[3] = *(undefined4 *)(param_1 + 0xd4);
  param_2[4] = *(undefined4 *)(param_1 + 0xe8);
  param_2[5] = 0;
  param_2[6] = *(undefined4 *)(param_1 + 0xcc);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x90);
  param_2[10] = (uint)(*(char *)(param_1 + 0x101) != '\0');
  param_2[0xb] = (uint)(*(int *)(param_1 + 0xe4) != 0);
  param_2[0xc] = *(undefined4 *)(param_1 + 0xe4);
  param_2[0xd] = *(undefined4 *)(param_1 + 0xfc);
  param_2[0xe] = *(undefined4 *)(param_1 + 0xa8);
  param_2[0xf] = *(undefined4 *)(param_1 + 0xd0);
  return 0;
}

