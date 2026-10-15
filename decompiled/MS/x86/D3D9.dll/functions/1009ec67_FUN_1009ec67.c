/*
 * FUN_1009ec67 at 1009ec67
 * undefined4 __stdcall FUN_1009ec67(int param_1)
 * Address ranges: 1009ec67-1009ecb0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1009ec67(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1;
  uVar2 = 0x8876086c;
  if (*(char *)(param_1 + -2) != '\0') {
    FUN_10003e40((void *)((int)&param_1 + 3),
                 (byte)(*(uint *)(*(int *)(param_1 + -0x34) + 0xdd0) >> 2) & 1);
    uVar2 = FUN_1001531c(iVar1 + -0x90);
    FUN_10003e89((char *)((int)&param_1 + 3));
  }
  return uVar2;
}

