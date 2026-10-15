/*
 * FUN_10012b7e at 10012b7e
 * bool __fastcall FUN_10012b7e(int param_1)
 * Address ranges: 10012b7e-10012c0a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool __fastcall FUN_10012b7e(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  bool bVar6;
  
  bVar6 = false;
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = FUN_10012d26(param_1);
    if ((char)uVar1 != '\0') {
      iVar2 = (**(code **)(**(int **)(param_1 + 0x18) + 0x24))();
      if (iVar2 == 2) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        iVar3 = FUN_1004f99f(0xca84);
        pvVar5 = (void *)(iVar3 + 0x13U & 0xfffffff0);
        *(int *)((int)pvVar5 + -4) = iVar3;
        puVar4 = FUN_10015751(pvVar5,uVar1);
        *(undefined4 **)(param_1 + 0xc) = puVar4;
      }
      if ((*(int *)(param_1 + 0xc) == 0) && (iVar2 != 2)) {
        uVar1 = *(undefined4 *)(param_1 + 0x10);
        iVar2 = FUN_1004f99f(0xca24);
        pvVar5 = (void *)(iVar2 + 0x13U & 0xfffffff0);
        *(int *)((int)pvVar5 + -4) = iVar2;
        puVar4 = FUN_10018b42(pvVar5,uVar1);
        *(undefined4 **)(param_1 + 0xc) = puVar4;
      }
      FUN_10012c0b(param_1);
    }
    bVar6 = *(int *)(param_1 + 0xc) == 0;
  }
  return !bVar6;
}

