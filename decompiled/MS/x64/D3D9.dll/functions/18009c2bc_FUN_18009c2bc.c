/*
 * FUN_18009c2bc at 18009c2bc
 * undefined1 __fastcall FUN_18009c2bc(longlong param_1, longlong param_2, longlong * param_3, undefined4 param_4, longlong * param_5, int * param_6, uint * param_7, uint param_8, undefined8 param_9, int param_10)
 * Address ranges: 18009c2bc-18009c48d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1
FUN_18009c2bc(longlong param_1,longlong param_2,longlong *param_3,undefined4 param_4,
             longlong *param_5,int *param_6,uint *param_7,uint param_8,undefined8 param_9,
             int param_10)

{
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  uint uStack0000000000000058;
  longlong local_a8;
  undefined8 local_a0;
  int local_98;
  int iStack_94;
  uint local_90;
  int local_8c;
  longlong local_70;
  longlong local_68;
  
  plVar4 = &local_a0;
  lVar3 = param_1;
  FUN_18009b094(param_1,plVar4,*(longlong *)(param_1 + 0x58),param_2,param_3,param_5,param_6,param_7
                ,param_8,0,param_10);
  local_a8 = param_1;
  if (CONCAT44(iStack_94,local_98) == 0) {
    uVar2 = FUN_1800e5d98(lVar3,plVar4,param_6,param_3);
    local_90 = param_6[4];
    uStack0000000000000058 = (uint)uVar2;
    uVar2 = uVar2 & 0xffffffff;
    if ((uint)param_6[1] < local_90) {
      uVar1 = uStack0000000000000058 * param_8;
      local_a0._4_4_ = param_6[1];
      do {
        local_a0._0_4_ = *param_6;
        local_98 = param_6[2];
        iStack_94 = param_6[3];
        local_8c = param_6[5];
        uVar6 = local_a0._4_4_ + (int)uVar2;
        lVar3 = *(longlong *)(param_1 + 0x58);
        if (uVar6 < local_90) {
          local_90 = uVar6;
        }
        lVar5 = param_2;
        FUN_18009b094((ulonglong)local_90,&local_70,lVar3,param_2,param_3,param_5,(int *)&local_a0,
                      param_7,param_8,0,param_10);
        if (local_68 == 0) {
          FUN_1800ca538("[dgVoodoo] D3D12 Core: FATAL ERROR: Failed to allocate %s. WTF?\n",
                        "an upload heap buffer",lVar3,lVar5);
          DebugBreak();
          return 0;
        }
        FUN_18009c490(&local_a8,param_2,(longlong)param_3,param_4,param_5,&local_70,
                      (undefined8 *)param_6);
        local_90 = param_6[4];
        param_7 = (uint *)((longlong)param_7 + (ulonglong)uVar1);
        uVar2 = (ulonglong)uStack0000000000000058;
        local_a0._4_4_ = uVar6;
      } while (uVar6 < local_90);
    }
  }
  else {
    FUN_18009c490(&local_a8,param_2,(longlong)param_3,param_4,param_5,&local_a0,
                  (undefined8 *)param_6);
  }
  return 1;
}

