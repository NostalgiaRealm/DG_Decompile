/*
 * FUN_10018525 at 10018525
 * undefined __thiscall FUN_10018525(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10018525-1001866c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018525(void *this,int param_1,int param_2,int param_3,int param_4)

{
  void *this_00;
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *this_01;
  undefined4 local_f8 [60];
  void *local_8;
  
  local_8 = this;
  FUN_10015782((int)this + 0x3940);
  this_00 = (void *)((int)this + 0x42e8);
  *(int *)((int)this + 0x4610) = param_1;
  iVar3 = FUN_100181bd(this_00,param_2,local_f8);
  FUN_100181bd(this_00,param_3,local_f8 + iVar3);
  FUN_100181bd(this_00,param_4,local_f8 + iVar3 * 2);
  iVar1 = *(int *)((int)this + 0x3688);
  this_01 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_01);
  uVar4 = iVar3 * 0xc;
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar5 = (undefined4 *)FUN_1002dff0(this_01,uVar4 + 0x10);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = uVar4 + 0x10;
      puVar5[3] = local_8;
      puVar5[4] = iVar3;
      puVar6 = (undefined4 *)((int)puVar5 + 0x1bU & 0xfffffffc);
      puVar5[5] = param_1;
      puVar5[2] = puVar6;
      FUN_10055d40(puVar6,local_f8,uVar4);
      puVar6[iVar3 * 3] = 0;
      *puVar5 = FUN_1001866d;
      this_01[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + iVar3 * 3);
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_01 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_10018660;
    }
    FUN_100165f0(this_01);
    this = local_8;
  }
  piVar2 = *(int **)(iVar1 + 0x12d0);
  *piVar2 = (int)local_f8;
  piVar2[1] = (int)this;
  piVar2[2] = iVar3;
  piVar2[3] = param_1;
  FUN_1001866d(piVar2);
LAB_10018660:
  *this_01 = 0;
  return;
}

