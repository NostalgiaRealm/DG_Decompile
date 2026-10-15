/*
 * FUN_10031403 at 10031403
 * undefined4 __fastcall FUN_10031403(int param_1)
 * Address ranges: 10031403-10031443
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031403(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 == 0x31545844) || (iVar1 == 0x32545844)) {
LAB_1003143e:
    uVar2 = 4;
  }
  else {
    if (iVar1 != 0x32595559) {
      if (((iVar1 == 0x33545844) || (iVar1 == 0x34545844)) || (iVar1 == 0x35545844))
      goto LAB_1003143e;
      if (iVar1 != 0x59565955) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

