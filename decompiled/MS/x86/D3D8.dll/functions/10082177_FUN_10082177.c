/*
 * FUN_10082177 at 10082177
 * undefined4 __stdcall FUN_10082177(int param_1)
 * Address ranges: 10082177-100821c0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10082177(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  if (*(char *)(param_1 + -2) != '\0') {
    FUN_10003838((void *)((int)&param_1 + 3),
                 (byte)(*(uint *)(*(int *)(param_1 + -0x38) + 0xb0c) >> 2) & 1);
    uVar2 = FUN_1001142c(iVar1 + -0x94);
    FUN_10003881((char *)((int)&param_1 + 3));
  }
  return uVar2;
}

