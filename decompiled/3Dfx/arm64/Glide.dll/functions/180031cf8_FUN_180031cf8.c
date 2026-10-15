/*
 * FUN_180031cf8 at 180031cf8
 * ulonglong __cdecl FUN_180031cf8(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180031cf8-180031e27
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180031cf8(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  int local_48 [6];
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3200) + 0x70))
                    (*(longlong **)(param_1 + 0x3200),local_48,0);
  if (((iVar2 < 0) || (local_48[0] != 4)) ||
     (uVar3 = FUN_1800475b8(*(longlong **)(*(longlong *)(param_1 + 0x31b0) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3200)), (uVar3 & 1) == 0)) {
    bVar1 = FUN_18004e188(*(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508),
                          *(ulonglong *)(param_1 + 0x3200),
                          (longlong *)(*(longlong *)(param_1 + 0x31c0) + 0x16d0),param_3,
                          param_3 + param_4,param_2);
    uVar3 = (ulonglong)bVar1;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x3200);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x31c0) + 0x1508);
    uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,0,&local_58,&local_60);
    if (-1 < (int)uVar3) {
      uVar3 = FUN_1800474d0(*(longlong **)(uVar4 + 0xb18),(ulonglong)plVar5);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_180001218((undefined8 *)((ulonglong)param_3 + local_60),param_2,(ulonglong)param_4
                           );
      }
      uStack_50 = (ulonglong)(param_3 + param_4);
      local_58 = (ulonglong)param_3;
      (**(code **)(*plVar5 + 0x48))(plVar5,0,&local_58);
      uVar3 = FUN_18004bee8(uVar4,(ulonglong)plVar5,0,1,0);
    }
  }
  return uVar3;
}

