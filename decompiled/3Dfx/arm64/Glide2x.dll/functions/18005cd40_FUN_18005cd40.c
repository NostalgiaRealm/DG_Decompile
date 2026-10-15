/*
 * FUN_18005cd40 at 18005cd40
 * bool __cdecl FUN_18005cd40(longlong param_1, longlong param_2, undefined8 * param_3, int param_4, undefined8 param_5)
 * Address ranges: 18005cd40-18005ce8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_18005cd40(longlong param_1,longlong param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  
  uVar2 = *(uint *)(param_2 + 0x10);
  lVar5 = param_1 + (ulonglong)uVar2 * 0x1ac0;
  if (param_4 == 0) {
    uStack_54 = 4;
  }
  else {
    uStack_54 = *(undefined4 *)(&DAT_1800621f0 + (longlong)param_4 * 4);
  }
  local_80 = param_3[2];
  local_74 = 1;
  uStack_88 = param_3[1];
  local_90 = *param_3;
  local_58 = 1;
  local_78 = *(undefined4 *)(param_3 + 3);
  local_6c = 0x200000060;
  local_50 = 0x802;
  if (*(char *)(param_1 + 0x313) == '\0') {
    local_50 = 2;
  }
  cVar3 = '\0';
  local_60 = param_5;
  if (*(int *)(param_1 + 0x6c8) != 0) {
    uVar6 = 0;
    uVar7 = *(undefined8 *)(param_1 + 0x688);
    uVar8 = *(undefined8 *)(*(longlong *)(lVar5 + 0x1e00) + 0x10);
    do {
      if (cVar3 != '\0') break;
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x6c0) + uVar6 * 8);
      cVar3 = (**(code **)(*plVar4 + 0x20))(plVar4,uVar2,uVar7,uVar8,&local_90,param_2 + 8);
      uVar1 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x6c8));
  }
  if (cVar3 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x688) + 0x50))
              (*(longlong **)(param_1 + 0x688),*(undefined8 *)(*(longlong *)(lVar5 + 0x1e00) + 0x10)
               ,&local_90,param_2 + 8);
  }
  else {
    (**(code **)(**(longlong **)(param_2 + 8) + 8))();
  }
  *(undefined1 *)(param_2 + 0xd6c) = *(undefined1 *)(param_1 + 0x313);
  return *(longlong *)(param_2 + 8) != 0;
}

