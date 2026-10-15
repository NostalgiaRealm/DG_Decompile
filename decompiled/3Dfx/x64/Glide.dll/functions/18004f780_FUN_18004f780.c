/*
 * FUN_18004f780 at 18004f780
 * undefined __fastcall FUN_18004f780(longlong * param_1, undefined8 * param_2, longlong * param_3, char param_4)
 * Address ranges: 18004f780-18004f8be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f780(longlong *param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *local_res10;
  DWORD local_a8;
  int local_a4;
  DWORD local_98;
  int local_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  DWORD local_78;
  int local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  
  (**(code **)(*(longlong *)param_2[1] + 0x60))((longlong *)param_2[1],&local_78);
  local_80 = local_60;
  local_90 = local_70;
  uStack_8c = uStack_6c;
  uStack_88 = uStack_68;
  uStack_84 = uStack_64;
  if ((*(int *)((longlong)param_2 + 0x3c) == 1) ||
     ((*(int *)((longlong)param_2 + 0x3c) - 2U < 2 && (*(int *)(param_2 + 6) - 1U < 2)))) {
    local_res10 = param_3;
    if (param_3 == (longlong *)0x0) {
      (**(code **)(*(longlong *)param_2[1] + 0x78))((longlong *)param_2[1],&local_res10);
    }
    plVar2 = local_res10;
    if (local_res10 != (longlong *)0x0) {
      (**(code **)(*local_res10 + 8))(local_res10);
    }
    FUN_18004f180((longlong)param_1,plVar2,&local_a8);
    local_98 = local_a8;
    local_94 = local_a4;
    local_80 = 0;
    if (local_res10 != param_3) {
      (**(code **)(*local_res10 + 0x10))();
    }
  }
  else {
    local_a8 = *(DWORD *)(param_2 + 3);
    local_a4 = *(int *)((longlong)param_2 + 0x1c);
    local_98 = local_a8;
    local_94 = local_a4;
  }
  if (((local_78 != local_a8) || (local_74 != local_a4)) || (param_4 != '\0')) {
    plVar2 = param_1;
    (**(code **)(*param_1 + 0x20))(param_1,param_2);
    uVar1 = FUN_18004f5bc((ulonglong)plVar2,(longlong)param_2);
    FUN_18004f61c(plVar2,param_2,(int *)&local_98,(char)uVar1);
    (**(code **)(*param_1 + 0x18))(param_1,param_2,0);
    (**(code **)(*(longlong *)param_1[0xd1] + 0x40))((longlong *)param_1[0xd1],*param_2,1);
  }
  return;
}

