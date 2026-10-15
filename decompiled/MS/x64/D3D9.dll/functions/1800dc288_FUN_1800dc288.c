/*
 * FUN_1800dc288 at 1800dc288
 * undefined __fastcall FUN_1800dc288(longlong param_1, ulonglong param_2, undefined8 param_3, uint param_4, longlong param_5, longlong param_6, longlong param_7)
 * Address ranges: 1800dc288-1800dc37d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800dc288(longlong param_1,ulonglong param_2,undefined8 param_3,uint param_4,
                  longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = 0;
  iVar5 = 0;
  uVar3 = 0;
  lVar6 = (param_2 & 0xffffffff) * 0x18c0 + param_1;
  if (param_4 != 0) {
    do {
      lVar1 = *(longlong *)(param_5 + uVar3 * 8);
      if (((*(longlong *)(lVar6 + 0xa70 + uVar3 * 8) != lVar1) ||
          (*(int *)(lVar6 + 0xaf0 + uVar3 * 4) != *(int *)(param_6 + uVar3 * 4))) ||
         (*(int *)(lVar6 + 0xb30 + uVar3 * 4) != *(int *)(param_7 + uVar3 * 4))) {
        *(longlong *)(lVar6 + 0xa70 + uVar3 * 8) = lVar1;
        *(undefined4 *)(lVar6 + 0xaf0 + uVar3 * 4) = *(undefined4 *)(param_6 + uVar3 * 4);
        *(undefined4 *)(lVar6 + 0xb30 + uVar3 * 4) = *(undefined4 *)(param_7 + uVar3 * 4);
        if (iVar5 == 0) {
          iVar5 = 1;
          uVar4 = uVar3;
        }
        else {
          iVar5 = ((int)uVar3 - (int)uVar4) + 1;
        }
      }
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_4);
    if (iVar5 != 0) {
      (**(code **)(**(longlong **)(lVar6 + 0x6b8) + 0x90))
                (*(longlong **)(lVar6 + 0x6b8),uVar4,iVar5,lVar6 + 0xa70 + uVar4 * 8,
                 lVar6 + 0xaf0 + uVar4 * 4,lVar6 + 0xb30 + uVar4 * 4);
    }
  }
  return;
}

