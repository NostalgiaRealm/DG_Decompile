/*
 * FUN_180030750 at 180030750
 * undefined __fastcall FUN_180030750(longlong * param_1, char param_2)
 * Address ranges: 180030750-1800308a7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180030750(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  lVar6 = (**(code **)(*param_1 + 0x28))();
  uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
  lVar1 = DAT_180111f20;
  if ((lVar6 != 0) &&
     (plVar7 = (longlong *)(&DAT_1801128e0)[(ulonglong)uVar5 * 0x4b], plVar7 != (longlong *)0x0)) {
    if (param_2 != '\0') {
      (**(code **)(*plVar7 + 0xd0))(plVar7,lVar6,*(undefined4 *)(DAT_180111f20 + 0x808));
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x60))(plVar7,lVar6,0,0,4,2,2,0,0,0);
    if (plVar7 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar7 + 0x28))(plVar7);
      if (cVar2 == '\0') {
        FUN_180030cb4(param_1);
      }
      cVar3 = (**(code **)(*plVar7 + 0x40))(plVar7);
      if (cVar3 != '\0') {
        (**(code **)(*plVar7 + 0x48))(plVar7);
        cVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
        *(bool *)(lVar1 + 0x820) = cVar3 == '\0';
        cVar4 = (**(code **)(*param_1 + 0x30))(param_1);
        FUN_180030a4c(param_1,cVar4,cVar3);
        if (*(HWND *)(DAT_180111f20 + 0x3b0) != (HWND)0x0) {
          PostMessageW(*(HWND *)(DAT_180111f20 + 0x3b0),0x408,0,0);
        }
      }
      (**(code **)(*plVar7 + 0x20))(plVar7);
      if (cVar2 == '\0') {
        FUN_180030cf0(param_1);
      }
    }
  }
  return;
}

