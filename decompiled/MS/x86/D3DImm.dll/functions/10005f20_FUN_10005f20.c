/*
 * FUN_10005f20 at 10005f20
 * undefined __thiscall FUN_10005f20(void * this, int param_1, int param_2)
 * Address ranges: 10005f20-10005ff0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10005f20(void *this,int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  if (*(int *)((int)this + param_1 * 4 + 0x290) == param_2) {
    return;
  }
  if (param_1 == 0x13) {
    if (param_2 == 0xc) {
      (**(code **)(**(int **)((int)this + 0x14) + 0x50))(0x13,5);
      param_2 = 6;
    }
    else {
      pcVar3 = *(code **)(**(int **)((int)this + 0x14) + 0x50);
      if (param_2 != 0xd) {
        (*pcVar3)(0x13,param_2);
        if ((*(int *)((int)this + 0x2dc) != 0xc) && (*(int *)((int)this + 0x2dc) != 0xd)) {
          return;
        }
        iVar2 = *(int *)((int)this + 0x2e0);
        param_2 = iVar2;
        goto joined_r0x10005fd9;
      }
      (*pcVar3)(0x13,6);
      param_2 = 5;
    }
  }
  else {
    if (param_1 != 0x14) {
      if (param_1 == 0x1a) {
        piVar1 = *(int **)((int)this + 0x14);
        uVar4 = FUN_10005ef9(this,param_2);
        (**(code **)(*piVar1 + 0x50))(0x1a,uVar4);
        *(undefined1 *)((int)this + 0xff) = 1;
        return;
      }
      if (param_1 == 0x88) {
        return;
      }
      goto LAB_10005fe3;
    }
    if (param_2 == 0xc) {
      return;
    }
    if (param_2 == 0xd) {
      return;
    }
    iVar2 = *(int *)((int)this + 0x2dc);
joined_r0x10005fd9:
    if (iVar2 == 0xc) {
      return;
    }
    if (iVar2 == 0xd) {
      return;
    }
  }
  param_1 = 0x14;
LAB_10005fe3:
  (**(code **)(**(int **)((int)this + 0x14) + 0x50))(param_1,param_2);
  return;
}

