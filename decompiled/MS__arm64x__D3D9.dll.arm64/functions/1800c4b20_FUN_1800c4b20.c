/*
 * FUN_1800c4b20 at 1800c4b20
 * undefined FUN_1800c4b20(void)
 * Address ranges: 1800c4b20-1800c4b4b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c4b20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = FUN_1800a3db8(*(longlong *)(param_1 + 0x38) + 0x6838,&DAT_180229498,param_2);
    return uVar1;
  }
  return 0x8876086c;
}

