/*
 * FUN_180101f60 at 180101f60
 * undefined FUN_180101f60(void)
 * Address ranges: 180101f60-180101f6f;180101fcc-180101fd3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_180101f60(longlong param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 8) - 1U < 0xfffffffffffffffe) {
    if (param_3 == 1) {
      uVar2 = 1;
    }
    else if (param_3 == 2) {
      uVar2 = 2;
    }
    else {
      uVar2 = 0;
    }
    uVar1 = (*__imp_KERNEL32_dll_SetFilePointer)(*(longlong *)(param_1 + 8),param_2,0,uVar2);
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = uVar1;
    }
    return 0;
  }
  return 1;
}

