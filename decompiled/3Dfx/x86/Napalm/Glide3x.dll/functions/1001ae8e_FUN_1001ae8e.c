/*
 * FUN_1001ae8e at 1001ae8e
 * undefined __thiscall FUN_1001ae8e(void * this, int param_1)
 * Address ranges: 1001ae8e-1001af37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1001ae8e(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_1002dff0(this_00,8);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 8;
      puVar3[2] = this;
      puVar3[3] = param_1;
      puVar4 = (undefined4 *)((int)puVar3 + 0x13U & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_1001af38;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1001af2c;
    }
    FUN_100165f0(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)this;
  piVar2[1] = param_1;
  FUN_1001af38(piVar2);
LAB_1001af2c:
  *this_00 = 0;
  return;
}

