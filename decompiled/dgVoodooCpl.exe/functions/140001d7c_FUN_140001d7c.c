/*
 * FUN_140001d7c at 140001d7c
 * undefined __fastcall FUN_140001d7c(longlong * param_1)
 * Address ranges: 140001d7c-140001e6c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_140001d7c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  HWND hWnd;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  CHAR local_38 [16];
  
  hWnd = GetDlgItem(*(HWND *)(param_1[1] + 0x18),(int)param_1[2]);
  SendMessageW(hWnd,0x14b,0,0);
  FUN_14000e340(param_1[1],(int)param_1[2],0x140026670,1);
  FUN_14000e340(param_1[1],(int)param_1[2],0x140026678,0);
  lVar6 = *param_1;
  if (*(int *)(lVar6 + 600) != -1) {
    uVar5 = -(uint)(*(int *)(lVar6 + 4) != 0) & *(int *)(lVar6 + 4) - 1U;
    plVar1 = *(longlong **)(lVar6 + 0x210 + (longlong)*(int *)(lVar6 + 600) * 8);
    uVar2 = (**(code **)(*plVar1 + 0x50))(plVar1,uVar5);
    uVar4 = 0;
    if (uVar2 != 0) {
      do {
        plVar1 = *(longlong **)(*param_1 + 0x210 + (longlong)*(int *)(*param_1 + 600) * 8);
        lVar6 = *plVar1;
        uVar3 = (**(code **)(lVar6 + 0x58))(plVar1,uVar5,uVar4);
        FUN_140024290(local_38,"%ux",(ulonglong)uVar3,lVar6);
        FUN_14000e340(param_1[1],(int)param_1[2],(LPARAM)local_38,(ulonglong)uVar3);
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar2);
    }
  }
  return;
}

