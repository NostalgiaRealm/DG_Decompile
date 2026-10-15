/*
 * grEnable at 10001b3b
 * undefined __stdcall grEnable(int param_1)
 * Address ranges: 10001b3b-10001b83
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grEnable,4
 */

/* __stdcall grEnable,4 */

void grEnable(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  
                    /* 0x1b3b  33  _grEnable@4 */
  puVar2 = FUN_1000504c();
  bVar1 = FUN_100050f9((int)puVar2);
  if (bVar1) {
    if (param_1 == 4) {
      puVar2[0x58] = 1;
    }
    else if (param_1 == 6) {
      uVar3 = FUN_10005e0b((int)puVar2);
      if ((&DAT_1005b1b9)[uVar3 * 0x18] != '\0') {
        FUN_10005186((int)puVar2);
      }
    }
  }
  return;
}

