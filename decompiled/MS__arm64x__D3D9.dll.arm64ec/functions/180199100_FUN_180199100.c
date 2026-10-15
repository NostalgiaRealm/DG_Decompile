/*
 * FUN_180199100 at 180199100
 * undefined FUN_180199100(void)
 * Address ranges: 180199100-180199167
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_180199100(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(uint *)(param_1 + 0x2c) < 0xe) {
    lVar2 = *(longlong *)(param_1 + 0x110);
    lVar1 = lVar2 + (ulonglong)*(uint *)(param_1 + 0x2c) * 4;
    *param_2 = *(undefined8 *)(lVar2 + (longlong)(int)*(char *)(lVar1 + 0x58) * 8 + 0x1d2b8);
    *param_3 = *(undefined8 *)(lVar2 + (longlong)(int)*(char *)(lVar1 + 0x59) * 8 + 0x1d2b8);
    *param_4 = *(undefined8 *)(lVar2 + (longlong)(int)*(char *)(lVar1 + 0x5a) * 8 + 0x1d2b8);
    *param_5 = *(undefined8 *)(lVar2 + (longlong)(int)*(char *)(lVar1 + 0x5b) * 8 + 0x1d2b8);
  }
  return;
}

