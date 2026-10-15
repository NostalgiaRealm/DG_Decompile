/*
 * FUN_100bff5d at 100bff5d
 * undefined8 * __thiscall FUN_100bff5d(void * this, undefined8 * param_1, int param_2)
 * Address ranges: 100bff5d-100bffda
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * __thiscall FUN_100bff5d(void *this,undefined8 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  void *local_c;
  void *local_8;
  
  if (param_2 != 1) {
    piVar1 = *(int **)((int)this + -0x28);
    local_c = this;
    local_8 = this;
    if (piVar1 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1);
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((*(uint *)((int)this + -0x1c) < uVar3) ||
         ((*(uint *)((int)this + -0x1c) <= uVar3 && (*(uint *)((int)this + -0x20) <= (uint)uVar4))))
      goto LAB_100bff91;
    }
    FUN_100c1824(*(int *)((int)this + 0xc));
  }
LAB_100bff91:
  local_c = (void *)0x0;
  local_8 = (void *)0x0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x20))
                    (*(int **)((int)this + 8),0,&local_c,param_1 + 1);
  if (-1 < iVar2) {
    uVar4 = (**(code **)(**(int **)((int)this + 8) + 0x2c))(*(int **)((int)this + 8));
    *param_1 = uVar4;
    *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + -0xc) = *(int *)((int)this + -0xc) + 1;
  }
  return param_1;
}

