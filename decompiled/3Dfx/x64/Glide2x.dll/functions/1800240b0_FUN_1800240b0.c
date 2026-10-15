/*
 * FUN_1800240b0 at 1800240b0
 * undefined __fastcall FUN_1800240b0(longlong param_1, undefined8 * param_2, undefined8 param_3, uint param_4, uint param_5, ulonglong param_6, ulonglong param_7, char param_8)
 * Address ranges: 1800240b0-18002438d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800240b0(longlong param_1,undefined8 *param_2,undefined8 param_3,uint param_4,uint param_5
                  ,ulonglong param_6,ulonglong param_7,char param_8)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong local_res8;
  ulonglong uVar8;
  longlong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0);
  cVar4 = FUN_180046284(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c8),1,
                        *(undefined8 *)(*(longlong *)(lVar1 + 0x1500) + 0x18),
                        *(undefined8 *)(*(longlong *)(lVar1 + 0x1508) + 0xb78),&local_48);
  if (cVar4 != '\0') {
    puVar6 = FUN_180040c80((longlong *)
                           (*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x19c0),
                           (byte *)&PTR_s_POSITION_18006c528,1);
    FUN_180019780(*(longlong *)(param_1 + 0x140),5,puVar6,*(undefined8 *)(param_1 + 0x660),param_3);
    FUN_180047a5c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  param_6,0,0,0x80);
    FUN_180047a5c(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),
                  param_7,0,0,4);
    FUN_180046da0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1938),
                  &local_68,param_5,0);
    uVar8 = 0;
    FUN_1800485f0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),1,
                  &local_68,0,(longlong *)0x0);
    FUN_180047edc(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),1,
                  local_38);
    lVar1 = *(longlong *)(param_1 + 0x140);
    uVar5 = *(uint *)(lVar1 + 0x31b8);
    lVar2 = *(longlong *)(lVar1 + 0x31b0);
    FUN_180046da0(*(longlong *)(*(longlong *)(lVar1 + 0x31c0) + 0x1930),&local_60,param_4,0);
    plVar3 = *(longlong **)((ulonglong)uVar5 * 0x20 + 0x6d0 + lVar2);
    (**(code **)(*plVar3 + 0xc0))(plVar3,1,local_40,local_60,uVar8 & 0xffffffff00000000);
    uVar7 = 0;
    FUN_1800481d8(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),2,
                  local_48);
    uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),param_8);
    FUN_18001a258(*(longlong *)(param_1 + 0x140),param_8);
    local_res8 = 0;
    uVar5 = FUN_180023b80(param_1,uVar7,&local_res8);
    if (local_res8 != 0) {
      FUN_1800200a0(param_1,param_2,(float *)((ulonglong)uVar5 * 0x10 + local_res8));
      if (*(int *)(*(longlong *)(param_1 + 0x668) + 0x34) != 0) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x668) + 0x34) = 0;
      }
      local_4c = 0x10;
      local_58 = *(undefined8 *)(*(longlong *)(param_1 + 0x668) + 0x80);
      local_50 = *(undefined4 *)(*(longlong *)(param_1 + 0x668) + 0x30);
      FUN_1800483c0(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),0
                    ,1,(longlong)&local_58);
      FUN_180048bb4(*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x140) + 0x31c0) + 0x1508),4
                    ,1,uVar5,0);
    }
  }
  return;
}

