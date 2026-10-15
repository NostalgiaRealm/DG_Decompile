/*
 * FUN_10094816 at 10094816
 * undefined4 __stdcall FUN_10094816(int param_1, int param_2)
 * Address ranges: 10094816-1009489d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_10094816(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = param_1;
  FUN_10003e40((void *)((int)&param_1 + 3),(byte)(*(uint *)(param_1 + -0x58e4) >> 2) & 1);
  uVar2 = 0x8876086c;
  piVar3 = (int *)(-(uint)(param_2 != 0) & param_2 - 0x5cU);
  if (piVar3 != (int *)0x0) {
    if ((((*(byte *)(piVar3 + 0xc) & 2) == 0) || (piVar3[0xd] != 0)) ||
       (piVar3[6] != iVar1 + -0x66b4)) goto LAB_1009488d;
    (**(code **)(*piVar3 + 0x18))();
    if ((int *)piVar3[7] != (int *)0x0) {
      (**(code **)(*(int *)piVar3[7] + 4))();
    }
  }
  if (*(int *)(iVar1 + -0x668c) != 0) {
    FUN_1000604e(*(int **)(iVar1 + -0x668c));
  }
  *(int **)(iVar1 + -0x668c) = piVar3;
  uVar2 = 0;
  *(undefined1 *)(iVar1 + 0x5c39) = 1;
LAB_1009488d:
  FUN_10003e89((char *)((int)&param_1 + 3));
  return uVar2;
}

