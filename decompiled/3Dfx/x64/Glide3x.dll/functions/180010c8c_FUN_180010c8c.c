/*
 * FUN_180010c8c at 180010c8c
 * undefined __fastcall FUN_180010c8c(longlong param_1, undefined8 param_2, undefined8 param_3, uint param_4)
 * Address ranges: 180010c8c-180010d59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180010c8c(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  HWND pHVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  pHVar5 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  plVar3 = FUN_180004efc(lVar4,(longlong)pHVar5);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_180004914(lVar4,pHVar5,0x180005040);
    plVar3[6] = lVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x58))();
  lVar4 = *(longlong *)(param_1 + 0x30);
  pHVar5 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  plVar3 = FUN_180004efc(lVar4,(longlong)pHVar5);
  if (plVar3 != (longlong *)0x0) {
    FUN_180004914(lVar4,pHVar5,plVar3[6]);
    plVar3[6] = 0;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 8))();
  if (cVar1 != '\0') {
    plVar3 = FUN_180004efc(*(longlong *)(param_1 + 0x30),
                           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
    if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x45) != '\0')) {
      cVar1 = '\x01';
      goto LAB_180010d30;
    }
  }
  cVar1 = '\0';
LAB_180010d30:
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x48))();
  FUN_180010c14(param_1,cVar1,cVar2,param_4);
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

