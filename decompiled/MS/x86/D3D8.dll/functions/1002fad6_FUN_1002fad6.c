/*
 * FUN_1002fad6 at 1002fad6
 * undefined __fastcall FUN_1002fad6(int param_1)
 * Address ranges: 1002fad6-1002fbd6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002fad6(int param_1)

{
  int *this;
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint local_c;
  
  local_c = 0;
  iVar5 = *(int *)(param_1 + 0x10) * 0x16c0 + *(int *)(param_1 + 8);
  if (*(int *)(param_1 + 0x28) != 0) {
    this = (int *)(iVar5 + 0x1880);
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x24) + local_c * 8);
      FUN_100abd50(this);
      if (*(char *)(iVar5 + 0x19ac) == '\0') {
LAB_1002fb87:
        piVar2 = *(int **)(iVar5 + 0x1990);
        *piVar2 = iVar5 + 0x1be8;
        piVar2[1] = iVar1;
        FUN_1002fbd7(piVar2);
LAB_1002fba2:
        *this = 0;
      }
      else {
        puVar3 = (undefined4 *)FUN_100abc70(this,8);
        if (puVar3 == (undefined4 *)0x0) {
          FUN_1002f90d(this);
          goto LAB_1002fb87;
        }
        LOCK();
        *(int *)(iVar5 + 0x19a8) = *(int *)(iVar5 + 0x19a8) + 1;
        UNLOCK();
        puVar3[1] = 8;
        puVar3[2] = iVar5 + 0x1be8;
        puVar3[3] = iVar1;
        puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
        *puVar4 = 0;
        *puVar3 = FUN_1002fbd7;
        *(undefined4 **)(iVar5 + 0x18e8 + *(int *)(iVar5 + 0x19a4) * 0x14) = puVar4;
        if (*(char *)(iVar5 + 0x19ad) == '\0') goto LAB_1002fba2;
        *this = 0;
        SetEvent(*(HANDLE *)(iVar5 + 0x18e0));
      }
      local_c = local_c + 1;
    } while (local_c < *(uint *)(param_1 + 0x28));
  }
  thunk_FUN_100ad48c(*(LPVOID *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}

