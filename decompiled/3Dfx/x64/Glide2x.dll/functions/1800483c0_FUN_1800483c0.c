/*
 * FUN_1800483c0 at 1800483c0
 * undefined __fastcall FUN_1800483c0(longlong param_1, uint param_2, uint param_3, longlong param_4)
 * Address ranges: 1800483c0-18004849d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800483c0(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_3 != 0) {
    iVar4 = 0;
    uVar2 = 0;
    uVar3 = param_2;
    do {
      uVar6 = (ulonglong)(uVar2 + param_2);
      uVar5 = (ulonglong)uVar2;
      lVar1 = *(longlong *)(param_4 + uVar5 * 0x10);
      if (((*(longlong *)(param_1 + 0x268 + uVar6 * 0x10) != lVar1) ||
          (*(int *)(param_1 + 0x270 + uVar6 * 0x10) != *(int *)(param_4 + 8 + uVar5 * 0x10))) ||
         (*(int *)(param_1 + 0x274 + uVar6 * 0x10) != *(int *)(param_4 + 0xc + uVar5 * 0x10))) {
        *(longlong *)(param_1 + 0x268 + uVar6 * 0x10) = lVar1;
        *(undefined4 *)(param_1 + 0x270 + uVar6 * 0x10) =
             *(undefined4 *)(param_4 + 8 + uVar5 * 0x10);
        *(undefined4 *)(param_1 + 0x274 + uVar6 * 0x10) =
             *(undefined4 *)(param_4 + 0xc + uVar5 * 0x10);
        if (iVar4 == 0) {
          iVar4 = 1;
          uVar3 = uVar2 + param_2;
        }
        else {
          iVar4 = (uVar2 - uVar3) + 1 + param_2;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_3);
    if (iVar4 != 0) {
      FUN_180047348(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x160))
                (*(longlong **)(param_1 + 0x688),uVar3,iVar4,
                 (ulonglong)uVar3 * 0x10 + 0x268 + param_1);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

