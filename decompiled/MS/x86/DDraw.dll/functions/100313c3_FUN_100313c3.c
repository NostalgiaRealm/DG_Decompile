/*
 * FUN_100313c3 at 100313c3
 * undefined4 __fastcall FUN_100313c3(int param_1)
 * Address ranges: 100313c3-10031402
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_100313c3(int param_1)

{
  int iVar1;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 0x50);
  if ((iVar1 == 0x31545844) || (iVar1 == 0x32545844)) {
LAB_100313fd:
    uStack_4 = 4;
  }
  else {
    if (iVar1 != 0x32595559) {
      if (((iVar1 == 0x33545844) || (iVar1 == 0x34545844)) || (iVar1 == 0x35545844))
      goto LAB_100313fd;
      if (iVar1 != 0x59565955) {
        return 0;
      }
    }
    uStack_4 = 2;
  }
  return uStack_4;
}

