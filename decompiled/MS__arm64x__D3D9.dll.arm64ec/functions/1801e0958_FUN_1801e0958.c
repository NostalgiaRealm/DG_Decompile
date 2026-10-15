/*
 * FUN_1801e0958 at 1801e0958
 * undefined FUN_1801e0958(void)
 * Address ranges: 1801e0958-1801e09a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1801e0958(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x170) + 0xe38);
  if (1 < uVar3) {
    lVar2 = 0;
    if (param_1 != 8) {
      lVar2 = param_1;
    }
    uVar4 = 0;
    do {
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x170) + 0xe30) + uVar4 * 8) == lVar2)
      {
        if ((int)uVar4 == -1) {
          return 1;
        }
        return 0;
      }
      uVar1 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar1;
    } while (uVar1 < uVar3);
  }
  return 1;
}

