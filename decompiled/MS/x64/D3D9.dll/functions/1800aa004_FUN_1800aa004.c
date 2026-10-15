/*
 * FUN_1800aa004 at 1800aa004
 * undefined8 __fastcall FUN_1800aa004(longlong param_1)
 * Address ranges: 1800aa004-1800aa0ce
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800aa004(longlong param_1)

{
  LARGE_INTEGER LVar1;
  uint7 uVar2;
  longlong lVar3;
  float fVar4;
  LARGE_INTEGER local_res8 [4];
  
  LVar1 = (LARGE_INTEGER)((LARGE_INTEGER *)(param_1 + 8))->QuadPart;
  *(undefined4 *)(param_1 + 0x1cedc) = 0x3f800000;
  if (*(int *)(LVar1.QuadPart + 0xd6) != 0) {
    QueryPerformanceCounter(local_res8);
    LVar1.QuadPart = ((LARGE_INTEGER *)(param_1 + 0x98))->QuadPart;
    if (((LARGE_INTEGER *)(param_1 + 0x98))->QuadPart == 0) {
      ((LARGE_INTEGER *)(param_1 + 0x98))->QuadPart = (LONGLONG)local_res8[0];
      LVar1 = local_res8[0];
    }
    lVar3 = (local_res8[0].QuadPart -
            (ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0xd6) * *(longlong *)(param_1 + 0x90))
            - (longlong)LVar1;
    if (0 < lVar3) {
      LVar1.QuadPart = *(longlong *)(param_1 + 0x90) / 2;
      if (lVar3 < (longlong)LVar1) {
        fVar4 = 1.0 - (float)((double)lVar3 / (double)LVar1.QuadPart);
      }
      else {
        fVar4 = 0.0;
      }
      *(float *)(param_1 + 0x1cedc) = fVar4;
    }
  }
  uVar2 = (uint7)((ulonglong)LVar1 >> 8);
  if (*(float *)(param_1 + 0x1cedc) == 0.0) {
    lVar3 = (ulonglong)uVar2 << 8;
  }
  else {
    lVar3 = CONCAT71(uVar2,1);
  }
  return lVar3;
}

