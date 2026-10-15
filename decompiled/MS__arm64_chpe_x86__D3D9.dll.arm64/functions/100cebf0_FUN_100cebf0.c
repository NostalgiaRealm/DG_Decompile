/*
 * FUN_100cebf0 at 100cebf0
 * undefined FUN_100cebf0(void)
 * Address ranges: 100cebf0-100cecb7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100cebf0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (((param_2 != 0) && (*(char *)(param_1 + 0x3d) == '\0')) && (*(int *)(param_1 + 0x34) - 1U < 2)
     ) {
    iVar2 = *(int *)(param_1 + 0xc);
    if (iVar2 == 0) {
      uVar1 = *(int *)(param_1 + 0x20) * *(int *)(param_1 + 0x24);
      iVar2 = uVar1 * 8;
      if (uVar1 >> 0x1d != 0) {
        iVar2 = -1;
      }
      iVar2 = FUN_101322b0(iVar2);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_101325a0(iVar2,param_2,
                 ((ulonglong)(uint)(*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20)) &
                 0x1fffffff) << 3);
    *(char *)(param_1 + 0x3d) = '\x01';
  }
  return;
}

