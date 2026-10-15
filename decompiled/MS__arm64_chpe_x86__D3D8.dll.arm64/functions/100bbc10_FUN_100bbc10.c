/*
 * FUN_100bbc10 at 100bbc10
 * undefined FUN_100bbc10(void)
 * Address ranges: 100bbc10-100bbd2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100bbc10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(char *)(param_1 + -0x20) == '\0') {
    uVar5 = 0x8876086c;
    if (param_2 != 0) {
      iVar2 = **(int **)(param_1 + -0x4e10);
      piVar1 = (int *)(iVar2 + 0x2c);
      if (((*(uint *)(*piVar1 + 0xb0c) >> 2 & 1) == 0) && (*(int *)(DAT_1013d014 + 0x20) == 0)) {
        bVar3 = false;
        *(undefined4 *)(DAT_1013d014 + 0x1c) = 1;
      }
      else {
        bVar3 = true;
        iVar4 = (*(code *)PTR_FUN_10134120)(DAT_1013d014);
        if (iVar4 == 0) {
          FUN_10006560(0);
        }
      }
      FUN_100045b0(*(undefined4 *)(*piVar1 + 0xacc),*(undefined4 *)(iVar2 + 0xa4),param_2);
      uVar5 = 0;
      if (bVar3) {
        (*(code *)PTR_FUN_101340bc)(DAT_1013d014);
      }
      else {
        *(undefined4 *)(DAT_1013d014 + 0x1c) = 0;
      }
      *(undefined4 *)(param_1 + -0x4dc4) = *(undefined4 *)(param_2 + 0xc);
    }
  }
  else {
    uVar5 = 0x8876086b;
  }
  return uVar5;
}

