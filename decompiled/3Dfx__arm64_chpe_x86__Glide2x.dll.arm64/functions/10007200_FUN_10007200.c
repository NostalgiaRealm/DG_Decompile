/*
 * FUN_10007200 at 10007200
 * undefined FUN_10007200(void)
 * Address ranges: 10007200-100072ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10007200(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x308) + -1;
  *(int *)(param_1 + 0x308) = iVar1;
  if ((iVar1 == 0) && (DAT_1009f7b8 != 0)) {
    if (*(char *)(param_1 + 0x758) != '\0') {
      (*(code *)PTR_FUN_1009d1c8)(*(undefined4 *)(param_1 + 0x30c),0x12,0,0);
      (*(code *)PTR_FUN_1009d100)(DAT_1009f7b8,0xffffffff);
    }
    (*(code *)PTR_FUN_1009d00c)(DAT_1009f7b8);
    DAT_1009f7b8 = 0;
    *(undefined4 *)(param_1 + 0x310) = 0;
    (*(code *)PTR_FUN_1009d034)(param_1 + 0x318);
  }
  return;
}

