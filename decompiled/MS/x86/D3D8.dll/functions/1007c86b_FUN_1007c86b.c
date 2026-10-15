/*
 * FUN_1007c86b at 1007c86b
 * undefined4 __stdcall FUN_1007c86b(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 1007c86b-1007c90e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1007c86b(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = param_1;
  FUN_10003838((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x4dd4) >> 2) & 1);
  uVar5 = 0x8876086c;
  piVar4 = (int *)(-(uint)(param_2 != 0) & param_2 - 0x4cU);
  if ((piVar4 == (int *)0x0) || (piVar4[0xf] != 3)) {
    if (*(char *)(iVar2 + -0x56c0) == '\0') {
      uVar3 = FUN_10005fae((void *)(iVar2 + -0x58e0),piVar4);
      if ((char)uVar3 == '\0') goto LAB_1007c8fe;
    }
    else {
      iVar1 = *(int *)(*(int *)(iVar2 + -0x56d0) + *(int *)(iVar2 + -0x56c4) * 4);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      if (*(int **)(iVar1 + 0x926c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x926c) + 8))();
      }
      *(int **)(iVar1 + 0x926c) = piVar4;
      *(undefined1 *)(iVar1 + 0x93a2) = 1;
    }
    uVar5 = 0;
    *(undefined4 *)(iVar2 + 0x68) = param_3;
  }
LAB_1007c8fe:
  FUN_10003881((char *)((int)&param_1 + 3));
  return uVar5;
}

