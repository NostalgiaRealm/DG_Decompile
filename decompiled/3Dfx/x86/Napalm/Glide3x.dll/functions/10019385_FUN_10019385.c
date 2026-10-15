/*
 * FUN_10019385 at 10019385
 * undefined __thiscall FUN_10019385(void * this, int param_1, int param_2, int param_3, int param_4)
 * Address ranges: 10019385-1001947c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10019385(void *this,int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  FUN_10015782((int)this + 0x3940);
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10019428:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    FUN_1001947d(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,0x14);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_100165f0(this_00);
      goto LAB_10019428;
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
    *puVar2 = FUN_1001947d;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10019455;
    }
  }
  *this_00 = 0;
LAB_10019455:
  *(int *)((int)this + 0xd6e4) = param_2;
  *(int *)((int)this + 0xd6e8) = param_3;
  *(int *)((int)this + 0xd6e0) = param_1;
  *(int *)((int)this + 0xd6ec) = param_4;
  return;
}

