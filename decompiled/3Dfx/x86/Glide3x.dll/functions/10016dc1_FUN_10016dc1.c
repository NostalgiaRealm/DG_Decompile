/*
 * FUN_10016dc1 at 10016dc1
 * undefined __thiscall FUN_10016dc1(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10016dc1-10016eb8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016dc1(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_1001416a((int)this + 0x35c0);
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10016e64:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    FUN_10016eb9(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10014f4d(this_00);
      goto LAB_10016e64;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 0x14;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    puVar2[6] = param_4;
    puVar3 = (undefined4 *)((int)puVar2 + 0x1fU & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_10016eb9;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10016e91;
    }
  }
  *this_00 = 0;
LAB_10016e91:
  *(int *)((int)this + 0xd34c) = param_2;
  *(int *)((int)this + 0xd350) = param_3;
  *(int *)((int)this + 0xd348) = param_1;
  *(int *)((int)this + 0xd354) = param_4;
  return;
}

