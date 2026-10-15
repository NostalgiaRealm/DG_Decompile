/*
 * FUN_18004d140 at 18004d140
 * undefined __fastcall FUN_18004d140(longlong param_1, ulonglong param_2, ulonglong param_3, uint param_4, longlong param_5)
 * Address ranges: 18004d140-18004d1de
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004d140(longlong param_1,ulonglong param_2,ulonglong param_3,uint param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = param_3 & 0xffffffff;
  iVar5 = 0;
  lVar6 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  uVar3 = 0;
  if (param_4 != 0) {
    do {
      lVar1 = *(longlong *)(param_5 + uVar3 * 8);
      iVar2 = (int)uVar3;
      uVar3 = (ulonglong)(uint)(iVar2 + (int)param_3);
      if (*(longlong *)(lVar6 + 0x870 + uVar3 * 8) != lVar1) {
        *(longlong *)(lVar6 + 0x870 + uVar3 * 8) = lVar1;
        if (iVar5 == 0) {
          iVar5 = 1;
          uVar4 = uVar3;
        }
        else {
          iVar5 = (iVar2 - (int)uVar4) + 1 + (int)param_3;
        }
      }
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < param_4);
    if (iVar5 != 0) {
      (**(code **)(**(longlong **)(lVar6 + 0x6b8) + 0x40))();
    }
  }
  return;
}

