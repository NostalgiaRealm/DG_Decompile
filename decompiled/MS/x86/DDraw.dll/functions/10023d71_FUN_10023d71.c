/*
 * FUN_10023d71 at 10023d71
 * undefined __stdcall FUN_10023d71(void)
 * Address ranges: 10023d71-10023df8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10023d71(void)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  
  for (; DAT_1006c23c != 0; DAT_1006c23c = DAT_1006c23c + -1) {
    iVar1 = *(int *)(DAT_1006c24c + -4 + DAT_1006c23c * 4);
    if (DAT_1006c23c == 1) {
      FUN_10003225();
      FUN_100032b7();
      FUN_10029afd('\x01');
      FUN_10022794();
      piVar2 = *(int **)(iVar1 + 0x118);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0x14))();
      }
      pvVar3 = DAT_1006c210;
      if (DAT_1006c210 != (void *)0x0) {
        FUN_1005dcd5(DAT_1006c210,'\0');
        TerminateThread(*(HANDLE *)((int)pvVar3 + 0x310),0);
        FUN_1005d1ab((int)pvVar3);
      }
    }
  }
  DAT_1006c23c = 0;
  return;
}

