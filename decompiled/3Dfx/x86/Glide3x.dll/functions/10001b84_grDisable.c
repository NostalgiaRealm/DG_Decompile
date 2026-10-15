/*
 * grDisable at 10001b84
 * undefined __stdcall grDisable(int param_1)
 * Address ranges: 10001b84-10001bcc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grDisable,4
 */

/* __stdcall grDisable,4 */

void grDisable(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  
                    /* 0x1b84  25  _grDisable@4 */
  puVar2 = FUN_1000504c();
  bVar1 = FUN_100050f9((int)puVar2);
  if (bVar1) {
    if (param_1 == 4) {
      puVar2[0x58] = 0;
    }
    else if (param_1 == 6) {
      uVar3 = FUN_10005e0b((int)puVar2);
      if ((&DAT_1005b1b9)[uVar3 * 0x18] != '\0') {
        FUN_100051da((int)puVar2);
      }
    }
  }
  return;
}

