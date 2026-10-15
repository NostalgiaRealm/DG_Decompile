/*
 * FUN_180094cb8 at 180094cb8
 * undefined FUN_180094cb8(void)
 * Address ranges: 180094cb8-180094eef
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180094cb8(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 local_60 [2];
  undefined8 local_58;
  int local_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  
  plVar8 = (longlong *)*param_1;
  iVar1 = *(int *)(param_1 + 1);
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  lVar5 = (**(code **)(*plVar8 + 0xc0))(plVar8,0);
  if (lVar5 != 0) {
    plVar9 = *(longlong **)(lVar5 + 0x14);
    iVar4 = (**(code **)(*plVar9 + 0x70))(plVar9,&local_50,0);
    if (-1 < iVar4) {
      if (((local_50 == 4) && (2 < *(int *)((longlong)plVar8 + 0x44) - 3U)) &&
         (*(int *)(plVar8[0xb] + 0x14c0) == 0)) {
        iVar4 = iVar1 + *(int *)((longlong)plVar8 + 0x3c) * iVar2;
        uVar6 = FUN_1800f2320(*(undefined8 *)(plVar8[10] + 0x1b500),plVar9,iVar4);
        if (((uVar6 & 1) != 0) && (iVar4 == -0x7fffbffb || (iVar4 + 0x80000000U & 0x80000000) != 0))
        {
          return;
        }
      }
      if ((*(int *)((longlong)plVar8 + 0x2c) - 0x24U & 0xfffffffa) == 0) {
        if (*(longlong *)((longlong)plVar8 + 0xd4) == 0) {
          *(undefined1 *)((longlong)plVar8 + 0xfc) = 1;
          FUN_180090460(plVar8 + 0x16,(int)plVar8[6],*(undefined4 *)((longlong)plVar8 + 0x34));
          FUN_180092638(plVar8);
        }
        lVar5 = *(longlong *)((longlong)plVar8 + 0xd4);
      }
      else {
        if (*(longlong *)((longlong)plVar8 + 0xc4) == 0) {
          func_0x0001801bad48(&local_50);
          FUN_180090aa8(plVar8 + 0x16,*(undefined4 *)((longlong)plVar8 + 0x24),(int)plVar8[5],
                        (int)plVar8[6],*(undefined4 *)((longlong)plVar8 + 0x34),1,local_50,uStack_4c
                        ,0,0x1688,0x1688,local_44,uStack_40,0,0,0,0);
          FUN_180092638(plVar8);
        }
        lVar5 = *(longlong *)((longlong)plVar8 + 0xc4);
      }
      if (lVar5 != 0) {
        (**(code **)*plVar8)(plVar8,iVar1,iVar2);
        local_58 = *(undefined8 *)((longlong)plVar8 + 0xc4);
        local_60[0] = 0;
        lVar7 = *(longlong *)(plVar8[10] + 0x1b500);
        (*__imp_KERNEL32_dll_EnterCriticalSection)(lVar7 + 0x28);
        bVar3 = true;
        lVar5 = FUN_1800f2540(lVar7,&local_58);
        if ((lVar5 != 0) &&
           (plVar9 = (longlong *)FUN_1800f2718(lVar5 + 8,local_60), plVar9 != (longlong *)0x0)) {
          uVar6 = (**(code **)(**(longlong **)(*plVar9 + 0x18) + 0x40))();
          bVar3 = (ulonglong)plVar9[3] <= uVar6;
        }
        (*__imp_KERNEL32_dll_LeaveCriticalSection)(lVar7 + 0x28);
        if (bVar3) {
          lVar5 = 0;
        }
        else {
          lVar5 = FUN_1800e9320(*(undefined8 *)(plVar8[0xb] + 0x1508));
        }
        plVar8[0x27] = lVar5;
      }
    }
  }
  return;
}

