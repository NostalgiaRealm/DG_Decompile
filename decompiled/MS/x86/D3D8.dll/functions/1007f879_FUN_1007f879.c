/*
 * FUN_1007f879 at 1007f879
 * undefined4 __stdcall FUN_1007f879(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1007f879-1007f8e3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f879(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (((uVar1 != 0) && (uVar1 < 0xae)) && (param_3 != (undefined4 *)0x0)) {
    if (*(char *)(*(int *)(param_1 + -0x58dc) + uVar1 * 8) == '\0') {
      *param_3 = 0;
    }
    else {
      uVar2 = 0;
      *param_3 = *(undefined4 *)(param_1 + -0x5654 + uVar1 * 4);
    }
  }
  FUN_10003881((char *)((int)&param_2 + 3));
  return uVar2;
}

