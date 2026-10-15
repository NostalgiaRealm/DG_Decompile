/*
 * FUN_1801588f8 at 1801588f8
 * undefined FUN_1801588f8(void)
 * Address ranges: 1801588f8-180158953
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801588f8(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = 0;
  if (param_2 != 0) {
    lVar2 = param_2 + -8;
  }
  uVar3 = 0;
  do {
    if (*(longlong *)(param_1 + 0x910 + uVar3 * 8) == lVar2) {
      *(uint *)(param_1 + 0xa30) = *(uint *)(param_1 + 0xa30) | 1 << (ulonglong)((uint)uVar3 & 0x1f)
      ;
    }
    uVar1 = (uint)uVar3 + 1;
    uVar3 = (ulonglong)uVar1;
  } while (uVar1 < 0x10);
  if (*(longlong *)(param_1 + 0x990) == lVar2) {
    *(uint *)(param_1 + 0xa30) = *(uint *)(param_1 + 0xa30) | 0x80000000;
  }
  return;
}

