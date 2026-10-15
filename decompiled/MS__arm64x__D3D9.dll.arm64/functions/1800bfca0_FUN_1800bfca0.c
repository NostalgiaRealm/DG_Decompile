/*
 * FUN_1800bfca0 at 1800bfca0
 * undefined FUN_1800bfca0(void)
 * Address ranges: 1800bfca0-1800bfd6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

undefined8 FUN_1800bfca0(longlong param_1,uint param_2,longlong param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  
  uVar2 = *(uint *)(param_1 + -0x5908);
  if (uVar2 != 0) {
    uVar9 = 0;
    uVar5 = uVar2;
    do {
      uVar4 = uVar5 + uVar9 >> 1;
      uVar7 = (ulonglong)uVar4;
      uVar8 = *(ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar7 * 0x18);
      if (uVar8 <= param_2) {
        if (param_2 <= uVar8) break;
        uVar9 = uVar4 + 1;
        uVar7 = (ulonglong)(uVar4 + 1);
        uVar4 = uVar5;
      }
      uVar5 = uVar4;
    } while (uVar5 != uVar9);
    if ((((uint)uVar7 != uVar2) &&
        (puVar1 = (ulonglong *)(*(longlong *)(param_1 + -0x5910) + uVar7 * 0x18),
        *puVar1 == (ulonglong)param_2)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      uVar7 = *puVar1;
      goto LAB_1800bfd28;
    }
  }
  uVar7 = param_1 - 0x5900;
LAB_1800bfd28:
  lVar6 = 0;
  do {
    lVar10 = lVar6 * 4;
    uVar3 = *(undefined4 *)(uVar7 + lVar10);
    lVar6 = lVar6 + 1;
    *(char *)(param_3 + 2 + lVar10) = (char)uVar3;
    *(char *)(param_3 + lVar10) = (char)((uint)uVar3 >> 0x10);
    *(char *)(param_3 + 1 + lVar10) = (char)((uint)uVar3 >> 8);
    *(char *)(param_3 + 3 + lVar10) = (char)((uint)uVar3 >> 0x18);
  } while (lVar6 != 0x100);
  return 0;
}

