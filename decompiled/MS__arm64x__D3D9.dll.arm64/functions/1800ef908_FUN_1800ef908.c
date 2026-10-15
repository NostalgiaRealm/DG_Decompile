/*
 * FUN_1800ef908 at 1800ef908
 * undefined FUN_1800ef908(void)
 * Address ranges: 1800ef908-1800efa5b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_1800ef908(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong local_40 [4];
  
  if ((param_3 != 1) &&
     ((*(longlong **)(param_1 + -0x28) == (longlong *)0x0 ||
      (uVar3 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))(),
      uVar3 < *(ulonglong *)(param_1 + -0x20))))) {
    local_40[0] = param_1 + -0x40;
    lVar6 = *(longlong *)(param_1 + 0x10);
    (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar6 + 0x28);
    plVar4 = (longlong *)FUN_1800f24c0(lVar6 + 0x10,local_40);
    if ((plVar4 != (longlong *)0x0) &&
       ((uVar3 = (**(code **)(**(longlong **)(*plVar4 + 0x18) + 0x40))(),
        uVar3 < (ulonglong)plVar4[2] &&
        ((plVar4[1] == -1 || (uVar3 = FUN_1800e8548(plVar4[1] + 8,0), (uVar3 & 1) != 0)))))) {
      plVar1 = *(longlong **)(*plVar4 + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1,plVar4[2],*(undefined8 *)(*plVar4 + 0x20));
      (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*plVar4 + 0x20),0xffffffff);
    }
    (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar6 + 0x28);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                    (*(longlong **)(param_1 + 8),0,local_40 + 1,param_2 + 1);
  if (-1 < iVar2) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
    *param_2 = uVar5;
    param_2[2] = *(undefined8 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

