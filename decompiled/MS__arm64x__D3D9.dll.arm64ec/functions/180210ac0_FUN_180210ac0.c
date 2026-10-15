/*
 * FUN_180210ac0 at 180210ac0
 * undefined FUN_180210ac0(void)
 * Address ranges: 180210ac0-180210af3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_180210ac0(longlong param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x2c + (longlong)((int)param_2 >> 3));
  *(byte *)(param_1 + 0x2c + (longlong)((int)param_2 >> 3)) =
       bVar1 & ((byte)(1 << (ulonglong)(param_2 & 7)) ^ 0xff);
  return (bVar1 >> (ulonglong)(param_2 & 7) & 1) != 0;
}

