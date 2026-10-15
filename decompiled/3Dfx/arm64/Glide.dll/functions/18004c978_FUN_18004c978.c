/*
 * FUN_18004c978 at 18004c978
 * undefined __cdecl FUN_18004c978(longlong param_1, uint param_2, uint param_3, longlong param_4)
 * Address ranges: 18004c978-18004ca57
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004c978(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  iVar4 = 0;
  uVar3 = 0;
  if (param_3 != 0) {
    do {
      plVar1 = (longlong *)(param_4 + (ulonglong)uVar3 * 0x10);
      lVar2 = param_1 + (ulonglong)(uVar3 + param_2) * 0x10;
      if (((*(longlong *)(lVar2 + 0x268) != *plVar1) || (*(int *)(lVar2 + 0x270) != (int)plVar1[1]))
         || (*(int *)(lVar2 + 0x274) != *(int *)((longlong)plVar1 + 0xc))) {
        *(longlong *)(lVar2 + 0x268) = *plVar1;
        *(int *)(lVar2 + 0x270) = (int)plVar1[1];
        *(undefined4 *)(lVar2 + 0x274) = *(undefined4 *)((longlong)plVar1 + 0xc);
        if (iVar4 == 0) {
          uVar5 = (ulonglong)(uVar3 + param_2);
          iVar4 = 1;
        }
        else {
          iVar4 = (uVar3 - (int)uVar5) + param_2 + 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_3);
    if (iVar4 != 0) {
      FUN_18004b680(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x160))
                (*(longlong **)(param_1 + 0x688),uVar5,iVar4,param_1 + uVar5 * 0x10 + 0x268);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

