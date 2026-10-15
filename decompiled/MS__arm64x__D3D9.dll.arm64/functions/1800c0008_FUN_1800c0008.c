/*
 * FUN_1800c0008 at 1800c0008
 * undefined FUN_1800c0008(void)
 * Address ranges: 1800c0008-1800c002b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c0008(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x5c60) != 0) {
    uVar1 = FUN_1800c8840(*(longlong *)(param_1 + 0x5c60),&DAT_180229528,param_2);
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}

