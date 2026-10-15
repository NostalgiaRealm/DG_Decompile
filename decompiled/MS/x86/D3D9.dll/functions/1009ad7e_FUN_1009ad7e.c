/*
 * FUN_1009ad7e at 1009ad7e
 * undefined4 __stdcall FUN_1009ad7e(int param_1, uint param_2, undefined4 * param_3)
 * Address ranges: 1009ad7e-1009ade8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ad7e(int param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2;
  FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = 0x8876086c;
  if (((uVar1 != 0) && (uVar1 < 0xd2)) && (param_3 != (undefined4 *)0x0)) {
    if (*(char *)(*(int *)(param_1 + -0x66b0) + uVar1 * 8) == '\0') {
      *param_3 = 0;
    }
    else {
      uVar2 = 0;
      *param_3 = *(undefined4 *)(param_1 + -0x6284 + uVar1 * 4);
    }
  }
  FUN_10003e89((char *)((int)&param_2 + 3));
  return uVar2;
}

