/*
 * FUN_1007bf19 at 1007bf19
 * int __stdcall FUN_1007bf19(int param_1)
 * Address ranges: 1007bf19-1007bfa3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1007bf19(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  iVar3 = -0x7789f794;
  if (*(char *)(iVar1 + -0x56c0) == '\0') {
    uVar2 = FUN_1001438d(iVar1 + -0x58e0);
    *(uint *)(iVar1 + -0x56c4) = uVar2;
    iVar3 = -0x7ff8fff2;
    if (uVar2 != 0xffffffff) {
      *(undefined1 *)(iVar1 + -0x56c0) = 1;
      iVar3 = 0;
    }
    if (-1 < iVar3) {
      FUN_100ada8e((int *)(iVar1 + -0x530),0,0x400);
      *(undefined4 *)(iVar1 + -0x130) = 0;
      *(undefined4 *)(iVar1 + -300) = 0;
    }
  }
  FUN_10003881((char *)((int)&param_1 + 3));
  return iVar3;
}

