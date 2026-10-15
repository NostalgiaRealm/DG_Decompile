/*
 * FUN_180105798 at 180105798
 * undefined FUN_180105798(void)
 * Address ranges: 180105798-1801057a3;180222a10-180222a4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180105798(void)

{
  undefined8 uVar1;
  
  if (DAT_18024d8dc < DAT_18024d8d8) {
    *(undefined1 **)(DAT_18024d8d0 + (ulonglong)DAT_18024d8dc * 8) = &LAB_1802244c8;
    DAT_18024d8dc = DAT_18024d8dc + 1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

