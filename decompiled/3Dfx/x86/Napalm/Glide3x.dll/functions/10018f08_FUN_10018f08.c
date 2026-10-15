/*
 * FUN_10018f08 at 10018f08
 * undefined __thiscall FUN_10018f08(void * this, int param_1, int param_2, int param_3)
 * Address ranges: 10018f08-10018fe8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10018f08(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *this_00;
  
  iVar1 = *(int *)((int)this + 0x3688);
  this_00 = (int *)(iVar1 + 0x11c0);
  FUN_1002e0d0(this_00);
  if (*(char *)(iVar1 + 0x12ec) == '\0') {
LAB_10018f9a:
    puVar2 = *(undefined4 **)(iVar1 + 0x12d0);
    *puVar2 = this;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    FUN_10018fe9(puVar2);
  }
  else {
    puVar2 = (undefined4 *)FUN_1002dff0(this_00,0x10);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_100165f0(this_00);
      goto LAB_10018f9a;
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
    *puVar2 = FUN_10018fe9;
    this_00[*(int *)(iVar1 + 0x12e4) * 5 + 0x1a] = (int)puVar3;
    if (*(char *)(iVar1 + 0x12ed) != '\0') {
      *this_00 = 0;
      SetEvent(*(HANDLE *)(iVar1 + 0x1220));
      goto LAB_10018fc1;
    }
  }
  *this_00 = 0;
LAB_10018fc1:
  FUN_10007ba8((void *)((int)this + 0x42e8),(void *)((int)this + 0x452c),param_1,param_2,
               param_3 != 0);
  return;
}

