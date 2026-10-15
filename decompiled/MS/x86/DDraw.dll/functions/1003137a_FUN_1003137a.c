/*
 * FUN_1003137a at 1003137a
 * undefined4 __fastcall FUN_1003137a(int param_1)
 * Address ranges: 1003137a-100313c2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1003137a(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if (iVar1 == 0x31545844) {
    return 8;
  }
  if (iVar1 == 0x32545844) {
    return 0x10;
  }
  if (iVar1 != 0x32595559) {
    if (iVar1 == 0x33545844) {
      return 0x10;
    }
    if (iVar1 == 0x34545844) {
      return 0x10;
    }
    if (iVar1 == 0x35545844) {
      return 0x10;
    }
    if (iVar1 != 0x59565955) {
      return 0;
    }
  }
  return 4;
}

