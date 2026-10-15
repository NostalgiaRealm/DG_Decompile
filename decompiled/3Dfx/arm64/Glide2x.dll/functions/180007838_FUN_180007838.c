/*
 * FUN_180007838 at 180007838
 * longlong __cdecl FUN_180007838(undefined8 * param_1, HWND param_2, uint param_3, WPARAM param_4, longlong param_5)
 * Address ranges: 180007838-180007983
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180007838(undefined8 *param_1,HWND param_2,uint param_3,WPARAM param_4,longlong param_5
                      )

{
  bool bVar1;
  WNDPROC pWVar2;
  longlong lVar3;
  longlong lVar4;
  char local_50 [16];
  
  *param_1 = 0;
  pWVar2 = FUN_180005f48();
  lVar3 = FUN_180007800((longlong)pWVar2,(longlong)param_2);
  if (lVar3 == 0) {
    lVar4 = DefWindowProcW(param_2,param_3,param_4,param_5);
    goto LAB_180007960;
  }
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
  if ((param_3 == 0x402 && param_4 == 0x44454745) && param_5 == 0x45474544) {
    pWVar2[0xa0d] = (code)0x1;
    lVar4 = 0;
  }
  else {
    local_50[0] = '\0';
    lVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))
                      (*(undefined8 **)(lVar3 + 0x10),pWVar2,lVar3,param_2,param_3,param_4,param_5,
                       local_50);
    if (local_50[0] != '\0') {
      *param_1 = *(undefined8 *)(lVar3 + 0x20);
    }
    if ((param_3 < 0x1d) && ((0x10000040U >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      bVar1 = param_4 != 0;
    }
    else {
      if (param_3 != 0x21) goto LAB_180007930;
      bVar1 = lVar4 - 1U < 2;
    }
    *(bool *)(lVar3 + 0x45) = bVar1;
  }
LAB_180007930:
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + -1;
LAB_180007960:
  FUN_180006738((undefined8 *)pWVar2);
  return lVar4;
}

