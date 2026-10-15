/*
 * FUN_18002ff0c at 18002ff0c
 * undefined8 __fastcall FUN_18002ff0c(uint * param_1, ulonglong param_2, undefined4 param_3, int param_4, undefined8 * param_5, longlong * param_6, uint * param_7, uint * param_8)
 * Address ranges: 18002ff0c-18003022b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18002ff0c(uint *param_1,ulonglong param_2,undefined4 param_3,int param_4,
                       undefined8 *param_5,longlong *param_6,uint *param_7,uint *param_8)

{
  char cVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong local_res8 [4];
  uint local_d8 [4];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68 [10];
  
  cVar1 = (char)param_1[0x12];
  local_a0[0] = 3;
  local_84 = 0x10001;
  local_90 = param_2 & 0xffffffff;
  local_98 = 0;
  uVar11 = (-(uint)(cVar1 != '\0') & 0x1d) + 0x1c;
  local_78 = 0;
  param_1[0x3c] = uVar11;
  local_70 = 1;
  local_80 = (-(uint)(cVar1 != '\0') & 0x1a) + 0x1b;
  local_88 = param_3;
  local_7c = param_4;
  plVar6 = (longlong *)
           FUN_1800463a4(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_a0);
  plVar10 = param_6;
  puVar2 = param_5;
  *param_5 = plVar6;
  uVar9 = 0;
  if (plVar6 == (longlong *)0x0) goto LAB_180030216;
  if (param_4 == 1) {
    *param_6 = (longlong)plVar6;
    (**(code **)(*plVar6 + 8))();
LAB_18002fffe:
    uVar4 = FUN_180046c48(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),2);
    puVar3 = param_7;
    *param_7 = uVar4;
    if (uVar4 != 0xffffffff) {
      uVar5 = FUN_180046c48(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),2);
      *param_8 = uVar5;
      uVar4 = *puVar3;
      if (uVar5 != 0xffffffff) {
        local_d8[1] = 4;
        local_c8 = 0xffffffff00000000;
        uStack_c0 = 0;
        local_d8[2] = 0x1688;
        local_b8 = 0;
        local_d8[0] = (-(uint)(cVar1 != '\0') & 0x1b) + 0x1e;
        FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),(longlong *)&param_5,
                      uVar4,0);
        plVar6 = *(longlong **)((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar6 + 0x90))(plVar6,*plVar10,local_d8,param_5);
        local_d8[0] = uVar11;
        FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),local_res8,*puVar3,1);
        plVar6 = *(longlong **)((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar6 + 0x90))(plVar6,*plVar10,local_d8);
        puVar3 = param_8;
        local_68[1] = 6;
        local_68[2] = 0;
        local_68[3] = 0;
        local_68[4] = 0;
        local_68[5] = 0;
        local_68[0] = uVar11;
        FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_b0,*param_8,0);
        plVar6 = *(longlong **)((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar6 + 0xa0))(plVar6,*puVar2,local_68,local_b0);
        FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_a8,*puVar3,1);
        plVar6 = *(longlong **)((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
        (**(code **)(*plVar6 + 0xa0))(plVar6,0,local_68,local_a8);
        uVar8 = (**(code **)(*(longlong *)*plVar10 + 8))();
        return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      if (uVar4 != 0xffffffff) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
        FUN_1800469e0(lVar7,uVar4,1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      }
    }
  }
  else {
    local_7c = 1;
    lVar7 = FUN_1800463a4(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_a0);
    *param_6 = lVar7;
    plVar10 = param_6;
    if (lVar7 != 0) goto LAB_18002fffe;
  }
  (**(code **)(*(longlong *)*plVar10 + 0x10))();
  uVar9 = (**(code **)(*(longlong *)*puVar2 + 0x10))();
LAB_180030216:
  return uVar9 & 0xffffffffffffff00;
}

