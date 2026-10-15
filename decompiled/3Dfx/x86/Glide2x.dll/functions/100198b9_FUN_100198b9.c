/*
 * FUN_100198b9 at 100198b9
 * undefined __fastcall FUN_100198b9(void * param_1)
 * Address ranges: 100198b9-10019967
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100198b9(void *param_1)

{
  HWND pHVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  pHVar1 = *(HWND *)(*(int *)((int)param_1 + 0xc) + 0x94);
  piVar4 = FUN_10003b03(*(void **)((int)param_1 + 0x1c),(int)pHVar1);
  if (piVar4 != (int *)0x0) {
    iVar5 = FUN_10003680(pHVar1,0x10003c16);
    piVar4[7] = iVar5;
  }
  (**(code **)(**(int **)((int)param_1 + 0xc) + 0x28))();
  pHVar1 = *(HWND *)(*(int *)((int)param_1 + 0xc) + 0x94);
  piVar4 = FUN_10003b03(*(void **)((int)param_1 + 0x1c),(int)pHVar1);
  if (piVar4 != (int *)0x0) {
    FUN_10003680(pHVar1,piVar4[7]);
    piVar4[7] = 0;
  }
  cVar2 = (**(code **)(*(int *)((int)param_1 + 4) + 4))();
  if (cVar2 != '\0') {
    piVar4 = FUN_10003b03(*(void **)((int)param_1 + 0x1c),
                          *(int *)(*(int *)((int)param_1 + 0xc) + 0x94));
    if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x2d) != '\0')) {
      cVar2 = '\x01';
      goto LAB_10019946;
    }
  }
  cVar2 = '\0';
LAB_10019946:
  cVar3 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x20))();
  FUN_1001985a(param_1,cVar2,cVar3);
  *(undefined1 *)((int)param_1 + 0x8c) = 0;
  return;
}

