/*
 * FUN_1005cd3f at 1005cd3f
 * undefined8 * __thiscall FUN_1005cd3f(void * this, undefined8 * param_1, int param_2)
 * Address ranges: 1005cd3f-1005cdee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * __thiscall FUN_1005cd3f(void *this,undefined8 *param_1,int param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint local_14 [4];
  
  if (param_2 != 1) {
    piVar1 = *(int **)((int)this + -0x28);
    if (piVar1 != (int *)0x0) {
      uVar4 = (**(code **)(*piVar1 + 0x20))(piVar1);
      uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
      if ((*(uint *)((int)this + -0x1c) < uVar3) ||
         ((*(uint *)((int)this + -0x1c) <= uVar3 && (*(uint *)((int)this + -0x20) <= (uint)uVar4))))
      goto LAB_1005cd9f;
    }
    iVar2 = *(int *)((int)this + 0xc);
    local_14[0] = (int)this - 0x38;
    lpCriticalSection = (LPCRITICAL_SECTION)(iVar2 + 0x1c);
    EnterCriticalSection(lpCriticalSection);
    piVar1 = (int *)FUN_100506b8((void *)(iVar2 + 0xc),local_14);
    if (piVar1 != (int *)0x0) {
      FUN_1004fc29(piVar1);
    }
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1005cd9f:
  local_14[1] = 0;
  local_14[2] = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0xc) = 0;
  iVar2 = (**(code **)(**(int **)((int)this + 8) + 0x20))
                    (*(int **)((int)this + 8),0,local_14 + 1,param_1 + 1);
  if (-1 < iVar2) {
    uVar4 = (**(code **)(**(int **)((int)this + 8) + 0x2c))(*(int **)((int)this + 8));
    *param_1 = uVar4;
    *(undefined4 *)((int)param_1 + 0xc) = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + -0xc) = *(int *)((int)this + -0xc) + 1;
  }
  return param_1;
}

