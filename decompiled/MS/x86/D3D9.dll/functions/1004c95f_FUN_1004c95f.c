/*
 * FUN_1004c95f at 1004c95f
 * undefined4 __stdcall FUN_1004c95f(int param_1)
 * Address ranges: 1004c95f-1004c9bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1004c95f(int param_1)

{
  int *piVar1;
  HANDLE hThread;
  longlong lVar2;
  int nPriority;
  
  nPriority = 1;
  hThread = GetCurrentThread();
  SetThreadPriority(hThread,nPriority);
  piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x1300) + 0xc);
  while (*(char *)(param_1 + 0x80) == '\0') {
    lVar2 = FUN_1004c9bd(param_1);
    if (lVar2 != 0) {
      (**(code **)(*piVar1 + 0x24))(piVar1,lVar2,*(undefined4 *)(param_1 + 0x7c));
    }
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x7c),0xffffffff);
  }
  return 0;
}

