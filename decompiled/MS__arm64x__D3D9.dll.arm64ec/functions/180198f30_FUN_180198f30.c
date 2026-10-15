/*
 * FUN_180198f30 at 180198f30
 * undefined FUN_180198f30(void)
 * Address ranges: 180198f30-180198f77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180198f30(longlong param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  ulonglong uVar3;
  
  uVar1 = param_2 + param_3 * 0x10;
  param_1 = param_1 + ((ulonglong)(uVar1 >> 6) + 2) * 8;
  uVar3 = (ulonglong)(uVar1 >> 3) & 7;
  if ((param_4 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + uVar3) & ((byte)(1 << ((ulonglong)uVar1 & 7)) ^ 0xff);
  }
  else {
    bVar2 = *(byte *)(param_1 + uVar3) | (byte)(1 << ((ulonglong)uVar1 & 7));
  }
  *(byte *)(param_1 + uVar3) = bVar2;
  return;
}

