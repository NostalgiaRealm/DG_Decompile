/*
 * FUN_10010251 at 10010251
 * int __fastcall FUN_10010251(int param_1)
 * Address ranges: 10010251-100102a1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int __fastcall FUN_10010251(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  LARGE_INTEGER local_10;
  
  QueryPerformanceCounter(&local_10);
  iVar1 = *(int *)(param_1 + 0x38);
  iVar4 = 0;
  uVar3 = 0;
  do {
    uVar2 = (iVar1 + uVar3) % 7;
    iVar1 = *(int *)(param_1 + 0x44 + uVar2 * 0x10);
    if ((local_10.s.HighPart <= iVar1) &&
       ((local_10.s.HighPart < iVar1 ||
        (local_10.s.LowPart <= *(uint *)(param_1 + 0x40 + uVar2 * 0x10))))) {
      iVar4 = iVar4 + 1;
    }
    iVar1 = *(int *)(param_1 + 0x38);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 7);
  return iVar4;
}

