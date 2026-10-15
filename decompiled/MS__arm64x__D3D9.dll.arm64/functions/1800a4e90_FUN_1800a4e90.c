/*
 * FUN_1800a4e90 at 1800a4e90
 * undefined FUN_1800a4e90(void)
 * Address ranges: 1800a4e90-1800a4ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800a4e90(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 < *(uint *)(param_1 + -0x30)) {
    uVar1 = (&DAT_1802539b8)
            [(ulonglong)*(uint *)(*(longlong *)(param_1 + -0x38) + (ulonglong)param_2 * 4) * 0x4b];
  }
  return uVar1;
}

