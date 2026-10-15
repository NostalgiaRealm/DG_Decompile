/*
 * FUN_180198f00 at 180198f00
 * undefined FUN_180198f00(void)
 * Address ranges: 180198f00-180198f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

bool FUN_180198f00(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = param_2 + param_3 * 0x10;
  return (*(byte *)(param_1 + ((ulonglong)(uVar1 >> 6) + 2) * 8 + ((ulonglong)(uVar1 >> 3) & 7)) >>
          ((ulonglong)uVar1 & 7) & 1) != 0;
}

