/*
 * FUN_1009cc25 at 1009cc25
 * undefined4 __stdcall FUN_1009cc25(int param_1)
 * Address ranges: 1009cc25-1009cc55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009cc25(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if ((iVar1 == 8) || (iVar1 == 9)) {
LAB_1009cc4d:
    uStack_8 = 4;
  }
  else {
    if (iVar1 != 10) {
      if (iVar1 == 0xb) goto LAB_1009cc4d;
      if (iVar1 != 0xc) {
        return 0;
      }
    }
    uStack_8 = 8;
  }
  return uStack_8;
}

