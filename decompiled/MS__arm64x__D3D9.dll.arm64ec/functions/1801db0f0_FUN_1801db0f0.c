/*
 * FUN_1801db0f0 at 1801db0f0
 * undefined FUN_1801db0f0(void)
 * Address ranges: 1801db0f0-1801db11b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801db0f0(longlong param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if ((param_2 < 0x10) && (param_3 != (undefined4 *)0x0)) {
    uVar1 = 0;
    *param_3 = *(undefined4 *)(param_1 + (ulonglong)param_2 * 4 + 0x5c68);
  }
  return uVar1;
}

