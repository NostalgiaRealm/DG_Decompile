/*
 * FUN_1800fd3f0 at 1800fd3f0
 * undefined FUN_1800fd3f0(void)
 * Address ranges: 1800edd90-1800ede13;1800fd3f0-1800fd40b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1800fd3f0(longlong param_1,ulonglong param_2,uint param_3)

{
  ulonglong *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_1 + 8) + (param_2 & 0xffffffff) * 0x1ac0;
  if ((param_3 != 0xffffffff) && (uVar2 = *(uint *)(lVar6 + 0x2340), uVar2 != 0)) {
    uVar8 = 0;
    uVar4 = uVar2;
    do {
      uVar3 = uVar4 + uVar8 >> 1;
      uVar5 = (ulonglong)uVar3;
      uVar7 = *(ulonglong *)(*(longlong *)(lVar6 + 0x2338) + uVar5 * 0x18);
      if (uVar7 <= param_3) {
        if (param_3 <= uVar7) break;
        uVar8 = uVar3 + 1;
        uVar5 = (ulonglong)(uVar3 + 1);
        uVar3 = uVar4;
      }
      uVar4 = uVar3;
    } while (uVar4 != uVar8);
    if ((((uint)uVar5 != uVar2) &&
        (puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0x2338) + uVar5 * 0x18),
        *puVar1 == (ulonglong)param_3)) && (puVar1 = puVar1 + 2, puVar1 != (ulonglong *)0x0)) {
      *(undefined1 *)(*puVar1 + 0x20) = 0;
    }
  }
  return;
}

