/*
 * FUN_180020f4c at 180020f4c
 * int __fastcall FUN_180020f4c(longlong param_1)
 * Address ranges: 180020f4c-180020fb6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180020f4c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  LARGE_INTEGER local_res10 [3];
  
  QueryPerformanceCounter(local_res10);
  iVar2 = 0;
  uVar1 = 0;
  do {
    if (local_res10[0].QuadPart <=
        *(longlong *)(param_1 + 0x48 + (ulonglong)((*(int *)(param_1 + 0x40) + uVar1) % 7) * 0x10))
    {
      iVar2 = iVar2 + 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 7);
  return iVar2;
}

