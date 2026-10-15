/*
 * FUN_10001c10 at 10001c10
 * undefined FUN_10001c10(void)
 * Address ranges: 10001c10-10001ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10001c10(uint param_1)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  if (param_1 < *(uint *)(DAT_100c2958 + 0x18)) {
    iVar1 = (*(code *)PTR_FUN_100ba150)();
    while (iVar1 == 0) {
      (*(code *)PTR_FUN_100ba270)(auStack_40,0,0,0,0x400000);
      iVar1 = (*(code *)PTR_FUN_100ba150)(DAT_100c2958);
    }
  }
  else {
    (*(code *)PTR_FUN_100ba0a0)(DAT_100c2958);
  }
  return;
}

