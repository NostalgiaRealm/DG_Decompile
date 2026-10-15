/*
 * FUN_10090cea at 10090cea
 * undefined4 __stdcall FUN_10090cea(int param_1, uint param_2, int param_3, int param_4, int param_5, int param_6)
 * Address ranges: 10090cea-10090d35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10090cea(int param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  undefined4 uVar1;
  int extraout_ECX;
  undefined4 uVar2;
  
  uVar2 = 0x8876086c;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100026b9(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100026d2((void *)(param_1 + -0x70),extraout_ECX);
      if ((char)uVar1 != '\0') {
        uVar2 = FUN_10001f28((void *)(param_1 + -0x70),param_3,param_4,param_5,param_6);
      }
    }
  }
  return uVar2;
}

