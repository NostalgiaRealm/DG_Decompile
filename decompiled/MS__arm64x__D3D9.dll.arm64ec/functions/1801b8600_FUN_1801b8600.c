/*
 * FUN_1801b8600 at 1801b8600
 * undefined FUN_1801b8600(void)
 * Address ranges: 1801b8600-1801b86af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1801b8600(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong local_30 [2];
  
  *(undefined4 *)(param_1 + 0x1cedc) = 0x3f800000;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xd6) != 0) {
    thunk_FUN_18022375c(local_30);
    lVar2 = *(longlong *)(param_1 + 0x98);
    if (*(longlong *)(param_1 + 0x98) == 0) {
      *(longlong *)(param_1 + 0x98) = local_30[0];
      lVar2 = local_30[0];
    }
    lVar2 = (local_30[0] -
            (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xd6) * *(longlong *)(param_1 + 0x90))
            - lVar2;
    if (0 < lVar2) {
      lVar1 = *(longlong *)(param_1 + 0x90) / 2;
      if (lVar2 < lVar1) {
        fVar3 = 1.0 - (float)((double)lVar2 / (double)lVar1);
      }
      else {
        fVar3 = 0.0;
      }
      *(float *)(param_1 + 0x1cedc) = fVar3;
    }
  }
  return *(float *)(param_1 + 0x1cedc) != 0.0;
}

