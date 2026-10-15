/*
 * FUN_1801dac88 at 1801dac88
 * undefined FUN_1801dac88(void)
 * Address ranges: 1801dac88-1801dace3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801dac88(longlong param_1,uint param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x8876086c;
  if (((param_2 < 0x10 && param_3 != 0) && param_3 < 0xe) && param_4 != (undefined4 *)0x0) {
    if ((&DAT_18024d810)
        [-(ulonglong)(param_3 >> 0x1f) & 0xfffffff800000000 | (ulonglong)param_3 << 3] == '\0') {
      *param_4 = 0;
    }
    else {
      uVar1 = 0;
      *param_4 = *(undefined4 *)
                  ((-(ulonglong)(param_3 >> 0x1f) & 0xfffffffc00000000 | (ulonglong)param_3 << 2) +
                   ((ulonglong)param_2 * 8 - (ulonglong)param_2) * 8 + param_1 + 0x298);
    }
  }
  return uVar1;
}

