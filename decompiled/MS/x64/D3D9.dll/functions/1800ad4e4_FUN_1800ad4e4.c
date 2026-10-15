/*
 * FUN_1800ad4e4 at 1800ad4e4
 * undefined __fastcall FUN_1800ad4e4(void)
 * Address ranges: 1800ad4e4-1800ad58b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800ad4e4(void)

{
  longlong lVar1;
  uint uVar2;
  
  for (; DAT_180111f0c != 0; DAT_180111f0c = DAT_180111f0c + -1) {
    if (DAT_180111f0c == 1) {
      lVar1 = *DAT_180111f10;
      FUN_18002f81c();
      uVar2 = 0;
      if (*(int *)(lVar1 + 0x70) != 0) {
        do {
          if ((longlong *)(&DAT_1801128e0)[(ulonglong)uVar2 * 0x4b] != (longlong *)0x0) {
            (**(code **)(*(longlong *)(&DAT_1801128e0)[(ulonglong)uVar2 * 0x4b] + 0x28))();
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(lVar1 + 0x70));
      }
      lVar1 = DAT_180111f20;
      if (DAT_180111f20 != 0) {
        FUN_1800f83f0(DAT_180111f20,'\0');
        TerminateThread(*(HANDLE *)(lVar1 + 0x378),0);
        FUN_1800f7e0c(lVar1);
      }
    }
  }
  DAT_180111f0c = 0;
  return;
}

