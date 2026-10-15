/*
 * FUN_100183c4 at 100183c4
 * undefined __thiscall FUN_100183c4(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 100183c4-100184fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_100183c4(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *this_00;
  undefined4 local_a8 [40];
  void *local_8;
  
  local_8 = this;
  FUN_10015782((int)this + 0x3940);
  *(int *)((int)this + 0x4610) = param_1;
  iVar4 = FUN_100181bd((void *)((int)this + 0x42e8),param_2,local_a8);
  FUN_100181bd((void *)((int)this + 0x42e8),param_3,local_a8 + iVar4);
  iVar2 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar2 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar2 + 0x12ec) != '\0') {
    iVar1 = iVar4 * 8 + 0x10;
    puVar5 = (undefined4 *)FUN_1002dff0(this_00,iVar1);
    if (puVar5 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar2 + 0x12e8) = *(int *)(iVar2 + 0x12e8) + 1;
      UNLOCK();
      puVar5[1] = iVar1;
      puVar5[3] = local_8;
      puVar6 = (undefined4 *)((int)puVar5 + 0x1bU & 0xfffffffc);
      puVar5[4] = iVar4;
      puVar5[5] = param_1;
      puVar5[2] = puVar6;
      FUN_10055d40(puVar6,local_a8,iVar4 << 3);
      puVar6[iVar4 * 2] = 0;
      *puVar5 = FUN_100184fe;
      this_00[*(int *)(iVar2 + 0x12e4) * 5 + 0x1a] = (int)(puVar6 + iVar4 * 2);
      if (*(char *)(iVar2 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar2 + 0x1220));
        return;
      }
      goto LAB_100184f1;
    }
    FUN_100165f0(this_00);
    this = local_8;
  }
  piVar3 = *(int **)(iVar2 + 0x12d0);
  *piVar3 = (int)local_a8;
  piVar3[1] = (int)this;
  piVar3[2] = iVar4;
  piVar3[3] = param_1;
  FUN_100184fe(piVar3);
LAB_100184f1:
  *this_00 = 0;
  return;
}

