/*
 * FUN_10018294 at 10018294
 * undefined __thiscall FUN_10018294(void * this, int param_1, int param_2)
 * Address ranges: 10018294-100183a5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018294(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *this_00;
  undefined4 local_54 [20];
  
  FUN_10015782((int)this + 0x3940);
  *(int *)((int)this + 0x4610) = param_1;
  iVar3 = FUN_100181bd((void *)((int)this + 0x42e8),param_2,local_54);
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar4 = (undefined4 *)FUN_1002dff0(this_00,iVar3 * 4 + 0x10);
    if (puVar4 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar4[1] = iVar3 * 4 + 0x10;
      puVar4[3] = this;
      puVar4[4] = iVar3;
      puVar5 = (undefined4 *)((int)puVar4 + 0x1bU & 0xfffffffc);
      puVar4[5] = param_1;
      puVar4[2] = puVar5;
      FUN_10055d40(puVar5,local_54,iVar3 * 4);
      puVar5[iVar3] = 0;
      *puVar4 = FUN_100183a6;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar5 + iVar3);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10018399;
    }
    FUN_100165f0(this_00);
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)local_54;
  piVar2[1] = (int)this;
  piVar2[2] = iVar3;
  piVar2[3] = param_1;
  FUN_100183a6(piVar2);
LAB_10018399:
  *this_00 = 0;
  return;
}

