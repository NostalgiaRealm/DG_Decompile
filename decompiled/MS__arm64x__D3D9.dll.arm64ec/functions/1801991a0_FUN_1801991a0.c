/*
 * FUN_1801991a0 at 1801991a0
 * undefined FUN_1801991a0(void)
 * Address ranges: 1801991a0-1801991ef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801991a0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *(undefined1 *)(param_1 + 0x16b) = 0;
  uVar2 = param_2 + *(int *)(param_1 + 0x3c) * param_3;
  lVar1 = param_1 + ((ulonglong)(uVar2 >> 6) + 0x2b) * 8;
  uVar3 = (ulonglong)(uVar2 >> 3) & 7;
  *(byte *)(lVar1 + uVar3) = *(byte *)(lVar1 + uVar3) & ((byte)(1 << ((ulonglong)uVar2 & 7)) ^ 0xff)
  ;
  if (*(char *)(param_1 + 0x4d) == '\x01') {
    *(undefined1 *)(param_1 + 0x4d) = 2;
  }
  return;
}

