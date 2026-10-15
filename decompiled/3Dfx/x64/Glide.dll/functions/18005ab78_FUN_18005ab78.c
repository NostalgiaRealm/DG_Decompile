/*
 * FUN_18005ab78 at 18005ab78
 * undefined __fastcall FUN_18005ab78(longlong param_1, longlong param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined8 * param_8, uint param_9, undefined8 * param_10, uint param_11)
 * Address ranges: 18005ab78-18005ae5c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18005ab78(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 *param_8,uint param_9,
                  undefined8 *param_10,uint param_11)

{
  bool bVar1;
  uint uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong local_res10 [3];
  int local_c8 [4];
  int local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  int local_88 [2];
  undefined8 local_80;
  ulonglong local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  
  FUN_18005a684(param_1,param_2);
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != (undefined8 *)0x0)) {
    lVar5 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    local_88[0] = 3;
    local_80 = 0;
    local_6c = 0x10001;
    local_68 = 0x1b;
    local_64 = 1;
    local_5c = 0;
    local_78 = (ulonglong)param_3;
    local_70 = param_4;
    uVar2 = FUN_180046c48(*(longlong *)(lVar5 + 0x2230 + param_1),2);
    *(uint *)(param_2 + 0xdc8) = uVar2;
    if (uVar2 != 0xffffffff) {
      plVar3 = FUN_18005ae68(param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_88);
      *(longlong **)(param_2 + 0xdb8) = plVar3;
      if (plVar3 != (longlong *)0x0) {
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        local_b0 = 0x1c;
        local_ac = 4;
        local_a8 = 0x1688;
        local_90 = 0;
        plVar4 = FUN_180047248(*(longlong *)(lVar5 + 0x2230 + param_1),local_res10,
                               *(uint *)(param_2 + 0xdc8),0);
        plVar3 = *(longlong **)((ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0 + param_1);
        (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined8 *)(param_2 + 0xdb8),&local_b0,*plVar4);
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_c8[2] = 0;
        local_b4 = 1;
        local_c8[3] = param_3;
        local_b8 = param_4;
        bVar1 = FUN_18004a4ac(*(longlong *)(lVar5 + 0x1e08 + param_1),
                              *(longlong **)(param_2 + 0xdb8),0,
                              (longlong *)(lVar5 + param_1 + 0x1fd0),local_c8,param_8,param_9,0);
        if (bVar1) {
          *(undefined4 *)(param_2 + 0xc48) = param_5;
          *(undefined4 *)(param_2 + 0xc4c) = param_6;
          *(undefined4 *)(param_2 + 0xc50) = param_7;
          if (param_10 == (undefined8 *)0x0) {
            return;
          }
          plVar3 = FUN_18005ae68(param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_88);
          *(longlong **)(param_2 + 0xdc0) = plVar3;
          if (plVar3 != (longlong *)0x0) {
            plVar4 = FUN_180047248(*(longlong *)(lVar5 + 0x2230 + param_1),local_res10,
                                   *(uint *)(param_2 + 0xdc8),1);
            plVar3 = *(longlong **)((ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0 + param_1);
            (**(code **)(*plVar3 + 0x90))(plVar3,*(undefined8 *)(param_2 + 0xdc0),&local_b0,*plVar4)
            ;
            bVar1 = FUN_18004a4ac(*(longlong *)(lVar5 + 0x1e08 + param_1),
                                  *(longlong **)(param_2 + 0xdc0),0,
                                  (longlong *)(lVar5 + param_1 + 0x1fd0),local_c8,param_10,param_11,
                                  0);
            if (bVar1) {
              return;
            }
            (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
            *(undefined8 *)(param_2 + 0xdc0) = 0;
          }
        }
        (**(code **)(**(longlong **)(param_2 + 0xdb8) + 0x10))();
        *(undefined8 *)(param_2 + 0xdb8) = 0;
      }
      uVar2 = *(uint *)(param_2 + 0xdc8);
      if (uVar2 != 0xffffffff) {
        lVar5 = *(longlong *)(lVar5 + 0x2230 + param_1);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
        FUN_1800469e0(lVar5,uVar2,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      }
      *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
    }
  }
  return;
}

