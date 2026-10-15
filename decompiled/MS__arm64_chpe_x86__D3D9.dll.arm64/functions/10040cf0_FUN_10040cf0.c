/*
 * FUN_10040cf0 at 10040cf0
 * undefined FUN_10040cf0(void)
 * Address ranges: 10040cf0-10040d77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10040cf0(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0xb4);
  if (*piVar1 == -1) {
    if ((*(uint *)(param_1 + 0x10) & 3) == 0) {
      iVar2 = (*(code *)PTR_FUN_1016c058)
                        (0xffffffff,0,0x8000004,0,
                         (uint)*(ushort *)(param_1 + 0xc) * *(int *)(param_1 + 0x14) +
                         (*(uint *)(param_1 + 0x10) * 0x40 + 0xfff & 0xfffff000) * 2,0);
      *piVar1 = iVar2;
    }
    else {
      *piVar1 = 0;
    }
  }
  return;
}

