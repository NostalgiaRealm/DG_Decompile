/*
 * FUN_10095150 at 10095150
 * undefined4 __stdcall FUN_10095150(int param_1, int param_2)
 * Address ranges: 10095150-100951b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10095150(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    FUN_10006a82((void *)(iVar1 + -0x66b4),param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4);
    *(int *)(iVar1 + 0xaba4) = param_2;
    *(undefined1 *)(iVar1 + 0xac1f) = 1;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

