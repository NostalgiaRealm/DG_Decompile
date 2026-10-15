/*
 * FUN_10097582 at 10097582
 * undefined4 __stdcall FUN_10097582(int param_1, undefined4 param_2)
 * Address ranges: 10097582-100975ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10097582(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    FUN_10095e1a(iVar1 + -0x66b4);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4);
    *(undefined4 *)(iVar1 + 0x4fb4) = param_2;
    *(undefined1 *)(iVar1 + 0xac21) = 1;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

