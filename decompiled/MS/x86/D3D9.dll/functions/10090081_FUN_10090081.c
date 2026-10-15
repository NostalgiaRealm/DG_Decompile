/*
 * FUN_10090081 at 10090081
 * undefined __stdcall FUN_10090081(void)
 * Address ranges: 10090081-1009010a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10090081(void)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  for (; DAT_100dea68 != 0; DAT_100dea68 = DAT_100dea68 + -1) {
    iVar1 = *(int *)(DAT_100dea6c + -4 + DAT_100dea68 * 4);
    if (DAT_100dea68 == 1) {
      FUN_1002b0a1();
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x4c) != 0) {
        do {
          if ((int *)(&DAT_100df2e8)[uVar3 * 0x8a] != (int *)0x0) {
            (**(code **)(*(int *)(&DAT_100df2e8)[uVar3 * 0x8a] + 0x14))();
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar1 + 0x4c));
      }
      pvVar2 = DAT_100dea74;
      if (DAT_100dea74 != (void *)0x0) {
        FUN_100cc794(DAT_100dea74,'\0');
        TerminateThread(*(HANDLE *)((int)pvVar2 + 0x310),0);
        FUN_100cc0e5((int)pvVar2);
      }
    }
  }
  DAT_100dea68 = 0;
  return;
}

