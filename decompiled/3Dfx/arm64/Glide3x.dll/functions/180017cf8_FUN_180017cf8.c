/*
 * FUN_180017cf8 at 180017cf8
 * int __cdecl FUN_180017cf8(longlong param_1)
 * Address ranges: 180017cf8-180017d67
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_180017cf8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  LARGE_INTEGER local_20 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x3300);
  QueryPerformanceCounter(local_20);
  iVar1 = 0;
  uVar2 = 0;
  do {
    if (local_20[0].QuadPart <=
        *(longlong *)(lVar3 + 0x48 + (ulonglong)((*(int *)(lVar3 + 0x40) + uVar2) % 7) * 0x10)) {
      iVar1 = iVar1 + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 7);
  return iVar1;
}

