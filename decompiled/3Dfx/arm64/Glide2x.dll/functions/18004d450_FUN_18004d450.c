/*
 * FUN_18004d450 at 18004d450
 * uint __cdecl FUN_18004d450(ulonglong param_1, longlong * param_2, longlong * param_3, uint param_4, uint param_5, undefined8 * param_6, uint param_7, char param_8)
 * Address ranges: 18004d450-18004d5db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_18004d450(ulonglong param_1,longlong *param_2,longlong *param_3,uint param_4,uint param_5,
                  undefined8 *param_6,uint param_7,char param_8)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined1 auStack_90 [8];
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  int local_68 [6];
  
  uVar5 = 0;
  iVar2 = (**(code **)(*param_2 + 0x70))(param_2,local_68,auStack_90);
  if (-1 < iVar2) {
    if (local_68[0] == 4 && param_8 == '\0') {
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      iVar2 = (**(code **)(*param_2 + 0x40))(param_2,0,&local_78,&local_88);
      if (-1 < iVar2) {
        plVar6 = *(longlong **)(param_1 + 0xb18);
        uVar5 = 1;
        local_80 = param_2;
        EnterCriticalSection((LPCRITICAL_SECTION)(plVar6 + 5));
        lVar3 = FUN_1800468c8(plVar6,(ulonglong *)&local_80);
        if (lVar3 != 0) {
          uVar4 = FUN_180045860(lVar3,lVar3,0);
          uVar5 = (uint)uVar4 & 0xff;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)(plVar6 + 5));
        if (uVar5 != 0) {
          thunk_FUN_180001218((undefined8 *)((ulonglong)param_4 + local_88),param_6,
                              (ulonglong)(param_5 - param_4));
        }
        local_78 = (ulonglong)param_4;
        uStack_70 = (ulonglong)param_5;
        (**(code **)(*param_2 + 0x48))(param_2,0,&local_78);
        if ((param_7 & 1) != 0) {
          (**(code **)(*param_2 + 0x48))(param_2,0,0);
        }
        FUN_18004b098(param_1,(ulonglong)param_2,0,1,0);
        if (uVar5 != 0) {
          return uVar5;
        }
      }
    }
    bVar1 = FUN_18004d338(param_1,(ulonglong)param_2,param_3,param_4,param_5,param_6);
    uVar5 = (uint)bVar1;
  }
  return uVar5;
}

