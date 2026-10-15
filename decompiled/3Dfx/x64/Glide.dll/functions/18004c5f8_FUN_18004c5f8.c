/*
 * FUN_18004c5f8 at 18004c5f8
 * undefined __fastcall FUN_18004c5f8(longlong param_1, longlong param_2, int param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, longlong param_8, undefined4 param_9, longlong param_10, undefined4 param_11)
 * Address ranges: 18004c5f8-18004c7b8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c5f8(longlong param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,longlong param_8,undefined4 param_9,
                  longlong param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  
  FUN_18004b578(param_1,param_2);
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != 0)) {
    puVar1 = (undefined8 *)(param_2 + 0xdb8);
    lVar6 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x18c0;
    local_68 = 1;
    local_64 = 1;
    local_5c = 1;
    local_54 = 1;
    local_60 = 0x1b;
    local_50 = 8;
    local_48 = 0;
    local_a8 = param_8;
    local_a0 = param_9;
    local_9c = 0;
    plVar4 = *(longlong **)(lVar6 + 0x6b0 + param_1);
    local_70 = param_3;
    local_6c = param_4;
    iVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_70,&local_a8,puVar1);
    if (-1 < iVar5) {
      plVar4 = *(longlong **)(lVar6 + 0x6b0 + param_1);
      puVar2 = (undefined8 *)(param_2 + 0xdc0);
      local_88 = 0x1c;
      local_84 = 4;
      local_7c = 0xffffffff;
      local_78 = 0;
      iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,*puVar1,&local_88,puVar2);
      if (-1 < iVar5) {
        *(undefined4 *)(param_2 + 0xc48) = param_5;
        *(undefined4 *)(param_2 + 0xc4c) = param_6;
        *(undefined4 *)(param_2 + 0xc50) = param_7;
        if (param_10 == 0) {
          return;
        }
        plVar4 = *(longlong **)(lVar6 + 0x6b0 + param_1);
        puVar3 = (undefined8 *)(param_2 + 0xdc8);
        local_98 = param_10;
        local_90 = param_11;
        local_8c = 0;
        iVar5 = (**(code **)(*plVar4 + 0x28))(plVar4,&local_70,&local_98,puVar3);
        if (-1 < iVar5) {
          plVar4 = *(longlong **)(lVar6 + 0x6b0 + param_1);
          iVar5 = (**(code **)(*plVar4 + 0x38))(plVar4,*puVar3,&local_88,param_2 + 0xdd0);
          if (-1 < iVar5) {
            return;
          }
          (**(code **)(*(longlong *)*puVar3 + 0x10))();
          *puVar3 = 0;
        }
        (**(code **)(*(longlong *)*puVar2 + 0x10))();
        *puVar2 = 0;
      }
      (**(code **)(*(longlong *)*puVar1 + 0x10))();
      *puVar1 = 0;
    }
  }
  return;
}

