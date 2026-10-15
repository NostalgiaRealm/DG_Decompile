/*
 * FUN_180031ce0 at 180031ce0
 * undefined8 __cdecl FUN_180031ce0(uint * param_1, longlong * param_2, ulonglong param_3, int param_4, undefined4 param_5, undefined4 param_6, int param_7)
 * Address ranges: 180031ce0-180032047
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180031ce0(uint *param_1,longlong *param_2,ulonglong param_3,int param_4,undefined4 param_5,
             undefined4 param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  ulonglong uStack_a0;
  int local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_78 [2];
  undefined8 local_70;
  ulonglong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_b0[0] = 3;
  uStack_a0 = param_3 & 0xffffffff;
  local_a8 = 0;
  uStack_94 = 0x10001;
  local_8c = 1;
  local_84 = 0x100000000;
  local_98 = param_4;
  local_90 = param_5;
  lVar3 = FUN_180049178(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_b0);
  *param_2 = lVar3;
  if (lVar3 != 0) {
    lVar3 = FUN_180049178(*(longlong *)(param_1 + 0x30) + 0x6d0,(ulonglong)*param_1,local_b0);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      uVar1 = FUN_180049ac8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),2);
      *(uint *)(param_2 + 3) = uVar1;
      if (uVar1 != 0xffffffff) {
        uVar1 = FUN_180049ac8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),2);
        *(uint *)((longlong)param_2 + 0x1c) = uVar1;
        if (uVar1 != 0xffffffff) {
          local_dc = 0x168800000004;
          *(undefined4 *)((longlong)param_2 + 0x24) = param_6;
          local_d0 = 0xffffffff00000000;
          uStack_c8 = 0;
          local_c0 = 0;
          local_e0 = param_6;
          FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_130,
                        *(uint *)(param_2 + 3),0);
          FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930),&local_128,
                        *(uint *)(param_2 + 3),1);
          plVar4 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          (**(code **)(*plVar4 + 0x90))(plVar4,*param_2,&local_e0,local_130);
          plVar4 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          (**(code **)(*plVar4 + 0x90))(plVar4,param_2[1],&local_e0,local_128);
          local_110 = *(undefined4 *)((longlong)param_2 + 0x24);
          uStack_10c = 4;
          uStack_100 = 0;
          local_108 = 0;
          FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_120,
                        *(uint *)((longlong)param_2 + 0x1c),0);
          FUN_18004a3f8(*(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938),&local_118,
                        *(uint *)((longlong)param_2 + 0x1c),1);
          plVar4 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          (**(code **)(*plVar4 + 0xa0))(plVar4,*param_2,&local_110,local_120);
          plVar4 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          (**(code **)(*plVar4 + 0xa0))(plVar4,param_2[1],&local_110,local_118);
          uVar1 = param_7 + 0xffU & 0xffffff00;
          local_f0 = 1;
          *(uint *)(param_2 + 5) = uVar1;
          local_f8 = 0x200000004;
          uStack_68 = (ulonglong)(uVar1 * param_4);
          local_ec = 0;
          local_78[0] = 1;
          local_70 = 0x10000;
          local_60 = 0x1000100000001;
          uStack_58 = 0x100000000;
          local_50 = 0x100000000;
          local_48 = 0;
          plVar4 = *(longlong **)
                    (*(longlong *)(param_1 + 0x30) + (ulonglong)*param_1 * 0x20 + 0x6d0);
          iVar2 = (**(code **)(*plVar4 + 0xd8))
                            (plVar4,&local_f8,0,local_78,0,0,&DAT_180063c58,param_2 + 2);
          if (-1 < iVar2) {
            return 1;
          }
          uVar1 = *(uint *)((longlong)param_2 + 0x1c);
          if (uVar1 != 0xffffffff) {
            lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1938);
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
            FUN_180049988(lVar3,uVar1,2);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
          }
          *(undefined4 *)((longlong)param_2 + 0x1c) = 0xffffffff;
        }
        uVar1 = *(uint *)(param_2 + 3);
        if (uVar1 != 0xffffffff) {
          lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x32) + 0x1930);
          EnterCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
          FUN_180049988(lVar3,uVar1,2);
          LeaveCriticalSection((LPCRITICAL_SECTION)(lVar3 + 0x28));
        }
        *(undefined4 *)(param_2 + 3) = 0xffffffff;
      }
      (**(code **)(*(longlong *)param_2[1] + 0x10))();
      param_2[1] = 0;
    }
    (**(code **)(*(longlong *)*param_2 + 0x10))();
    *param_2 = 0;
  }
  return 0;
}

