/*
 * FUN_1001b765 at 1001b765
 * undefined __fastcall FUN_1001b765(int param_1)
 * Address ranges: 1001b765-1001b7d7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001b765(int param_1)

{
  int *piVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(param_1 + 0x24);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + -0x80) + 0x4a0);
  EnterCriticalSection(lpCriticalSection);
  bVar2 = FUN_100486bb(piVar1);
  if ((*(char *)((int)piVar1 + 0xd5e) == '\0') && (bVar2 == (bool)*(char *)((int)piVar1 + 0xd5d))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    FUN_100600a0(*(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 +
                 *(int *)(param_1 + -0x80) + 0x1880);
    FUN_1004994a(*(void **)(param_1 + -0x80),*(int **)(param_1 + 0x24),(int *)0x1);
  }
  return;
}

