/*
 * FUN_1801ddd10 at 1801ddd10
 * undefined FUN_1801ddd10(void)
 * Address ranges: 1801ddd10-1801ddd3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801ddd10(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1801bc2e8(*(longlong *)(param_1 + 0x18) + 0x6838,&DAT_180229218,param_2);
    return uVar1;
  }
  return 0x8876086c;
}

