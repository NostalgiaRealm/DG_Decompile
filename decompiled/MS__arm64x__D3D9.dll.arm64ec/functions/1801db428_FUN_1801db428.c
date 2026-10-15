/*
 * FUN_1801db428 at 1801db428
 * undefined FUN_1801db428(void)
 * Address ranges: 1801db428-1801db44b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801db428(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x5c50);
  if (lVar3 == 0) {
    *param_2 = 0;
    return 0;
  }
  uVar4 = 0;
  do {
    iVar2 = FUN_180222c00(&DAT_1802292c8,&DAT_18022ed18 + uVar4 * 0x10,0x10);
    if (iVar2 == 0) {
      iVar2 = FUN_1801042e0(lVar3 + 8);
      *param_2 = *(undefined8 *)(lVar3 + 0x10);
      if (iVar2 == 1) {
        FUN_1801042e0(*(longlong *)(lVar3 + 0x18) + 0x6844);
      }
      return 0;
    }
    uVar1 = (int)uVar4 + 1;
    uVar4 = (ulonglong)uVar1;
  } while (uVar1 < 2);
  return 0x80004002;
}

