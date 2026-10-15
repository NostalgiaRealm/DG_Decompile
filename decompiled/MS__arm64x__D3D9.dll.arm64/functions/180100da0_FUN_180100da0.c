/*
 * FUN_180100da0 at 180100da0
 * undefined FUN_180100da0(void)
 * Address ranges: 180100da0-180100eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180100da0(undefined8 *param_1,undefined8 param_2,uint param_3,longlong param_4,
                      longlong param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char local_50 [16];
  
  *param_1 = 0;
  lVar2 = FUN_1800ff988();
  lVar3 = func_0x000180220598(lVar2,param_2);
  if (lVar3 == 0) {
    lVar4 = (*__imp_USER32_dll_DefWindowProcW)(param_2,param_3,param_4,param_5);
    goto LAB_180100ec8;
  }
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + 1;
  if ((param_3 == 0x402 && param_4 == 0x44454745) && param_5 == 0x45474544) {
    *(undefined1 *)(lVar2 + 0xa0d) = 1;
    lVar4 = 0;
  }
  else {
    local_50[0] = '\0';
    lVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))
                      (*(undefined8 **)(lVar3 + 0x10),lVar2,lVar3,param_2,param_3,param_4,param_5,
                       local_50);
    if (local_50[0] != '\0') {
      *param_1 = *(undefined8 *)(lVar3 + 0x20);
    }
    if ((param_3 < 0x1d) && ((0x10000040U >> (ulonglong)(param_3 & 0x1f) & 1) != 0)) {
      bVar1 = param_4 != 0;
    }
    else {
      if (param_3 != 0x21) goto LAB_180100e98;
      bVar1 = lVar4 - 1U < 2;
    }
    *(bool *)(lVar3 + 0x45) = bVar1;
  }
LAB_180100e98:
  *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + -1;
LAB_180100ec8:
  FUN_180100178(lVar2);
  return lVar4;
}

