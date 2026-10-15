/*
 * FUN_10079be5 at 10079be5
 * undefined __stdcall FUN_10079be5(void)
 * Address ranges: 10079be5-10079c6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10079be5(void)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  
  for (; DAT_100ba2a8 != 0; DAT_100ba2a8 = DAT_100ba2a8 + -1) {
    iVar1 = *(int *)(DAT_100ba2ac + -4 + DAT_100ba2a8 * 4);
    if (DAT_100ba2a8 == 1) {
      FUN_10023a2f();
      uVar3 = 0;
      if (*(int *)(iVar1 + 0x4c) != 0) {
        do {
          if ((int *)(&DAT_100ba720)[uVar3 * 0x8a] != (int *)0x0) {
            (**(code **)(*(int *)(&DAT_100ba720)[uVar3 * 0x8a] + 0x14))();
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(iVar1 + 0x4c));
      }
      pvVar2 = DAT_100ba2b4;
      if (DAT_100ba2b4 != (void *)0x0) {
        FUN_100a9ec5(DAT_100ba2b4,'\0');
        TerminateThread(*(HANDLE *)((int)pvVar2 + 0x310),0);
        FUN_100a9816((int)pvVar2);
      }
    }
  }
  DAT_100ba2a8 = 0;
  return;
}

