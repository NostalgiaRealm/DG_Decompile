/*
 * FUN_180048508 at 180048508
 * undefined __fastcall FUN_180048508(longlong param_1, uint param_2, uint param_3, longlong param_4)
 * Address ranges: 180048508-1800485ec
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180048508(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_3 != 0) {
    iVar6 = 0;
    uVar3 = 0;
    uVar5 = param_2;
    do {
      iVar2 = (int)uVar3;
      uVar4 = (ulonglong)(iVar2 + param_2);
      lVar1 = *(longlong *)(param_4 + uVar3 * 0x18);
      if (((*(longlong *)(param_1 + 0x478 + uVar4 * 0x18) != lVar1) ||
          (*(longlong *)(param_1 + 0x480 + uVar4 * 0x18) !=
           *(longlong *)(param_4 + 8 + uVar3 * 0x18))) ||
         (*(longlong *)(param_1 + 0x488 + uVar4 * 0x18) !=
          *(longlong *)(param_4 + 0x10 + uVar3 * 0x18))) {
        *(longlong *)(param_1 + 0x478 + uVar4 * 0x18) = lVar1;
        *(undefined8 *)(param_1 + 0x480 + uVar4 * 0x18) =
             *(undefined8 *)(param_4 + 8 + uVar3 * 0x18);
        *(undefined8 *)(param_1 + 0x488 + uVar4 * 0x18) =
             *(undefined8 *)(param_4 + 0x10 + uVar3 * 0x18);
        if (iVar6 == 0) {
          iVar6 = 1;
          uVar5 = iVar2 + param_2;
        }
        else {
          iVar6 = (iVar2 - uVar5) + 1 + param_2;
        }
      }
      uVar3 = (ulonglong)(iVar2 + 1U);
    } while (iVar2 + 1U < param_3);
    if (iVar6 != 0) {
      FUN_180047348(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x168))
                (*(longlong **)(param_1 + 0x688),uVar5,iVar6,
                 param_1 + (ulonglong)uVar5 * 0x18 + 0x478);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

