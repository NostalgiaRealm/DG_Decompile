/*
 * FUN_1007bc80 at 1007bc80
 * undefined4 __stdcall FUN_1007bc80(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1007bc80-1007bce0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007bc80(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  uVar3 = 0x8876086c;
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = FUN_10005b1b(param_2);
    uVar3 = extraout_ECX;
    if ((char)uVar1 != '\0') {
      uVar2 = FUN_10005b4d(param_2);
      FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
      FUN_1001567d((void *)(param_1 + -0x58e0),uVar2,param_3);
      FUN_10003881((char *)((int)&param_2 + 3));
      uVar3 = 0;
    }
  }
  return uVar3;
}

