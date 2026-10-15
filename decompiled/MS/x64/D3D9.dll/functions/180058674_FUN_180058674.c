/*
 * FUN_180058674 at 180058674
 * longlong * __fastcall FUN_180058674(longlong param_1, longlong * param_2, longlong param_3, ulonglong param_4, longlong param_5, undefined8 * param_6, longlong param_7, undefined8 param_8)
 * Address ranges: 180058674-18005888f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong *
FUN_180058674(longlong param_1,longlong *param_2,longlong param_3,ulonglong param_4,longlong param_5
             ,undefined8 *param_6,longlong param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 *local_68;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined1 local_50;
  
  FUN_1800fbea0((undefined1 *)param_2,0,0x60);
  local_50 = 1;
  local_58 = 0x100;
  local_68 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
  local_60 = (int)local_68;
  puVar1 = (uint *)(param_1 + 0xb8);
  local_5c = (undefined4)((ulonglong)local_68 >> 0x20);
  bVar7 = *(int *)((ulonglong)*(uint *)(param_1 + 0x10) * 0x1ac0 + 0x904 + param_3) == 0x1002;
  if ((param_4 & 0x100) == 0) {
    cVar3 = FUN_180088494(puVar1,*(undefined4 *)(param_1 + 0x48),param_4,param_5,param_6,param_7,
                          param_8,0x10051,(ulonglong *)&local_68,param_2 + 1,
                          in_stack_ffffffffffffff78,*(undefined1 *)(param_1 + 0x4d),bVar7);
    puVar6 = local_68;
    if (cVar3 != '\0') {
      plVar4 = FUN_1800f08f4((ulonglong)(uint)(local_60 - (int)local_68),local_68);
      *param_2 = (longlong)plVar4;
    }
    goto LAB_180058871;
  }
  cVar3 = FUN_180079b18(puVar1,param_4,param_6,param_7,0x10051,(ulonglong *)&local_68);
  puVar6 = local_68;
  if (cVar3 == '\0') goto LAB_180058871;
  plVar4 = FUN_1800f08f4((ulonglong)(uint)(local_60 - (int)local_68),local_68);
  *param_2 = (longlong)plVar4;
  if (plVar4 == (longlong *)0x0) goto LAB_180058871;
  local_50 = 1;
  local_58 = 0x100;
  local_68 = (undefined8 *)thunk_FUN_1800fbccc(0x100);
  local_60 = (int)local_68;
  local_5c = (undefined4)((ulonglong)local_68 >> 0x20);
  cVar3 = FUN_180079d2c(puVar1,param_4,param_6,*(undefined4 *)(param_1 + 0x48),param_7,param_5,
                        param_8,0x20051,(ulonglong *)&local_68,param_2 + 7,in_stack_ffffffffffffff78
                        ,*(undefined1 *)(param_1 + 0x4d),bVar7);
  puVar2 = local_68;
  if (cVar3 == '\0') {
    plVar4 = (longlong *)*param_2;
    lVar5 = *plVar4;
LAB_1800587e8:
    (**(code **)(lVar5 + 0x10))(plVar4);
    *param_2 = 0;
  }
  else {
    plVar4 = FUN_1800f08f4((ulonglong)(uint)(local_60 - (int)local_68),local_68);
    param_2[6] = (longlong)plVar4;
    if (*param_2 == 0) {
      plVar4 = (longlong *)0x0;
      lVar5 = lRam0000000000000000;
      goto LAB_1800587e8;
    }
  }
  FUN_1800fbcf0(puVar2);
LAB_180058871:
  FUN_1800fbcf0(puVar6);
  return param_2;
}

