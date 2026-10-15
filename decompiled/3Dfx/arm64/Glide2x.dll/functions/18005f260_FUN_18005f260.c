/*
 * FUN_18005f260 at 18005f260
 * undefined8 * __cdecl FUN_18005f260(longlong param_1, undefined8 * param_2, int param_3)
 * Address ranges: 18005f260-18005f3b3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_18005f260(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong local_40 [4];
  
  if ((param_3 != 1) &&
     ((*(longlong **)(param_1 + -0x28) == (longlong *)0x0 ||
      (uVar3 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))(),
      uVar3 < *(ulonglong *)(param_1 + -0x20))))) {
    local_40[0] = param_1 - 0x40;
    lVar6 = *(longlong *)(param_1 + 0x10);
    EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
    puVar4 = FUN_180046848(lVar6 + 0x10,local_40);
    if ((puVar4 != (ulonglong *)0x0) &&
       ((uVar3 = (**(code **)(**(longlong **)(*puVar4 + 0x18) + 0x40))(), uVar3 < puVar4[2] &&
        ((puVar4[1] == 0xffffffffffffffff ||
         (uVar3 = FUN_18004aca0(puVar4[1] + 8,0), (uVar3 & 1) != 0)))))) {
      plVar1 = *(longlong **)(*puVar4 + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1,puVar4[2],*(undefined8 *)(*puVar4 + 0x20));
      WaitForSingleObject(*(HANDLE *)(*puVar4 + 0x20),0xffffffff);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
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

