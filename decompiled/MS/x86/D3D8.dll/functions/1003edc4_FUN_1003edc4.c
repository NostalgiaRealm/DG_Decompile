/*
 * FUN_1003edc4 at 1003edc4
 * undefined __thiscall FUN_1003edc4(void * this, undefined4 param_1, uint * param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined1 param_6)
 * Address ranges: 1003edc4-1003ef08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall
FUN_1003edc4(void *this,undefined4 param_1,uint *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *this_00;
  bool bVar5;
  
  FUN_1003d614(this,(int)param_2,'\0');
  iVar1 = *(int *)((int)this + 0xd9b8);
  FUN_100abd50((int *)(iVar1 + 0x11c0));
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    if (*param_2 != *(uint *)((int)this + 0xddc4)) {
      *(uint *)((int)this + 0xddc4) = *param_2;
      uVar2 = FUN_1003a42d((void *)((int)this + 0xda34),param_2);
      *(undefined4 *)((int)this + 0xddc8) = uVar2;
    }
    param_2 = *(uint **)((int)this + 0xddc8);
  }
  bVar5 = (*(uint *)((int)this + 0xddcc) & 0x7fffffff) != 0;
  iVar1 = *(int *)((int)this + 0xd9b8);
  this_00 = (int *)(iVar1 + 0x11c0);
  if (*(char *)(iVar1 + 0x12ec) != '\0') {
    puVar3 = (undefined4 *)FUN_100abc70(this_00,0x20);
    if (puVar3 != (undefined4 *)0x0) {
      LOCK();
      *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
      UNLOCK();
      puVar3[1] = 0x20;
      puVar3[2] = this;
      puVar3[3] = param_1;
      puVar3[4] = param_2;
      puVar3[5] = param_3;
      puVar3[6] = param_4;
      puVar3[7] = param_5;
      *(undefined1 *)(puVar3 + 8) = param_6;
      *(bool *)(puVar3 + 9) = bVar5;
      puVar4 = (undefined4 *)((int)puVar3 + 0x2bU & 0xfffffffc);
      *puVar4 = 0;
      *puVar3 = FUN_1003ef09;
      this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar4;
      if (*(char *)(iVar1 + 0x12ed) != '\0') {
        *this_00 = 0;
        SetEvent(*(HANDLE *)(iVar1 + 0x1220));
        return;
      }
      goto LAB_1003eefc;
    }
    FUN_1002f90d(this_00);
  }
  puVar3 = *(undefined4 **)(iVar1 + 0x12d0);
  *puVar3 = this;
  puVar3[1] = param_1;
  puVar3[2] = param_2;
  puVar3[3] = param_3;
  puVar3[4] = param_4;
  puVar3[5] = param_5;
  *(undefined1 *)(puVar3 + 6) = param_6;
  *(bool *)(puVar3 + 7) = bVar5;
  FUN_1003ef09(puVar3);
LAB_1003eefc:
  *this_00 = 0;
  return;
}

