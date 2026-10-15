/*
 * FUN_1800f2568 at 1800f2568
 * bool __fastcall FUN_1800f2568(longlong param_1, longlong param_2, undefined4 * param_3, int param_4, undefined8 param_5)
 * Address ranges: 1800f2568-1800f26b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800f2568(longlong param_1,longlong param_2,undefined4 *param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  lVar6 = (ulonglong)uVar1 * 0x1ac0;
  if (param_4 == 0) {
    local_5c = 4;
  }
  else {
    local_5c = *(undefined4 *)(&DAT_180100410 + (longlong)param_4 * 4);
  }
  local_98 = *param_3;
  uStack_94 = param_3[1];
  uStack_90 = param_3[2];
  uStack_8c = *(undefined8 *)(param_3 + 3);
  uStack_84 = *(undefined8 *)(param_3 + 5);
  local_68 = param_5;
  local_7c = 1;
  local_74 = 0x60;
  local_58 = (-(uint)(*(char *)(param_1 + 0x313) != '\0') & 0x800) + 2;
  local_70 = 2;
  cVar5 = '\0';
  local_60 = 1;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    uVar8 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x688);
    uVar3 = *(undefined8 *)(*(longlong *)(lVar6 + 0x1e00 + param_1) + 0x10);
    do {
      if (cVar5 != '\0') break;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar8 * 8);
      cVar5 = (**(code **)(*plVar4 + 0x20))
                        (plVar4,(ulonglong)uVar1,uVar2,uVar3,&local_98,param_2 + 8);
      uVar7 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar7;
    } while (uVar7 < *(uint *)(param_1 + 0x6c8));
  }
  plVar4 = (longlong *)(param_2 + 8);
  if (cVar5 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))
              (*(longlong **)(param_1 + 0x688),
               *(undefined8 *)(*(longlong *)(lVar6 + 0x1e00 + param_1) + 0x10),&local_98,plVar4);
  }
  else {
    (**(code **)(*(longlong *)*plVar4 + 8))();
  }
  *(undefined1 *)(param_2 + 0xd6c) = *(undefined1 *)(param_1 + 0x313);
  return *plVar4 != 0;
}

