/*
 * FUN_100276ee at 100276ee
 * undefined __thiscall FUN_100276ee(void * this, int param_1)
 * Address ranges: 100276ee-1002779d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100276ee(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x1d54);
  iVar2 = *(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) * 8);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1005c1d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_1005c0f0(this_00,8);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = 8;
      puVar4[2] = this;
      puVar4[3] = iVar2;
      puVar5 = (undefined4 *)((int)puVar4 + 0x13U & 0xfffffffc);
      *puVar5 = 0;
      *puVar4 = FUN_1002779e;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar5;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10027791;
    }
    FUN_1001b0b6(this_00);
  }
  piVar3 = *(int **)(iVar1 + 0x12d0);
  *piVar3 = (int)this;
  piVar3[1] = iVar2;
  FUN_1002779e(piVar3);
LAB_10027791:
  *this_00 = 0;
  return;
}

