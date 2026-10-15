/*
 * FUN_1800a04f0 at 1800a04f0
 * undefined FUN_1800a04f0(void)
 * Address ranges: 1800a04f0-1800a05a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800a04f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  longlong local_30 [2];
  
  *(undefined4 *)(param_1 + 0x1cedc) = 0x3f800000;
  if (*(int *)(*(longlong *)(param_1 + 8) + 0xd6) != 0) {
    (*__imp_KERNEL32_dll_QueryPerformanceCounter)(local_30);
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

