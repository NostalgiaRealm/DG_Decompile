/*
 * FUN_10065e77 at 10065e77
 * undefined4 __fastcall FUN_10065e77(int param_1)
 * Address ranges: 10065e77-10065ec3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10065e77(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int local_40;
  int local_3c;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(int *)(iVar1 + 0x18) == 1) && (*(int *)(iVar1 + 0x1c) == 1)) {
    if (*(int *)(iVar1 + 0x28) == 0) goto LAB_10065ebe;
    if (*(int *)(iVar1 + 0x28) == 1) {
      (**(code **)(**(int **)(iVar1 + 4) + 0x30))(*(int **)(iVar1 + 4),&local_40);
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
      if ((iVar1 == local_40) &&
         (iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x14), iVar1 == local_3c)) goto LAB_10065ebe;
    }
  }
  uVar2 = 0;
LAB_10065ebe:
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}

