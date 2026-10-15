/*
 * FUN_180022888 at 180022888
 * undefined __fastcall FUN_180022888(longlong param_1, longlong param_2)
 * Address ranges: 180022888-180022905
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022888(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  LARGE_INTEGER local_res8;
  
  lVar1 = *(longlong *)(param_1 + 0x3180);
  QueryPerformanceCounter(&local_res8);
  FUN_1800203f0(lVar1,&local_res8.QuadPart);
  uVar4 = 1;
  *(int *)(lVar1 + 0xc0) =
       (int)((local_res8.QuadPart - *(longlong *)(lVar1 + 0x20)) / *(longlong *)(lVar1 + 0x18));
  do {
    uVar2 = uVar4 - 1;
    uVar3 = (ulonglong)uVar4;
    uVar4 = uVar4 + 1;
    *(int *)(param_2 + (ulonglong)uVar2 * 4) =
         *(int *)(lVar1 + 0xc0 + (ulonglong)uVar2 * 0x10) - *(int *)(lVar1 + 0xc0 + uVar3 * 0x10);
  } while (uVar4 < 7);
  return;
}

