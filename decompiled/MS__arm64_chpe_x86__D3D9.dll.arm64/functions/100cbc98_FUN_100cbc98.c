/*
 * FUN_100cbc98 at 100cbc98
 * undefined FUN_100cbc98(void)
 * Address ranges: 100cbc98-100cbd6b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_100cbc98(int param_1)

{
  float *pfVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  longlong local_30 [2];
  
  pfVar1 = (float *)(param_1 + 0x1cecc);
  *pfVar1 = 1.0;
  if (*(int *)(*(int *)(param_1 + 4) + 0xd6) != 0) {
    (*(code *)PTR_FUN_1016c0e4)(local_30);
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (lVar2 == 0) {
      *(longlong *)(param_1 + 0x80) = local_30[0];
      lVar2 = local_30[0];
    }
    lVar2 = (local_30[0] -
            (ulonglong)*(uint *)(*(int *)(param_1 + 4) + 0xd6) * *(longlong *)(param_1 + 0x78)) -
            lVar2;
    if (0 < lVar2) {
      lVar3 = *(longlong *)(param_1 + 0x78) / 2;
      if (lVar2 < lVar3) {
        fVar4 = 1.0 - (float)((double)lVar2 / (double)lVar3);
      }
      else {
        fVar4 = 0.0;
      }
      *pfVar1 = fVar4;
    }
  }
  return *pfVar1 != 0.0;
}

