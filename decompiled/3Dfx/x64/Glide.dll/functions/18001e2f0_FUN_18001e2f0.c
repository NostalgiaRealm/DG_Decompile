/*
 * FUN_18001e2f0 at 18001e2f0
 * undefined __fastcall FUN_18001e2f0(longlong param_1, undefined8 param_2, undefined8 param_3, uint param_4)
 * Address ranges: 18001e2f0-18001e3bd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18001e2f0(longlong param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  char cVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  HWND pHVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x30);
  pHVar5 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  plVar3 = FUN_1800052d4(lVar4,(longlong)pHVar5);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = FUN_180004cec(lVar4,pHVar5,0x180005418);
    plVar3[6] = lVar4;
  }
  (**(code **)(**(longlong **)(param_1 + 0x18) + 0x50))();
  lVar4 = *(longlong *)(param_1 + 0x30);
  pHVar5 = *(HWND *)(*(longlong *)(param_1 + 0x18) + 0xa0);
  plVar3 = FUN_1800052d4(lVar4,(longlong)pHVar5);
  if (plVar3 != (longlong *)0x0) {
    FUN_180004cec(lVar4,pHVar5,plVar3[6]);
    plVar3[6] = 0;
  }
  cVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 8))();
  if (cVar1 != '\0') {
    plVar3 = FUN_1800052d4(*(longlong *)(param_1 + 0x30),
                           *(longlong *)(*(longlong *)(param_1 + 0x18) + 0xa0));
    if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x45) != '\0')) {
      cVar1 = '\x01';
      goto LAB_18001e394;
    }
  }
  cVar1 = '\0';
LAB_18001e394:
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x40))();
  FUN_18001e278(param_1,cVar1,cVar2,param_4);
  *(undefined1 *)(param_1 + 0xd8) = 0;
  return;
}

