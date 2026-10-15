/*
 * FUN_1801b7e80 at 1801b7e80
 * undefined FUN_1801b7e80(void)
 * Address ranges: 1801b7e80-1801b7f2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered candidate function at an already-decoded orphan instruction range referenced by aligned pointer(s) in non-executable PE data. Exact pointer locations are in inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences; instruction bytes unchanged.
 */

/* Recovered candidate function at an already-decoded orphan instruction range referenced by aligned
   pointer(s) in non-executable PE data. Exact pointer locations are in
   inventory/hybrid_orphan_pointer_evidence.json. Entry/body/types are static-analysis inferences;
   instruction bytes unchanged. */

void FUN_1801b7e80(float param_1,float param_2,longlong param_3,uint param_4,longlong param_5,
                  longlong param_6,longlong param_7)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar4 = (float)*(uint *)(*(longlong *)(param_3 + -0x10) + 0xc) / 100.0;
  if (param_4 != 0) {
    uVar2 = 0;
    do {
      uVar1 = (int)uVar2 + 1;
      uVar3 = (ulonglong)(uint)(int)(*(float *)(param_5 + uVar2 * 4) * 255.0);
      fVar5 = *(float *)(param_7 + uVar3 * 0xc) * fVar4;
      fVar6 = param_1;
      if (param_1 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar7 = param_2;
      if (fVar5 <= param_2) {
        fVar7 = fVar6;
      }
      *(float *)(param_6 + uVar2 * 0xc) = fVar7;
      fVar5 = *(float *)(param_7 + 4 + uVar3 * 0xc) * fVar4;
      fVar6 = param_1;
      if (param_1 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar7 = param_2;
      if (fVar5 <= param_2) {
        fVar7 = fVar6;
      }
      *(float *)(param_6 + 4 + uVar2 * 0xc) = fVar7;
      fVar5 = *(float *)(param_7 + 8 + uVar3 * 0xc) * fVar4;
      fVar6 = param_1;
      if (param_1 <= fVar5) {
        fVar6 = fVar5;
      }
      fVar7 = param_2;
      if (fVar5 <= param_2) {
        fVar7 = fVar6;
      }
      *(float *)(param_6 + 8 + uVar2 * 0xc) = fVar7;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < param_4);
  }
  return;
}

