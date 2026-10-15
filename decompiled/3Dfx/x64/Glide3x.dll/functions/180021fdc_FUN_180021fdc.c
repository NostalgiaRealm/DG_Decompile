/*
 * FUN_180021fdc at 180021fdc
 * undefined8 __fastcall FUN_180021fdc(uint * param_1, longlong * param_2, ulonglong param_3, int param_4, undefined4 param_5, undefined4 param_6, int param_7)
 * Address ranges: 180021fdc-180022387
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180021fdc(uint *param_1,longlong *param_2,ulonglong param_3,int param_4,
                       undefined4 param_5,undefined4 param_6,int param_7)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined7 extraout_var;
  ulonglong uVar5;
  longlong local_res8;
  longlong local_res10;
  undefined8 in_stack_fffffffffffffec8;
  undefined8 in_stack_fffffffffffffed0;
  undefined4 local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8 [2];
  undefined8 local_c0;
  ulonglong local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_90 [2];
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  
  local_b8 = param_3 & 0xffffffff;
  local_c8[0] = 3;
  local_c0 = 0;
  local_a4 = 1;
  local_98 = 1;
  local_ac = 0x10001;
  local_a8 = param_5;
  local_9c = 0;
  local_b0 = param_4;
  lVar4 = FUN_180048508(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_c8);
  *param_2 = lVar4;
  uVar5 = 0;
  if (lVar4 != 0) {
    lVar4 = FUN_180048508(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_c8);
    param_2[1] = lVar4;
    if (lVar4 != 0) {
      uVar3 = FUN_180048dac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),2);
      *(uint *)(param_2 + 3) = uVar3;
      if (uVar3 != 0xffffffff) {
        uVar3 = FUN_180048dac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),2);
        *(uint *)((longlong)param_2 + 0x1c) = uVar3;
        if (uVar3 != 0xffffffff) {
          *(undefined4 *)((longlong)param_2 + 0x24) = param_6;
          local_100 = param_6;
          local_fc = 4;
          local_f8 = 0x1688;
          local_e0 = 0;
          local_f0 = 0xffffffff00000000;
          uStack_e8 = 0;
          FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_res8,
                        *(uint *)(param_2 + 3),0);
          FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_res10,
                        *(uint *)(param_2 + 3),1);
          plVar1 = *(longlong **)
                    ((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar1 + 0x90))(plVar1,*param_2,&local_100,local_res8);
          plVar1 = *(longlong **)
                    ((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar1 + 0x90))(plVar1,param_2[1],&local_100);
          local_118 = *(undefined4 *)((longlong)param_2 + 0x24);
          uStack_108 = 0;
          local_114 = 4;
          local_110 = 0;
          FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_d8,
                        *(uint *)((longlong)param_2 + 0x1c),0);
          FUN_1800493ac(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_d0,
                        *(uint *)((longlong)param_2 + 0x1c),1);
          plVar1 = *(longlong **)
                    ((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar1 + 0xa0))(plVar1,*param_2,&local_118,local_d8);
          plVar1 = *(longlong **)
                    ((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar1 + 0xa0))(plVar1,param_2[1],&local_118);
          uVar3 = param_7 + 0xffU & 0xffffff00;
          *(uint *)(param_2 + 5) = uVar3;
          local_80 = (ulonglong)(uVar3 * param_4);
          local_58 = 4;
          local_54 = 0x100000002;
          uStack_4c = 0;
          local_90[0] = 1;
          local_88 = 0x10000;
          local_78 = 1;
          local_74 = 0x10001;
          local_6c = 1;
          local_64 = 1;
          bVar2 = FUN_1800483a8(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,&local_58,
                                0,local_90,0,in_stack_fffffffffffffec8,in_stack_fffffffffffffed0,
                                param_2 + 2);
          if (bVar2 != 0) {
            return CONCAT71(extraout_var,1);
          }
          uVar3 = *(uint *)((longlong)param_2 + 0x1c);
          if (uVar3 != 0xffffffff) {
            lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
            FUN_180048b44(lVar4,uVar3,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
          }
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
        }
        uVar3 = *(uint *)(param_2 + 3);
        if (uVar3 != 0xffffffff) {
          lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
          FUN_180048b44(lVar4,uVar3,2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar4 + 0x28));
        }
        *(undefined4 *)(param_2 + 3) = 0xffffffff;
      }
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
      param_2[1] = 0;
    }
    uVar5 = (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
  }
  return uVar5 & 0xffffffffffffff00;
}

