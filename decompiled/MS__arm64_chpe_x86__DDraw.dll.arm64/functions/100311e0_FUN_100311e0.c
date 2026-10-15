/*
 * FUN_100311e0 at 100311e0
 * undefined FUN_100311e0(void)
 * Address ranges: 100311e0-100312af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100311e0(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong local_30 [2];
  
  *(undefined4 *)(param_1 + 0xcecc) = 0x3f800000;
  if (*(int *)(*(int *)(param_1 + 4) + 0xd6) != 0) {
    (*(code *)PTR_FUN_100ba114)(local_30);
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (lVar1 == 0) {
      *(longlong *)(param_1 + 0x80) = local_30[0];
      lVar1 = local_30[0];
    }
    lVar1 = (local_30[0] -
            (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0xd6) * *(longlong *)(param_1 + 0x78)) -
            lVar1;
    if (0 < lVar1) {
      lVar2 = *(longlong *)(param_1 + 0x78) / 2;
      if (lVar1 < lVar2) {
        fVar3 = 1.0 - (float)((double)lVar1 / (double)lVar2);
      }
      else {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0xcecc) = fVar3;
    }
  }
  return *(float *)(param_1 + 0xcecc) != 0.0;
}

