/*
 * FUN_18001ade0 at 18001ade0
 * undefined8 __fastcall FUN_18001ade0(longlong * param_1)
 * Address ranges: 18001ade0-18001afc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18001ade0(longlong *param_1)

{
  longlong lVar1;
  undefined8 extraout_RAX;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  
  lVar1 = thunk_FUN_1800fbccc(0x1004);
  *param_1 = lVar1;
  uVar2 = 0;
  if (lVar1 != 0) {
    lVar1 = thunk_FUN_1800fbccc(0x1004);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      lVar1 = thunk_FUN_1800fbccc(0x1004);
      param_1[2] = lVar1;
      if (lVar1 != 0) {
        lVar1 = thunk_FUN_1800fbccc(0x1004);
        param_1[3] = lVar1;
        if (lVar1 != 0) {
          lVar1 = thunk_FUN_1800fbccc(0x1004);
          param_1[4] = lVar1;
          if (lVar1 != 0) {
            fVar8 = 1.0;
            uVar2 = 0;
            uVar4 = 0x400;
            do {
              fVar5 = (float)uVar2;
              dVar6 = FUN_1800f9ea0(2.0);
              dVar7 = FUN_1800f9ea0((double)(fVar5 * 0.0009765625));
              *(float *)(*param_1 + uVar2 * 4) = (float)dVar7 / (float)dVar6;
              dVar6 = FUN_1800f9c40(2.0,(double)(fVar5 * 0.0009765625));
              *(float *)(param_1[1] + uVar2 * 4) = (float)dVar6;
              *(float *)(param_1[2] + uVar2 * 4) = fVar8;
              uVar3 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar3;
              fVar8 = fVar8 + fVar8;
            } while (uVar3 <= (uint)uVar4);
            fVar8 = 1.0;
            uVar2 = 0;
            do {
              dVar6 = FUN_1800f9c40(2.7182817459106445,(double)((float)uVar2 * 0.0009765625));
              fVar5 = 1.0 / fVar8;
              fVar8 = fVar8 * 2.7182817;
              *(float *)(param_1[3] + uVar2 * 4) = 1.0 / (float)dVar6;
              *(float *)(param_1[4] + uVar2 * 4) = fVar5;
              uVar3 = (int)uVar2 + 1;
              uVar2 = (ulonglong)uVar3;
            } while (uVar3 <= (uint)uVar4);
            return CONCAT71((int7)((ulonglong)extraout_RAX >> 8),1);
          }
          FUN_1800fbcf0((LPVOID)param_1[3]);
          param_1[3] = 0;
        }
        FUN_1800fbcf0((LPVOID)param_1[2]);
        param_1[2] = 0;
      }
      FUN_1800fbcf0((LPVOID)param_1[1]);
      param_1[1] = 0;
    }
    uVar2 = FUN_1800fbcf0((LPVOID)*param_1);
    *param_1 = 0;
  }
  return uVar2 & 0xffffffffffffff00;
}

