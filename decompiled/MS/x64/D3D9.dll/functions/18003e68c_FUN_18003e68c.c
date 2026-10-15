/*
 * FUN_18003e68c at 18003e68c
 * undefined8 * __fastcall FUN_18003e68c(longlong param_1, undefined8 * param_2, longlong param_3, ulonglong param_4, ulonglong param_5, longlong param_6, undefined8 * param_7, longlong param_8, undefined8 param_9)
 * Address ranges: 18003e68c-18003e8d8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18003e68c(longlong param_1,undefined8 *param_2,longlong param_3,ulonglong param_4,
             ulonglong param_5,longlong param_6,undefined8 *param_7,longlong param_8,
             undefined8 param_9)

{
  uint *puVar1;
  longlong *plVar2;
  LPVOID pvVar3;
  char cVar4;
  int iVar5;
  LPVOID pvVar6;
  longlong lVar7;
  bool bVar8;
  undefined8 in_stack_ffffffffffffff78;
  LPVOID local_68;
  LPVOID local_60;
  undefined8 local_58;
  undefined1 local_50;
  
  lVar7 = (param_4 & 0xffffffff) * 0x18c0;
  local_50 = 1;
  local_58 = 0x100;
  *param_2 = 0;
  param_2[1] = 0;
  local_68 = (LPVOID)thunk_FUN_1800fbccc(0x100);
  bVar8 = *(int *)(lVar7 + 0x6d0 + param_3) == 0x1002;
  puVar1 = (uint *)(param_1 + 0x20);
  local_60 = local_68;
  if ((param_5 >> 8 & 1) == 0) {
    iVar5 = 0x10040;
    if (0xafff < *(int *)(lVar7 + 0x6cc + param_3)) {
      iVar5 = 0x10050;
    }
    cVar4 = FUN_180088494(puVar1,*(undefined4 *)(param_1 + 0x48),param_5,param_6,param_7,param_8,
                          param_9,iVar5,(ulonglong *)&local_68,(undefined8 *)0x0,
                          in_stack_ffffffffffffff78,*(undefined1 *)(param_1 + 0x4d),bVar8);
    pvVar6 = local_68;
    if (cVar4 != '\0') {
      plVar2 = *(longlong **)(lVar7 + 0x6b0 + param_3);
      (**(code **)(*plVar2 + 0x60))
                (plVar2,local_68,(longlong)local_60 - (longlong)local_68,0,param_2);
    }
  }
  else {
    cVar4 = FUN_180079b18(puVar1,param_5,param_7,param_8,0x10050,(ulonglong *)&local_68);
    pvVar6 = local_68;
    if ((cVar4 != '\0') &&
       (plVar2 = *(longlong **)(lVar7 + 0x6b0 + param_3),
       iVar5 = (**(code **)(*plVar2 + 0x60))
                         (plVar2,local_68,(longlong)local_60 - (longlong)local_68,0,param_2),
       -1 < iVar5)) {
      local_50 = 1;
      local_58 = 0x100;
      local_68 = (LPVOID)thunk_FUN_1800fbccc(0x100);
      local_60 = local_68;
      cVar4 = FUN_180079d2c(puVar1,param_5,param_7,*(undefined4 *)(param_1 + 0x48),param_8,param_6,
                            param_9,0x20050,(ulonglong *)&local_68,(undefined8 *)0x0,
                            in_stack_ffffffffffffff78,*(undefined1 *)(param_1 + 0x4d),bVar8);
      pvVar3 = local_68;
      if ((cVar4 == '\0') ||
         (plVar2 = *(longlong **)(lVar7 + 0x6b0 + param_3),
         iVar5 = (**(code **)(*plVar2 + 0x68))
                           (plVar2,local_68,(longlong)local_60 - (longlong)local_68,0,param_2 + 1),
         iVar5 < 0)) {
        (**(code **)(*(longlong *)*param_2 + 0x10))();
        *param_2 = 0;
      }
      FUN_1800fbcf0(pvVar3);
    }
  }
  FUN_1800fbcf0(pvVar6);
  return param_2;
}

