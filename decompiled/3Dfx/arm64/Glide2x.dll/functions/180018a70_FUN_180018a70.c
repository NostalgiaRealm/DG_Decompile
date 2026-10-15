/*
 * FUN_180018a70 at 180018a70
 * ulonglong __cdecl FUN_180018a70(uint param_1, ulonglong param_2, uint param_3, int param_4, ulonglong param_5)
 * Address ranges: 180018a70-180018b17
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180018a70(uint param_1,ulonglong param_2,uint param_3,int param_4,ulonglong param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  ulonglong extraout_x1;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint extraout_w11;
  longlong extraout_x12;
  longlong extraout_x13;
  longlong extraout_x14;
  
  uVar5 = (ulonglong)(uint)param_4;
  uVar7 = param_2 & 0xffffffff;
  uVar8 = param_5 & 0xffffffff;
  uVar6 = 0;
  if ((int)param_3 <= (int)param_2) {
    uVar4 = (ulonglong)(param_1 & 3);
    do {
      bVar3 = FUN_1800189f0(param_3,(int)uVar4);
      if (bVar3) {
        uVar9 = *(uint *)(extraout_x13 + (longlong)(int)param_3 * 4);
        uVar2 = uVar9 >> (ulonglong)(*(byte *)(extraout_x12 + (int)uVar5) & 0x1f);
        if (uVar2 == 0) {
          uVar2 = 1;
        }
        uVar1 = uVar9;
        if (extraout_w11 < 3) {
          uVar1 = uVar2;
          uVar2 = uVar9;
        }
        if ((uint)uVar8 < 0x11) {
          uVar9 = (uint)*(byte *)(extraout_x14 + (int)(uint)uVar8);
        }
        else {
          uVar9 = 0;
        }
        uVar6 = (ulonglong)
                ((int)uVar6 + ((uVar2 | uVar1 << 0x10) >> 0x10) * (uVar2 & 0xffff) * uVar9);
      }
      param_3 = param_3 + 1;
      uVar4 = extraout_x1;
    } while ((int)param_3 <= (int)uVar7);
  }
  return uVar6 & 0xffffffff;
}

