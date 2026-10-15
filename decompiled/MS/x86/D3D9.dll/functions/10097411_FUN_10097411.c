/*
 * FUN_10097411 at 10097411
 * undefined4 __stdcall FUN_10097411(int param_1, int param_2)
 * Address ranges: 10097411-1009748e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10097411(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  iVar2 = param_2;
  if (*(char *)(iVar1 + -0x62f0) == '\0') {
    FUN_10095e5b((void *)(iVar1 + -0x66b4),param_2);
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + -0x6300) + *(int *)(iVar1 + -0x62f4) * 4);
    if (param_2 != 0) {
      LOCK();
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
      UNLOCK();
    }
    if (*(undefined4 **)(iVar1 + 0x4f9c) != (undefined4 *)0x0) {
      FUN_1009e598(*(undefined4 **)(iVar1 + 0x4f9c));
    }
    *(undefined1 *)(iVar1 + 0xac20) = 1;
    *(int *)(iVar1 + 0x4f9c) = iVar2;
  }
  FUN_10003e89((char *)((int)&param_1 + 3));
  return 0;
}

