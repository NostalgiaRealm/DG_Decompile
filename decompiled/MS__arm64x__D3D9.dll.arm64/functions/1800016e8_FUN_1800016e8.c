/*
 * FUN_1800016e8 at 1800016e8
 * undefined FUN_1800016e8(void)
 * Address ranges: 1800016e8-1800016f3;1801030d8-180103113
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800016e8(void)

{
  undefined8 uVar1;
  
  if (DAT_18024d8ec < DAT_18024d8e8) {
    *(undefined1 **)(DAT_18024d8e0 + (ulonglong)DAT_18024d8ec * 8) = &LAB_180103b38;
    DAT_18024d8ec = DAT_18024d8ec + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

