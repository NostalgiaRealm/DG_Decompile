/*
 * FUN_1800c0340 at 1800c0340
 * undefined FUN_1800c0340(void)
 * Address ranges: 1800c0340-1800c0363
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800c0340(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x5c50) != 0) {
    uVar1 = FUN_1800c2220(*(longlong *)(param_1 + 0x5c50),&DAT_180229548,param_2);
    return uVar1;
  }
  *param_2 = 0;
  return 0;
}

