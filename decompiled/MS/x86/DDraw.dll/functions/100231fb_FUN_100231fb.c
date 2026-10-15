/*
 * FUN_100231fb at 100231fb
 * undefined4 __stdcall FUN_100231fb(int param_1, int param_2, int param_3)
 * Address ranges: 100231fb-1002324c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100231fb(int param_1,int param_2,int param_3)

{
  void *this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x80070057;
  if ((param_3 == 0) && (uVar2 = 0x88760005, *(char *)(param_1 + 0x5c) == '\0')) {
    uVar2 = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined1 *)(param_1 + 0x5c) = 1;
    if (param_2 != 0) {
      this = *(void **)(param_2 + 4);
      *(void **)(param_1 + 0x58) = this;
      uVar1 = FUN_1002579a(this,param_1);
      if ((char)uVar1 == '\0') {
        uVar2 = 0x80004005;
        *(undefined1 *)(param_1 + 0x5c) = 0;
      }
    }
  }
  return uVar2;
}

