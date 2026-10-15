/*
 * FUN_1801de158 at 1801de158
 * undefined FUN_1801de158(void)
 * Address ranges: 1801de158-1801de173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801de158(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

