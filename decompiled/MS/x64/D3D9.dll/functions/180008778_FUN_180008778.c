/*
 * FUN_180008778 at 180008778
 * undefined8 __fastcall FUN_180008778(longlong param_1, uint * param_2)
 * Address ranges: 180008778-1800088b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180008778(longlong param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  float fVar9;
  uint local_res10 [2];
  
  uVar8 = 0x8876086c;
  if (param_2 != (uint *)0x0) {
    FUN_1800fa780(local_res10);
    if (*(longlong *)(param_1 + 0x30) != 0) {
      lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 8);
      uVar2 = *param_2;
      uVar3 = *(uint *)(lVar7 + 0x8c);
      if ((uVar2 < uVar3) && (uVar4 = param_2[2], uVar2 + uVar4 <= uVar3)) {
        uVar3 = *(uint *)(lVar7 + 0x90);
        uVar5 = param_2[1];
        if ((uVar5 < uVar3) && (uVar6 = param_2[3], uVar5 + uVar6 <= uVar3)) {
          fVar1 = (float)param_2[4];
          fVar9 = (float)param_2[5];
          if ((float)param_2[5] <= fVar1) {
            fVar9 = 1.0;
            if (fVar1 + 0.001 <= 1.0) {
              fVar9 = fVar1 + 0.001;
            }
          }
          if (*(char *)(param_1 + 0x40c) == '\0') {
            *(float *)(param_1 + 0x68) = fVar1;
            *(float *)(param_1 + 0x6c) = fVar9;
            *(uint *)(param_1 + 0x58) = uVar2;
            *(uint *)(param_1 + 0x5c) = uVar5;
            *(uint *)(param_1 + 0x60) = uVar4;
            *(uint *)(param_1 + 100) = uVar6;
            (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))();
          }
          else {
            lVar7 = *(longlong *)
                     (*(longlong *)(param_1 + 0x3f8) + (ulonglong)*(uint *)(param_1 + 0x408) * 8);
            *(float *)(lVar7 + 0x4a4c) = fVar1;
            *(float *)(lVar7 + 0x4a50) = fVar9;
            *(uint *)(lVar7 + 0x4a3c) = uVar2;
            *(uint *)(lVar7 + 0x4a40) = uVar5;
            *(uint *)(lVar7 + 0x4a44) = uVar4;
            *(uint *)(lVar7 + 0x4a48) = uVar6;
            *(undefined1 *)(lVar7 + 0xace8) = 1;
          }
          uVar8 = 0;
        }
      }
    }
    FUN_1800fa7bc();
  }
  return uVar8;
}

