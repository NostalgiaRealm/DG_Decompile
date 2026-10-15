/*
 * FUN_1800050e4 at 1800050e4
 * longlong __fastcall FUN_1800050e4(longlong * param_1, HWND param_2, UINT param_3, WPARAM param_4, longlong param_5)
 * Address ranges: 1800050e4-1800051f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800050e4(longlong *param_1,HWND param_2,UINT param_3,WPARAM param_4,longlong param_5)

{
  WNDPROC pWVar1;
  longlong *plVar2;
  longlong lVar3;
  WNDPROC pWVar4;
  bool bVar5;
  char local_res8 [32];
  
  *param_1 = 0;
  pWVar1 = FUN_180003fcc();
  pWVar4 = pWVar1;
  plVar2 = FUN_1800050b4((longlong)pWVar1,(longlong)param_2);
  if (plVar2 == (longlong *)0x0) {
    lVar3 = DefWindowProcW(param_2,param_3,param_4,param_5);
    goto LAB_1800051de;
  }
  *(int *)((longlong)plVar2 + 0x3c) = *(int *)((longlong)plVar2 + 0x3c) + 1;
  if (((param_3 == 0x402) && (param_4 == 0x44454745)) && (param_5 == 0x45474544)) {
    lVar3 = 0;
    pWVar4[0xa0d] = (code)0x1;
  }
  else {
    local_res8[0] = '\0';
    lVar3 = (*(code *)**(undefined8 **)plVar2[2])
                      ((undefined8 *)plVar2[2],pWVar1,plVar2,param_2,param_3,param_4,param_5,
                       local_res8);
    if (local_res8[0] != '\0') {
      *param_1 = plVar2[4];
    }
    if ((param_3 == 6) || (param_3 == 0x1c)) {
      bVar5 = param_4 != 0;
    }
    else {
      if (param_3 != 0x21) goto LAB_1800051c0;
      bVar5 = lVar3 - 1U < 2;
    }
    *(bool *)((longlong)plVar2 + 0x45) = bVar5;
  }
LAB_1800051c0:
  *(int *)((longlong)plVar2 + 0x3c) = *(int *)((longlong)plVar2 + 0x3c) + -1;
LAB_1800051de:
  FUN_1800041c8((undefined8 *)pWVar1);
  return lVar3;
}

