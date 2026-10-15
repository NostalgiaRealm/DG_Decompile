/*
 * FUN_1800506c8 at 1800506c8
 * undefined __cdecl FUN_1800506c8(longlong param_1, ulonglong param_2, uint param_3, uint param_4, longlong param_5)
 * Address ranges: 1800506c8-180050747
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800506c8(longlong param_1,ulonglong param_2,uint param_3,uint param_4,longlong param_5)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + (param_2 & 0xffffffff) * 0x18c0;
  uVar5 = 0;
  iVar4 = 0;
  if (param_4 != 0) {
    lVar1 = lVar6 + 0x870;
    uVar3 = param_3;
    do {
      uVar2 = uVar5 + param_3;
      lVar7 = *(longlong *)(param_5 + (ulonglong)uVar5 * 8);
      if (*(longlong *)(lVar1 + (ulonglong)uVar2 * 8) != lVar7) {
        *(longlong *)(lVar1 + (ulonglong)uVar2 * 8) = lVar7;
        if (iVar4 == 0) {
          iVar4 = 1;
          uVar3 = uVar2;
        }
        else {
          iVar4 = (uVar5 - uVar3) + param_3 + 1;
        }
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < param_4);
    if (iVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000180050740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(lVar6 + 0x6b8) + 0x40))();
      return;
    }
  }
  return;
}

