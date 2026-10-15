/*
 * FUN_10017af7 at 10017af7
 * undefined __thiscall FUN_10017af7(void * this, int param_1, int param_2)
 * Address ranges: 10017af7-10017bc7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10017af7(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + param_1 * 4 + 0x430) == param_2) {
    return;
  }
  if (param_1 == 0x13) {
    if (param_2 == 0xc) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x48))(0x13,5);
      param_2 = 6;
    }
    else {
      pcVar3 = *(code **)(**(int **)((int)this + 0x14) + 0x48);
      if (param_2 != 0xd) {
        (*pcVar3)(0x13,param_2);
        if ((*(int *)((int)this + 0x47c) != 0xc) && (*(int *)((int)this + 0x47c) != 0xd)) {
          return;
        }
        iVar2 = *(int *)((int)this + 0x480);
        param_2 = iVar2;
        goto joined_r0x10017bb0;
      }
      (*pcVar3)(0x13,6);
      param_2 = 5;
    }
  }
  else {
    if (param_1 != 0x14) {
      if (param_1 == 0x1a) {
        piVar1 = *(int **)((int)this + 0x14);
        uVar4 = FUN_10017a97(this,param_2);
        (**(code **)(*piVar1 + 0x48))(0x1a,uVar4);
        *(undefined1 *)((int)this + 0x2a3) = 1;
        return;
      }
      if (param_1 == 0x88) {
        return;
      }
      goto LAB_10017bba;
    }
    if (param_2 == 0xc) {
      return;
    }
    if (param_2 == 0xd) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x47c);
joined_r0x10017bb0:
    if (iVar2 == 0xc) {
      return;
    }
    if (iVar2 == 0xd) {
      return;
    }
  }
  param_1 = 0x14;
LAB_10017bba:
  (**(code **)(**(int **)((int)this + 0x14) + 0x48))(param_1,param_2);
  return;
}

