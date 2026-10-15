/*
 * FUN_180030350 at 180030350
 * undefined8 __fastcall FUN_180030350(uint * param_1, ulonglong param_2, undefined4 param_3, int param_4, char param_5, longlong * param_6, uint * param_7, uint * param_8)
 * Address ranges: 180030350-1800305bc
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180030350(uint *param_1,ulonglong param_2,undefined4 param_3,int param_4,char param_5,
                       longlong *param_6,uint *param_7,uint *param_8)

{
  longlong *plVar1;
  bool bVar2;
  bool bVar3;
  longlong *plVar4;
  uint *puVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint local_c8 [12];
  undefined8 local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_84;
  uint local_80;
  int local_7c;
  undefined8 local_78;
  undefined4 local_70;
  uint local_68 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  bVar2 = true;
  if ((param_5 == '\0') || (param_1[4] == 5)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_c8[10] = 3;
  local_90 = param_2 & 0xffffffff;
  local_98 = 0;
  local_80 = (-(uint)bVar3 & 9) + 0x2c;
  param_1[0x42] = local_80;
  local_84 = 0x10001;
  local_78 = 0;
  local_70 = 2;
  local_88 = param_3;
  local_7c = param_4;
  lVar7 = FUN_1800463a4(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_c8 + 10);
  plVar4 = param_6;
  *param_6 = lVar7;
  uVar9 = 0;
  if (lVar7 != 0) {
    uVar6 = FUN_180046c48(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940),1);
    puVar5 = param_8;
    *param_8 = uVar6;
    if (uVar6 != 0xffffffff) {
      if (!bVar3) {
        uVar6 = FUN_180046c48(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),1);
        *param_7 = uVar6;
        if (uVar6 == 0xffffffff) {
          bVar2 = false;
        }
        else {
          local_c8[1] = 4;
          local_c8[8] = 0;
          local_c8[9] = 0;
          local_c8[2] = 0x1249;
          local_68[2] = 0x1249;
          local_c8[0] = 0x2f;
          local_68[0] = 0x2f;
          local_c8[4] = 0;
          local_c8[5] = 0xffffffff;
          local_c8[6] = 1;
          local_c8[7] = 0;
          local_68[1] = 6;
          local_58 = 0;
          uStack_50 = 0;
          local_48 = 0;
          FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),(longlong *)&param_6,
                        uVar6,0);
          puVar10 = local_68;
          if (param_4 == 1) {
            puVar10 = local_c8;
          }
          plVar1 = *(longlong **)
                    ((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
          (**(code **)(*plVar1 + 0x90))(plVar1,*plVar4,puVar10);
        }
      }
      if (bVar2) {
        local_c8[1] = 5;
        local_c8[2] = 0;
        local_c8[3] = 0;
        local_c8[4] = 0;
        local_c8[5] = 0;
        local_c8[0] = (-(uint)bVar3 & 10) + 0x2d;
        param_1[0x42] = local_c8[0];
        FUN_180047248(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940),(longlong *)&param_6,
                      *puVar5,0);
        plVar1 = *(longlong **)((ulonglong)*param_1 * 0x20 + 0x6d0 + *(longlong *)(param_1 + 0x30));
        uVar8 = (**(code **)(*plVar1 + 0xa8))(plVar1,*plVar4,local_c8,param_6);
        return CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      }
      uVar6 = *puVar5;
      if (uVar6 != 0xffffffff) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
        FUN_1800469e0(lVar7,uVar6,1);
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      }
    }
    uVar9 = (**(code **)(*(longlong *)*plVar4 + 0x10))();
  }
  return uVar9 & 0xffffffffffffff00;
}

