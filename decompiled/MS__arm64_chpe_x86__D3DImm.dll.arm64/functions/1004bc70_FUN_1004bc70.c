/*
 * FUN_1004bc70 at 1004bc70
 * undefined FUN_1004bc70(void)
 * Address ranges: 1004bc70-1004bd03
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1004bc70(uint param_1)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  if (param_1 < *(uint *)(DAT_100a4c4c + 0x18)) {
    iVar1 = (*(code *)PTR_FUN_100a1078)();
    while (iVar1 == 0) {
      (*(code *)PTR_FUN_100a108c)(auStack_40,0,0,0,0x400000);
      iVar1 = (*(code *)PTR_FUN_100a1078)(DAT_100a4c4c);
    }
  }
  else {
    (*(code *)PTR_FUN_100a1014)(DAT_100a4c4c);
  }
  return;
}

