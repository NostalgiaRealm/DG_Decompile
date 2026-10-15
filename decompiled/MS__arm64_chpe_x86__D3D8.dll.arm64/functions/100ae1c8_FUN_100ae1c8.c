/*
 * FUN_100ae1c8 at 100ae1c8
 * undefined FUN_100ae1c8(void)
 * Address ranges: 100ae1c8-100ae28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_100ae1c8(int param_1,int param_2)

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
      iVar2 = FUN_100fece0(iVar2);
      *(int *)(param_1 + 0xc) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    FUN_100ff660(iVar2,param_2,
                 ((ulonglong)(uint)(*(int *)(param_1 + 0x24) * *(int *)(param_1 + 0x20)) &
                 0x1fffffff) << 3);
    *(char *)(param_1 + 0x3d) = '\x01';
  }
  return;
}

