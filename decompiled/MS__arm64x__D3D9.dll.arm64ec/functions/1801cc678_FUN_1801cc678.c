/*
 * FUN_1801cc678 at 1801cc678
 * undefined FUN_1801cc678(void)
 * Address ranges: 1801cc678-1801cc70f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801cc678(longlong param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = 0x8876086c;
  if (param_2 < 0x10) {
    if (*(char *)(param_1 + -0x642c) == '\0') {
      lVar2 = param_1 + (ulonglong)param_2 * 4;
      if (*(int *)(lVar2 + 0x5c68) != param_3) {
        *(int *)(lVar2 + 0x5c68) = param_3;
        *(undefined1 *)(param_1 + 0x5cd2) = 1;
      }
      uVar1 = 0;
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(int *)(lVar2 + (ulonglong)param_2 * 4 + 0x4f68) = param_3;
      lVar2 = lVar2 + ((ulonglong)(param_2 >> 6) + 0x15a6) * 8;
      uVar3 = (ulonglong)(param_2 >> 3) & 7;
      *(byte *)(lVar2 + uVar3) = *(byte *)(lVar2 + uVar3) | (byte)(1 << ((ulonglong)param_2 & 7));
    }
  }
  return uVar1;
}

