/*
 * FUN_1800c0030 at 1800c0030
 * undefined FUN_1800c0030(void)
 * Address ranges: 1800c0030-1800c0053
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c0030(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x5c58) != 0) {
    uVar1 = FUN_1800c8fd0(*(longlong *)(param_1 + 0x5c58),&DAT_180229538,param_2);
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}

