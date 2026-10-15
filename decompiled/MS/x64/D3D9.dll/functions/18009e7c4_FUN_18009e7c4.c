/*
 * FUN_18009e7c4 at 18009e7c4
 * undefined __fastcall FUN_18009e7c4(longlong * param_1)
 * Address ranges: 18009e7c4-18009e872
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18009e7c4(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  plVar2 = (longlong *)*param_1;
  lVar7 = param_1[1];
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  lVar6 = (**(code **)(*plVar2 + 0xc0))(plVar2,0);
  if (lVar6 != 0) {
    uVar5 = FUN_18009c9b0((longlong)plVar2,*(longlong **)(lVar6 + 0x14),(int)lVar7,iVar1);
    if (((uVar5 + 0x80000000 & 0x80000000) == 0) && (uVar5 != 0x80004005)) {
      bVar3 = FUN_18009bf6c((longlong)plVar2);
      if (bVar3) {
        (**(code **)*plVar2)(plVar2,(int)lVar7,iVar1);
        cVar4 = FUN_1800eac4c(*(longlong **)(plVar2[10] + 0x1b500),
                              *(ulonglong *)((longlong)plVar2 + 0xc4));
        if (cVar4 == '\0') {
          lVar7 = FUN_1800e3108(*(longlong *)(plVar2[0xb] + 0x1508));
        }
        else {
          lVar7 = 0;
        }
        plVar2[0x27] = lVar7;
      }
    }
  }
  return;
}

