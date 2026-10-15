/*
 * FUN_1003f3e0 at 1003f3e0
 * undefined FUN_1003f3e0(void)
 * Address ranges: 1003f3e0-1003f48b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1003f3e0(int param_1)

{
  uint *puVar1;
  int iVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [20];
  uint local_34;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 != 0) {
    puVar1 = (uint *)(param_1 + 0x34);
    if (((((*puVar1 >> 1 & 1) != 0) || (*(int *)(param_1 + 0x24) != 0)) && ((*puVar1 >> 3 & 1) == 0)
        ) && (iVar2 = (*(code *)PTR_FUN_1016c134)(iVar2,auStack_48,0x1c), iVar2 != 0)) {
      (*(code *)PTR_FUN_1016c130)
                (*(int *)(param_1 + 0x20),
                 (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14),local_34 & 0xfffffeff,
                 auStack_50);
      *puVar1 = *puVar1 & 0xfffffffd;
    }
  }
  return;
}

