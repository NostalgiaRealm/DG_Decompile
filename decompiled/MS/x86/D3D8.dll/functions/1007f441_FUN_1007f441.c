/*
 * FUN_1007f441 at 1007f441
 * undefined4 __stdcall FUN_1007f441(int param_1, undefined4 * param_2)
 * Address ranges: 1007f441-1007f4a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007f441(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_2;
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
    if (*(int *)(param_1 + -0x58b8) == 0) {
      *puVar1 = 0;
      uVar2 = 0x88760866;
    }
    else {
      FUN_100810e8(*(int *)(param_1 + -0x58b8) + 0x5c,0x100af390,puVar1);
      uVar2 = 0;
    }
    FUN_10003881((char *)((int)&param_2 + 3));
  }
  return uVar2;
}

