/*
 * FUN_180026b00 at 180026b00
 * undefined8 __cdecl FUN_180026b00(uint * param_1, ulonglong param_2, undefined4 param_3, int param_4, longlong * param_5, longlong * param_6, uint * param_7, uint * param_8)
 * Address ranges: 180026b00-180026e3b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180026b00(uint *param_1,ulonglong param_2,undefined4 param_3,int param_4,longlong *param_5,
             longlong *param_6,uint *param_7,uint *param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  uint local_d0 [4];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 local_a0 [2];
  undefined8 local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68 [6];
  
  local_78 = 0;
  local_70 = 1;
  bVar1 = (char)param_1[0x12] == '\0';
  uVar8 = 0x39;
  uVar7 = uVar8;
  if (bVar1) {
    uVar7 = 0x1e;
    uVar8 = 0x1c;
  }
  param_1[0x3c] = uVar8;
  local_a0[0] = 3;
  uStack_90 = param_2 & 0xffffffff;
  local_98 = 0;
  uStack_84 = 0x10001;
  local_80 = 0x35;
  if (bVar1) {
    local_80 = 0x1b;
  }
  local_88 = param_3;
  local_7c = param_4;
  plVar4 = (longlong *)
           FUN_18004cd08(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_a0);
  *param_5 = (longlong)plVar4;
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if (param_4 == 1) {
    *param_6 = (longlong)plVar4;
    (**(code **)(*plVar4 + 8))();
  }
  else {
    local_7c = 1;
    lVar5 = FUN_18004cd08(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_a0);
    *param_6 = lVar5;
    if (lVar5 == 0) goto LAB_180026dfc;
  }
  uVar2 = FUN_18004d658(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),2);
  *param_7 = uVar2;
  if (uVar2 != 0xffffffff) {
    uVar3 = FUN_18004d658(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),2);
    *param_8 = uVar3;
    uVar2 = *param_7;
    if (uVar3 != 0xffffffff) {
      local_d0[1] = 4;
      local_d0[2] = 0x1688;
      local_c0 = 0xffffffff00000000;
      uStack_b8 = 0;
      local_b0 = 0;
      local_d0[0] = uVar7;
      FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_f0,uVar2,0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0x90))(plVar4,*param_6,local_d0,local_f0);
      local_d0[0] = uVar8;
      FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_e8,*param_7,1);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0x90))(plVar4,*param_6,local_d0,local_e8);
      local_68[1] = 6;
      local_68[4] = 0;
      local_68[5] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      local_68[0] = uVar8;
      FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_e0,*param_8,0);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0xa0))(plVar4,*param_5,local_68,local_e0);
      FUN_18004df88(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_d8,*param_8,1);
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
      (**(code **)(*plVar4 + 0xa0))(plVar4,0,local_68,local_d8);
      (**(code **)(*(longlong *)*param_6 + 8))();
      return 1;
    }
    if (uVar2 != 0xffffffff) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930);
      EnterCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
      uVar7 = uVar2 & 0xffff;
      uVar8 = uVar7 + 1;
      if (uVar7 < uVar8) {
        lVar9 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + (ulonglong)(uVar2 >> 0x10) * 0x10 + 8);
        do {
          uVar6 = -1L << ((ulonglong)uVar7 & 0x3f);
          uVar2 = (uVar7 & 0xffffffc0) + 0x40;
          if (uVar8 < uVar2) {
            uVar6 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar8 & 0x3f) & uVar6;
          }
          *(ulonglong *)(lVar9 + (ulonglong)(uVar7 >> 6) * 8) =
               *(ulonglong *)(lVar9 + (ulonglong)(uVar7 >> 6) * 8) & (uVar6 ^ 0xffffffffffffffff);
          uVar7 = uVar2;
        } while (uVar2 < uVar8);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(lVar5 + 0x28));
    }
  }
LAB_180026dfc:
  (**(code **)(*(longlong *)*param_6 + 0x10))();
  (**(code **)(*(longlong *)*param_5 + 0x10))();
  return 0;
}

