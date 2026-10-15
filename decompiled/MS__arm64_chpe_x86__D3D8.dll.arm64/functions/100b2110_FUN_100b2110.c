/*
 * FUN_100b2110 at 100b2110
 * undefined FUN_100b2110(void)
 * Address ranges: 100b2110-100b2173
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4
FUN_100b2110(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (**(int **)(param_1 + -0x4e10) != 0) {
    iVar1 = **(int **)(param_1 + -0x4e10) + -8;
  }
  if (*(char *)(param_1 + -0x57e0) == '\0') {
    uVar2 = 0x8876086b;
  }
  else {
    uVar2 = FUN_100bf870(iVar1,param_2,param_3,param_4,param_5);
  }
  return uVar2;
}

