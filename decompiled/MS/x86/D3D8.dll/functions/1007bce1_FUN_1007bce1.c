/*
 * FUN_1007bce1 at 1007bce1
 * undefined4 __stdcall FUN_1007bce1(int param_1, uint param_2, int param_3)
 * Address ranges: 1007bce1-1007bd41
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bce1(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  uVar3 = 0x8876086c;
  if (param_3 != 0) {
    uVar1 = FUN_10005b1b(param_2);
    uVar3 = extraout_ECX;
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_10005b4d(param_2);
      FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
      FUN_100157ac((void *)(param_1 + -0x58e0),uVar2,param_3);
      FUN_10003881((char *)((int)&param_2 + 3));
      uVar3 = 0;
    }
  }
  return uVar3;
}

