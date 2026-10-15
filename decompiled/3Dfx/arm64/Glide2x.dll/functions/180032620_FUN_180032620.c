/*
 * FUN_180032620 at 180032620
 * undefined8 __cdecl FUN_180032620(uint * param_1, ulonglong param_2, undefined4 param_3, int param_4, uint param_5, longlong * param_6, uint * param_7, uint * param_8)
 * Address ranges: 180032620-1800328cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180032620(uint *param_1,ulonglong param_2,undefined4 param_3,int param_4,uint param_5,
             longlong *param_6,uint *param_7,uint *param_8)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong local_f0 [2];
  uint local_e0 [12];
  undefined4 local_b0 [2];
  undefined8 local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint local_90;
  int iStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  uint local_70 [4];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if (((param_5 & 1) == 0) || (bVar5 = true, param_1[4] == 5)) {
    bVar5 = false;
  }
  local_88 = 0;
  local_90 = 0x35;
  if (!bVar5) {
    local_90 = 0x2c;
  }
  param_1[0x42] = local_90;
  local_b0[0] = 3;
  uStack_a0 = param_2 & 0xffffffff;
  local_a8 = 0;
  uStack_94 = 0x10001;
  local_80 = 2;
  local_98 = param_3;
  iStack_8c = param_4;
  lVar7 = FUN_180049178(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_b0);
  *param_6 = lVar7;
  if (lVar7 != 0) {
    uVar6 = FUN_180049ac8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940),1);
    *param_8 = uVar6;
    if (uVar6 != 0xffffffff) {
      bVar4 = true;
      if (!bVar5) {
        uVar6 = FUN_180049ac8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),1);
        *param_7 = uVar6;
        if (uVar6 == 0xffffffff) {
          bVar4 = false;
        }
        else {
          local_e0[0] = 0x2f;
          local_e0[1] = 4;
          local_e0[4] = 0;
          local_e0[5] = 0xffffffff;
          local_e0[6] = 1;
          local_e0[7] = 0;
          local_70[0] = 0x2f;
          local_70[1] = 6;
          local_e0[8] = 0;
          local_e0[9] = 0;
          local_e0[2] = 0x1249;
          local_70[2] = 0x1249;
          uStack_58 = 0;
          local_60 = 0;
          local_50 = 0;
          FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),local_f0,uVar6,0);
          plVar8 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          puVar3 = local_70;
          if (param_4 == 1) {
            puVar3 = local_e0;
          }
          (**(code **)(*plVar8 + 0x90))(plVar8,*param_6,puVar3,local_f0[0]);
        }
      }
      if (bVar4) {
        local_e0[3] = 0;
        local_e0[4] = 0;
        local_e0[5] = 0;
        local_e0[0] = 0x37;
        if (!bVar5) {
          local_e0[0] = 0x2d;
        }
        param_1[0x42] = local_e0[0];
        local_e0[1] = 5;
        local_e0[2] = 0;
        FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940),local_f0,*param_8,0);
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
        (**(code **)(*plVar8 + 0xa8))(plVar8,*param_6,local_e0,local_f0[0]);
        return 1;
      }
      uVar6 = *param_8;
      if (uVar6 != 0xffffffff) {
        lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1940);
        EnterCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
        uVar2 = uVar6 & 0xffff;
        uVar1 = uVar2 + 1;
        if (uVar2 < uVar1) {
          lVar10 = *(longlong *)
                    (*(longlong *)(lVar7 + 0x50) + (ulonglong)(uVar6 >> 0x10) * 0x10 + 8);
          do {
            uVar9 = -1L << ((ulonglong)uVar2 & 0x3f);
            uVar6 = (uVar2 & 0xffffffc0) + 0x40;
            if (uVar1 < uVar6) {
              uVar9 = 0xffffffffffffffffU >> (0x40 - (ulonglong)uVar1 & 0x3f) & uVar9;
            }
            *(ulonglong *)(lVar10 + (ulonglong)(uVar2 >> 6) * 8) =
                 *(ulonglong *)(lVar10 + (ulonglong)(uVar2 >> 6) * 8) & (uVar9 ^ 0xffffffffffffffff)
            ;
            uVar2 = uVar6;
          } while (uVar6 < uVar1);
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(lVar7 + 0x28));
      }
    }
    (**(code **)(*(longlong *)*param_6 + 0x10))();
  }
  return 0;
}

