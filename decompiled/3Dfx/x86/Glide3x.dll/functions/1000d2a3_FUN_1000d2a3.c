/*
 * FUN_1000d2a3 at 1000d2a3
 * undefined __fastcall FUN_1000d2a3(void * param_1)
 * Address ranges: 1000d2a3-1000d34e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000d2a3(void *param_1)

{
  HWND pHVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  
  pHVar1 = *(HWND *)(*(int *)((int)param_1 + 0xc) + 0x94);
  piVar4 = FUN_10003897(*(void **)((int)param_1 + 0x1c),(int)pHVar1);
  if (piVar4 != (int *)0x0) {
    iVar5 = FUN_10003414(pHVar1,0x100039aa);
    piVar4[7] = iVar5;
  }
  (**(code **)(**(int **)((int)param_1 + 0xc) + 0x2c))();
  pHVar1 = *(HWND *)(*(int *)((int)param_1 + 0xc) + 0x94);
  piVar4 = FUN_10003897(*(void **)((int)param_1 + 0x1c),(int)pHVar1);
  if (piVar4 != (int *)0x0) {
    FUN_10003414(pHVar1,piVar4[7]);
    piVar4[7] = 0;
  }
  cVar2 = (**(code **)(*(int *)((int)param_1 + 4) + 4))();
  if (cVar2 != '\0') {
    piVar4 = FUN_10003897(*(void **)((int)param_1 + 0x1c),
                          *(int *)(*(int *)((int)param_1 + 0xc) + 0x94));
    if ((piVar4 != (int *)0x0) && (*(char *)((int)piVar4 + 0x2d) != '\0')) {
      cVar2 = '\x01';
      goto LAB_1000d330;
    }
  }
  cVar2 = '\0';
LAB_1000d330:
  cVar3 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x24))();
  FUN_1000d244(param_1,cVar2,cVar3);
  *(undefined1 *)((int)param_1 + 0x6c) = 0;
  return;
}

