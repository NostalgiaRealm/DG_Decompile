/*
 * FUN_180025608 at 180025608
 * ulonglong __cdecl FUN_180025608(longlong param_1, undefined8 * param_2, uint param_3, uint param_4)
 * Address ranges: 180025608-180025737
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180025608(longlong param_1,undefined8 *param_2,uint param_3,uint param_4)

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
  
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x3380) + 0x70))
                    (*(longlong **)(param_1 + 0x3380),local_48,0);
  if (((iVar2 < 0) || (local_48[0] != 4)) ||
     (uVar3 = FUN_18004a2f8(*(longlong **)(*(longlong *)(param_1 + 0x3330) + 0x1b500),
                            *(ulonglong *)(param_1 + 0x3380)), (uVar3 & 1) == 0)) {
    bVar1 = FUN_180050ec8(*(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508),
                          *(ulonglong *)(param_1 + 0x3380),
                          (longlong *)(*(longlong *)(param_1 + 0x3340) + 0x16d0),param_3,
                          param_3 + param_4,param_2);
    uVar3 = (ulonglong)bVar1;
  }
  else {
    plVar5 = *(longlong **)(param_1 + 0x3380);
    local_58 = 0;
    uStack_50 = 0;
    local_60 = 0;
    uVar4 = *(ulonglong *)(*(longlong *)(param_1 + 0x3340) + 0x1508);
    uVar3 = (**(code **)(*plVar5 + 0x40))(plVar5,0,&local_58,&local_60);
    if (-1 < (int)uVar3) {
      uVar3 = FUN_18004a210(*(longlong **)(uVar4 + 0xb18),(ulonglong)plVar5);
      if ((uVar3 & 1) != 0) {
        thunk_FUN_1800010d8((undefined8 *)((ulonglong)param_3 + local_60),param_2,(ulonglong)param_4
                           );
      }
      uStack_50 = (ulonglong)(param_3 + param_4);
      local_58 = (ulonglong)param_3;
      (**(code **)(*plVar5 + 0x48))(plVar5,0,&local_58);
      uVar3 = FUN_18004ec28(uVar4,(ulonglong)plVar5,0,1,0);
    }
  }
  return uVar3;
}

