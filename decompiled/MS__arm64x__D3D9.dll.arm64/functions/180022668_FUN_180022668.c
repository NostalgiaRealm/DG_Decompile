/*
 * FUN_180022668 at 180022668
 * undefined FUN_180022668(void)
 * Address ranges: 180022668-18002275f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180022668(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar2 = (**(code **)(*param_1 + 0x28))();
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((lVar2 != 0) &&
     (plVar4 = (longlong *)(&DAT_180253850)[(uVar3 & 0xffffffff) * 0x4b], plVar4 != (longlong *)0x0)
     ) {
    plVar4 = (longlong *)(**(code **)(*plVar4 + 0x60))(plVar4,lVar2,0,0,4,2,2,0,0,0);
    if (plVar4 == (longlong *)0x0) {
      iVar5 = 1;
    }
    else {
      cVar1 = (**(code **)(*plVar4 + 0x28))();
      if (cVar1 != '\0') {
        cVar1 = (**(code **)(*plVar4 + 0x30))(plVar4);
        iVar5 = 1;
        if (cVar1 != '\0') {
          iVar5 = 2;
        }
      }
      (**(code **)(*plVar4 + 0x20))(plVar4);
    }
  }
  *(bool *)((longlong)param_1 + 0x43) = iVar5 != 0;
  return;
}

