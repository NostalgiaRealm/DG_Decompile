/*
 * FUN_1801d9ff0 at 1801d9ff0
 * undefined FUN_1801d9ff0(void)
 * Address ranges: 1801d9ff0-1801da037
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8
FUN_1801d9ff0(longlong param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined8 param_5
             )

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 < *(uint *)(param_1 + -0x5a00)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + -0x5a08) + (ulonglong)param_2 * 8);
    lVar1 = 0;
    if (lVar3 != 0) {
      lVar1 = lVar3 + -8;
    }
    uVar2 = FUN_1801e1c80(lVar1,param_3,param_4,param_5);
    return uVar2;
  }
  return 0x8876086c;
}

