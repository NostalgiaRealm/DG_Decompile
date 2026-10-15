/*
 * FUN_18003f404 at 18003f404
 * undefined8 * __fastcall FUN_18003f404(longlong param_1, undefined8 * param_2, ulonglong param_3)
 * Address ranges: 18003f404-18003f610
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18003f404(longlong param_1,undefined8 *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  char cVar4;
  int iVar5;
  LPVOID pvVar6;
  longlong lVar7;
  undefined4 in_stack_ffffffffffffff40;
  undefined4 in_stack_ffffffffffffff44;
  LPVOID local_88;
  LPVOID local_80;
  undefined8 local_78;
  undefined1 local_70;
  LPVOID local_68;
  LPVOID local_60;
  undefined8 local_58;
  undefined1 local_50;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar1 = *(longlong *)(param_1 + 8);
  lVar7 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0;
  local_70 = 1;
  local_78 = 0x100;
  iVar5 = *(int *)(lVar7 + 0x6d0 + lVar1);
  if ((param_3 & 0x100) == 0) {
    local_88 = (LPVOID)thunk_FUN_1800fbccc(0x100);
    iVar5 = 0x10040;
    if (0xafff < *(int *)(lVar7 + 0x6cc + lVar1)) {
      iVar5 = 0x10050;
    }
    local_80 = local_88;
    cVar4 = FUN_18008469c((longlong *)(param_1 + 0x20),param_1 + 0x30,param_3,iVar5,
                          (ulonglong *)&local_88,
                          CONCAT44(in_stack_ffffffffffffff44,
                                   CONCAT31((int3)((uint)in_stack_ffffffffffffff40 >> 8),
                                            *(undefined1 *)(param_1 + 0x2f0))),(undefined8 *)0x0);
    pvVar6 = local_88;
    if (cVar4 != '\0') {
      plVar2 = *(longlong **)
                ((ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0 + 0x6b0 + *(longlong *)(param_1 + 8))
      ;
      (**(code **)(*plVar2 + 0x60))
                (plVar2,local_88,(longlong)local_80 - (longlong)local_88,0,param_2);
    }
  }
  else {
    local_88 = (LPVOID)thunk_FUN_1800fbccc(0x100);
    local_58 = 0x100;
    local_50 = 1;
    local_80 = local_88;
    local_68 = (LPVOID)thunk_FUN_1800fbccc(0x100);
    local_60 = local_68;
    cVar4 = FUN_1800789b8((uint *)(param_1 + 0x20),param_1 + 0x30,param_3,
                          *(undefined1 *)(param_1 + 0x2f0),iVar5 == 0x1002,0x10050,
                          (longlong *)&local_88,(undefined8 *)0x0,0x20050,(longlong *)&local_68,
                          (undefined8 *)0x0);
    pvVar3 = local_68;
    pvVar6 = local_88;
    if (cVar4 != '\0') {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar7 = (ulonglong)*(uint *)(param_1 + 0x10) * 0x18c0;
      plVar2 = *(longlong **)(lVar7 + 0x6b0 + lVar1);
      iVar5 = (**(code **)(*plVar2 + 0x60))
                        (plVar2,local_88,(longlong)local_80 - (longlong)local_88,0,param_2);
      if ((-1 < iVar5) &&
         (plVar2 = *(longlong **)(lVar7 + 0x6b0 + lVar1),
         iVar5 = (**(code **)(*plVar2 + 0x68))
                           (plVar2,pvVar3,(longlong)local_60 - (longlong)pvVar3,0,param_2 + 1),
         iVar5 < 0)) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
        *param_2 = 0;
      }
    }
    FUN_1800fbcf0(pvVar3);
  }
  FUN_1800fbcf0(pvVar6);
  return param_2;
}

