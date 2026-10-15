/*
 * FUN_10087ff5 at 10087ff5
 * undefined __fastcall FUN_10087ff5(int param_1)
 * Address ranges: 10087ff5-10088067
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10087ff5(int param_1)

{
  int *piVar1;
  bool bVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  piVar1 = *(int **)(param_1 + 0x24);
  lpCriticalSection = (LPCRITICAL_SECTION)(*(int *)(param_1 + -0x80) + 0x4a0);
  EnterCriticalSection(lpCriticalSection);
  bVar2 = FUN_100b7fa0(piVar1);
  if ((*(char *)((int)piVar1 + 0xd5e) == '\0') && (bVar2 == (bool)*(char *)((int)piVar1 + 0xd5d))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  LeaveCriticalSection(lpCriticalSection);
  if (bVar2) {
    FUN_100cef50(*(int *)(*(int *)(param_1 + 0x24) + 8) * 0x16c0 +
                 *(int *)(param_1 + -0x80) + 0x1880);
    FUN_100b922f(*(void **)(param_1 + -0x80),*(int **)(param_1 + 0x24),(int *)0x1);
  }
  return;
}

