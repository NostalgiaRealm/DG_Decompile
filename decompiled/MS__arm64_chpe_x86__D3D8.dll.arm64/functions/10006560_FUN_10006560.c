/*
 * FUN_10006560 at 10006560
 * undefined FUN_10006560(void)
 * Address ranges: 10006560-100065f3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10006560(uint param_1)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  if (param_1 < *(uint *)(DAT_1013d014 + 0x18)) {
    iVar1 = (*(code *)PTR_FUN_10134120)();
    while (iVar1 == 0) {
      (*(code *)PTR_FUN_10134238)(auStack_40,0,0,0,0x400000);
      iVar1 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
    }
  }
  else {
    (*(code *)PTR_FUN_10134070)(DAT_1013d014);
  }
  return;
}

