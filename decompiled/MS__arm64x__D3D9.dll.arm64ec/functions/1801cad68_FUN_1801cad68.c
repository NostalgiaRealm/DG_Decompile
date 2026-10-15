/*
 * FUN_1801cad68 at 1801cad68
 * undefined FUN_1801cad68(void)
 * Address ranges: 1801cad68-1801cadc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined4 FUN_1801cad68(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar1 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar3 = *param_2;
    if (*(char *)(param_1 + -0x642c) == '\0') {
      *(undefined8 *)(param_1 + 0x738) = param_2[1];
      *(undefined8 *)(param_1 + 0x730) = uVar3;
      *(undefined1 *)(param_1 + 0x5cd4) = 1;
    }
    else {
      lVar2 = *(longlong *)
               (*(longlong *)(param_1 + -0x6440) + (ulonglong)*(uint *)(param_1 + -0x6430) * 8);
      *(undefined8 *)(lVar2 + 0x4ff4) = param_2[1];
      *(undefined8 *)(lVar2 + 0x4fec) = uVar3;
      *(undefined1 *)(lVar2 + 0xacfe) = 1;
    }
    uVar1 = 0;
  }
  return uVar1;
}

