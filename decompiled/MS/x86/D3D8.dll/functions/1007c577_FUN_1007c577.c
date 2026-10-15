/*
 * FUN_1007c577 at 1007c577
 * undefined4 __stdcall FUN_1007c577(int param_1, int param_2)
 * Address ranges: 1007c577-1007c5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c577(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  if (*(char *)(iVar1 + -0x56c0) == '\0') {
    FUN_10006197((void *)(iVar1 + -0x58e0),param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x56d0) + *(int *)(iVar1 + -0x56c4) * 4);
    *(int *)(iVar1 + 0x9330) = param_2;
    *(undefined1 *)(iVar1 + 0x93a3) = 1;
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return 0;
}

