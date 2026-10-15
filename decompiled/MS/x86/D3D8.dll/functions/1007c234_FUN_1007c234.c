/*
 * FUN_1007c234 at 1007c234
 * int __stdcall FUN_1007c234(int param_1, uint param_2)
 * Address ranges: 1007c234-1007c30c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_1007c234(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_c;
  undefined4 *local_8;
  
  uVar2 = param_2;
  FUN_10003838((void *)((int)&param_2 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  local_8 = &local_c;
  iVar3 = FUN_100047b1((void *)(param_1 + -0x58e0),uVar2);
  if (-1 < iVar3) {
    iVar1 = *(int *)(*(int *)(param_1 + -0x56d0) + -4 + uVar2 * 4);
    if (*(char *)(iVar1 + 0x93a1) != '\0') {
      *(undefined4 *)(iVar1 + 0x49b0) = *(undefined4 *)(param_1 + 0x60);
    }
    if (*(char *)(iVar1 + 0x93a0) != '\0') {
      *(undefined4 *)(iVar1 + 0x49ac) = *(undefined4 *)(param_1 + 100);
    }
    (**(code **)(**(int **)(param_1 + -0x58cc) + 0x78))(iVar1,*(undefined4 *)(iVar1 + 4));
  }
  FUN_10003881((char *)((int)&param_2 + 3));
  return iVar3;
}

