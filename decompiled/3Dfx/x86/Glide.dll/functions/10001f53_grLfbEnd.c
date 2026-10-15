/*
 * grLfbEnd at 10001f53
 * undefined __stdcall grLfbEnd(void)
 * Address ranges: 10001f53-10001f57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbEnd,0
 */

/* __stdcall grLfbEnd,0 */

void grLfbEnd(void)

{
  undefined *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
                    /* 0x1f53  54  _grLfbEnd@0 */
  if (DAT_10059790 != '\0') {
    uVar2 = 0;
    do {
      if ((&DAT_1005977c)[uVar2] != 0) {
        uVar3 = 0;
        uVar4 = uVar2;
        puVar1 = FUN_10012ab2();
        FUN_10013b0b(puVar1,uVar3,uVar4);
        if (DAT_10059788 != uVar2) {
          (&DAT_1005977c)[uVar2] = 0;
        }
      }
      if ((&DAT_10059770)[uVar2] != 0) {
        uVar3 = 1;
        uVar4 = uVar2;
        puVar1 = FUN_10012ab2();
        FUN_10013b0b(puVar1,uVar3,uVar4);
        if (DAT_1005978c != uVar2) {
          (&DAT_10059770)[uVar2] = 0;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    DAT_10059790 = '\0';
  }
  return;
}

