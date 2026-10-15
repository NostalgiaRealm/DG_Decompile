/*
 * FUN_10090d36 at 10090d36
 * int __stdcall FUN_10090d36(int param_1, uint param_2, int param_3, int param_4, int param_5)
 * Address ranges: 10090d36-10090d87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_10090d36(int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *this;
  int extraout_EDX;
  int iVar2;
  
  iVar2 = -0x7789f794;
  if (param_2 < *(uint *)(param_1 + -0x24)) {
    uVar1 = FUN_100026b9(param_3);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_100026d2((void *)(extraout_EDX + -0x70),param_3);
      if ((char)uVar1 != '\0') {
        iVar2 = FUN_100905dd(this,param_3,param_4,param_5);
        if (iVar2 == -0x7789f794) {
          iVar2 = -0x7789f796;
        }
      }
    }
  }
  return iVar2;
}

