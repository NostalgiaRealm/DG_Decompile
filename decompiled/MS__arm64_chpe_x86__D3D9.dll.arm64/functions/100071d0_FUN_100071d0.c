/*
 * FUN_100071d0 at 100071d0
 * undefined FUN_100071d0(void)
 * Address ranges: 100071d0-10007263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100071d0(uint param_1)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  if (param_1 < *(uint *)(DAT_10175b54 + 0x18)) {
    iVar1 = (*(code *)PTR_FUN_1016c120)();
    while (iVar1 == 0) {
      (*(code *)PTR_FUN_1016c238)(auStack_40,0,0,0,0x400000);
      iVar1 = (*(code *)PTR_FUN_1016c120)(DAT_10175b54);
    }
  }
  else {
    (*(code *)PTR_FUN_1016c074)(DAT_10175b54);
  }
  return;
}

