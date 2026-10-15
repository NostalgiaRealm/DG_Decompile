/*
 * FUN_1800f2944 at 1800f2944
 * undefined __fastcall FUN_1800f2944(longlong param_1, longlong param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6, undefined4 param_7, uint * param_8, uint param_9, uint * param_10, uint param_11)
 * Address ranges: 1800f2944-1800f2c28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f2944(longlong param_1,longlong param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,uint *param_8,uint param_9,uint *param_10,
                  uint param_11)

{
  longlong *plVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
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
  
  FUN_1800f2450(param_1,param_2);
  if (((param_3 != 0) && (param_4 != 0)) && (param_8 != (uint *)0x0)) {
    lVar6 = (ulonglong)*(uint *)(param_2 + 0x10) * 0x1ac0;
    local_88[0] = 3;
    local_80 = 0;
    local_6c = 0x10001;
    local_68 = 0x1b;
    local_64 = 1;
    local_5c = 0;
    local_78 = (ulonglong)param_3;
    local_70 = param_4;
    uVar3 = FUN_1800e1704(*(longlong *)(lVar6 + 0x2230 + param_1),2);
    *(uint *)(param_2 + 0xdc8) = uVar3;
    if (uVar3 != 0xffffffff) {
      lVar4 = FUN_1800f2c34(param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_88);
      *(longlong *)(param_2 + 0xdb8) = lVar4;
      if (lVar4 != 0) {
        local_a0 = 0xffffffff00000000;
        uStack_98 = 0;
        local_b0 = 0x1c;
        local_ac = 4;
        local_a8 = 0x1688;
        local_90 = 0;
        plVar5 = FUN_1800e1d04(*(longlong *)(lVar6 + 0x2230 + param_1),local_res10,
                               *(uint *)(param_2 + 0xdc8),0);
        plVar1 = *(longlong **)((ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0 + param_1);
        (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined8 *)(param_2 + 0xdb8),&local_b0,*plVar5);
        local_c8[0] = 0;
        local_c8[1] = 0;
        local_c8[2] = 0;
        local_b4 = 1;
        local_c8[3] = param_3;
        local_b8 = param_4;
        bVar2 = FUN_1800e5510(*(longlong *)(lVar6 + 0x1e08 + param_1),
                              *(longlong **)(param_2 + 0xdb8),0,
                              (longlong *)(lVar6 + param_1 + 0x1fd0),local_c8,param_8,param_9,0);
        if (bVar2) {
          *(undefined4 *)(param_2 + 0xc48) = param_5;
          *(undefined4 *)(param_2 + 0xc4c) = param_6;
          *(undefined4 *)(param_2 + 0xc50) = param_7;
          if (param_10 == (uint *)0x0) {
            return;
          }
          lVar4 = FUN_1800f2c34(param_1,(ulonglong)*(uint *)(param_2 + 0x10),local_88);
          *(longlong *)(param_2 + 0xdc0) = lVar4;
          if (lVar4 != 0) {
            plVar5 = FUN_1800e1d04(*(longlong *)(lVar6 + 0x2230 + param_1),local_res10,
                                   *(uint *)(param_2 + 0xdc8),1);
            plVar1 = *(longlong **)((ulonglong)*(uint *)(param_2 + 0x10) * 0x20 + 0x6d0 + param_1);
            (**(code **)(*plVar1 + 0x90))(plVar1,*(undefined8 *)(param_2 + 0xdc0),&local_b0,*plVar5)
            ;
            bVar2 = FUN_1800e5510(*(longlong *)(lVar6 + 0x1e08 + param_1),
                                  *(longlong **)(param_2 + 0xdc0),0,
                                  (longlong *)(lVar6 + param_1 + 0x1fd0),local_c8,param_10,param_11,
                                  0);
            if (bVar2) {
              return;
            }
            (**(code **)(**(longlong **)(param_2 + 0xdc0) + 0x10))();
            *(undefined8 *)(param_2 + 0xdc0) = 0;
          }
        }
        (**(code **)(**(longlong **)(param_2 + 0xdb8) + 0x10))();
        *(undefined8 *)(param_2 + 0xdb8) = 0;
      }
      uVar3 = *(uint *)(param_2 + 0xdc8);
      if (uVar3 != 0xffffffff) {
        lVar6 = *(longlong *)(lVar6 + 0x2230 + param_1);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
        FUN_1800e149c(lVar6,uVar3,2);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar6 + 0x28));
      }
      *(undefined4 *)(param_2 + 0xdc8) = 0xffffffff;
    }
  }
  return;
}

