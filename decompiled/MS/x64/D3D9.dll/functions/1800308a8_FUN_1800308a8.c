/*
 * FUN_1800308a8 at 1800308a8
 * char __fastcall FUN_1800308a8(longlong * param_1)
 * Address ranges: 1800308a8-180030962
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800308a8(longlong *param_1)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  cVar2 = '\0';
  lVar4 = (**(code **)(*param_1 + 0x28))();
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  if ((lVar4 != 0) &&
     (plVar5 = (longlong *)(&DAT_1801128e0)[(ulonglong)uVar3 * 0x4b], plVar5 != (longlong *)0x0)) {
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x60))(plVar5,lVar4,0,0,4,2,2,0,0,0);
    if (plVar5 == (longlong *)0x0) {
      cVar2 = '\x01';
    }
    else {
      cVar1 = (**(code **)(*plVar5 + 0x28))(plVar5);
      if (cVar1 != '\0') {
        cVar2 = (**(code **)(*plVar5 + 0x30))(plVar5);
        cVar2 = (cVar2 != '\0') + '\x01';
      }
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  return cVar2;
}

