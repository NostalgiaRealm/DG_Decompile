/*
 * FUN_1004c9bd at 1004c9bd
 * undefined8 __fastcall FUN_1004c9bd(int param_1)
 * Address ranges: 1004c9bd-1004cab0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x1004ca2a) */

undefined8 __fastcall FUN_1004c9bd(int param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ulonglong uVar5;
  undefined4 local_24;
  uint uStack_20;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  if (*(int *)(param_1 + 0x48) != 0) {
    piVar1 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 0x1300) + 0xc);
    uVar5 = (**(code **)(*piVar1 + 0x20))(piVar1);
    uVar3 = *(uint *)(param_1 + 0x34);
    while ((uVar3 != 0xffffffff &&
           (puVar4 = (uint *)(*(int *)(param_1 + 0x28) + uVar3 * 0x30), *puVar4 != 0))) {
      uStack_20 = puVar4[5];
      local_24 = (undefined4)*(ulonglong *)(puVar4 + 4);
      if (uVar5 < *(ulonglong *)(puVar4 + 4)) goto LAB_1004ca9a;
      if ((*(char *)((int)puVar4 + 0x2d) == '\0') &&
         (FUN_1004cab1((int *)puVar4), (char)puVar4[0xb] != '\0')) {
        FUN_1004d37a((void *)(param_1 + 0x50),puVar4);
      }
      uVar2 = puVar4[10];
      *puVar4 = 0;
      if ((uVar2 != 0xffffffff) && (*(int *)(*(int *)(param_1 + 0x28) + uVar2 * 0x30) != 0)) {
        *(uint *)(param_1 + 0x34) = uVar2;
        puVar4[10] = *(uint *)(*(int *)(param_1 + 0x28) + 0x28 + *(int *)(param_1 + 0x38) * 0x30);
        *(uint *)(*(int *)(param_1 + 0x28) + 0x28 + *(int *)(param_1 + 0x38) * 0x30) = uVar3;
      }
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
      uVar3 = uVar2;
    }
  }
  local_24 = 0;
  uStack_20 = 0;
LAB_1004ca9a:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x60));
  return CONCAT44(uStack_20,local_24);
}

