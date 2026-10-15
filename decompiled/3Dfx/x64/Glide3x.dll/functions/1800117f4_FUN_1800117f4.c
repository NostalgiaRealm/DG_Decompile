/*
 * FUN_1800117f4 at 1800117f4
 * undefined __fastcall FUN_1800117f4(longlong param_1, uint param_2, longlong param_3, longlong param_4, longlong param_5, float param_6, float param_7)
 * Address ranges: 1800117f4-1800118d1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800117f4(longlong param_1,uint param_2,longlong param_3,longlong param_4,longlong param_5,
                  float param_6,float param_7)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar3 = 0;
  fVar6 = (float)*(uint *)(*(longlong *)(param_1 + -0x29e0) + 0xc) / 100.0;
  if (param_2 != 0) {
    do {
      uVar1 = (longlong)(*(float *)(param_3 + uVar3 * 4) * 255.0) & 0xffffffff;
      fVar5 = fVar6 * *(float *)(param_5 + uVar1 * 0xc);
      fVar4 = param_7;
      if ((fVar5 <= param_7) && (fVar4 = param_6, param_6 <= fVar5)) {
        fVar4 = fVar5;
      }
      *(float *)(param_4 + uVar3 * 0xc) = fVar4;
      fVar5 = fVar6 * *(float *)(param_5 + 4 + uVar1 * 0xc);
      fVar4 = param_7;
      if ((fVar5 <= param_7) && (fVar4 = param_6, param_6 <= fVar5)) {
        fVar4 = fVar5;
      }
      *(float *)(param_4 + 4 + uVar3 * 0xc) = fVar4;
      fVar5 = fVar6 * *(float *)(param_5 + 8 + uVar1 * 0xc);
      fVar4 = param_7;
      if ((fVar5 <= param_7) && (fVar4 = param_6, param_6 <= fVar5)) {
        fVar4 = fVar5;
      }
      uVar2 = (int)uVar3 + 1;
      *(float *)(param_4 + 8 + uVar3 * 0xc) = fVar4;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_2);
  }
  return;
}

