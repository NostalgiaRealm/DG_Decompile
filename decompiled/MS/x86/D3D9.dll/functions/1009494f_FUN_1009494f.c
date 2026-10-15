/*
 * FUN_1009494f at 1009494f
 * undefined4 __stdcall FUN_1009494f(int param_1, uint param_2, int param_3)
 * Address ranges: 1009494f-100949af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009494f(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  uVar3 = 0x8876086c;
  if (param_3 != 0) {
    uVar1 = FUN_10006406(param_2);
    uVar3 = extraout_ECX;
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_10006438(param_2);
      FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
      FUN_100198e0((void *)(param_1 + -0x66b4),uVar2,param_3);
      FUN_10003e89((char *)((int)&param_2 + 3));
      uVar3 = 0;
    }
  }
  return uVar3;
}

