/*
 * FUN_1009a946 at 1009a946
 * undefined4 __stdcall FUN_1009a946(int param_1, undefined4 * param_2)
 * Address ranges: 1009a946-1009a9a8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009a946(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = param_2;
  uVar2 = 0x8876086c;
  if (param_2 != (undefined4 *)0x0) {
    FUN_10003e40((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
    if (*(int *)(param_1 + -0x668c) == 0) {
      *puVar1 = 0;
      uVar2 = 0x88760866;
    }
    else {
      uVar2 = FUN_1009d053(*(int *)(param_1 + -0x668c) + 0x5c,0x100d1370,puVar1);
    }
    FUN_10003e89((char *)((int)&param_2 + 3));
  }
  return uVar2;
}

