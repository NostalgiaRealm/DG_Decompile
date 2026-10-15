/*
 * FUN_1007bcef at 1007bcef
 * undefined4 __fastcall FUN_1007bcef(int param_1)
 * Address ranges: 1007bcef-1007bd3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_1007bcef(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int local_40;
  int local_3c;
  
  uVar2 = 1;
  iVar1 = *(int *)(param_1 + 0x24);
  if ((*(int *)(iVar1 + 0x18) == 1) && (*(int *)(iVar1 + 0x1c) == 1)) {
    if (*(int *)(iVar1 + 0x28) == 0) goto LAB_1007bd36;
    if (*(int *)(iVar1 + 0x28) == 1) {
      (**(code **)(**(int **)(iVar1 + 4) + 0x30))(*(int **)(iVar1 + 4),&local_40);
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x10);
      if ((iVar1 == local_40) &&
         (iVar1 = *(int *)(*(int *)(param_1 + 0x24) + 0x14), iVar1 == local_3c)) goto LAB_1007bd36;
    }
  }
  uVar2 = 0;
LAB_1007bd36:
  return CONCAT31((int3)((uint)iVar1 >> 8),uVar2);
}

