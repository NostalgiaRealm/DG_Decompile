/*
 * FUN_10016944 at 10016944
 * undefined __thiscall FUN_10016944(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10016944-10016a24
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10016944(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3308);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002acc0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_100169d6:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    FUN_10016a25(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002abe0(this_00,0x10);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_10014f4d(this_00);
      goto LAB_100169d6;
    }
    LOCK();
    *(int *)(iVar1 + 0x12e8) = *(int *)(iVar1 + 0x12e8) + 1;
    UNLOCK();
    puVar2[1] = 0x10;
    puVar2[2] = this;
    puVar2[3] = param_1;
    puVar2[4] = param_2;
    puVar2[5] = param_3;
    puVar3 = (undefined4 *)((int)puVar2 + 0x1bU & 0xfffffffc);
    *puVar3 = 0;
    *puVar2 = FUN_10016a25;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_100169fd;
    }
  }
  *this_00 = 0;
LAB_100169fd:
  FUN_100075fe((void *)((int)this + 0x3f50),(void *)((int)this + 0x4194),param_1,param_2,
               param_3 != 0);
  return;
}

