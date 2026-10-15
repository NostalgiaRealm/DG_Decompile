/*
 * FUN_10071f22 at 10071f22
 * undefined __fastcall FUN_10071f22(int param_1)
 * Address ranges: 10071f22-10071f94
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10071f22(int param_1)

{
  int *piVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(param_1 + 0x24);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + -0x80) + 0x4a0);
  EnterCriticalSection(lpCriticalSection);
  bVar2 = FUN_1009594d(piVar1);
  if ((*(char *)((int)piVar1 + 0xd5e) == '\0') && (bVar2 == (bool)*(char *)((int)piVar1 + 0xd5d))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    FUN_100ac680(*(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 +
                 *(int *)(param_1 + -0x80) + 0x1880);
    FUN_10096bdc(*(void **)(param_1 + -0x80),*(int **)(param_1 + 0x24),(int *)0x1);
  }
  return;
}

