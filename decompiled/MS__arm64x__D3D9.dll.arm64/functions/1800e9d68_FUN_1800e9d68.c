/*
 * FUN_1800e9d68 at 1800e9d68
 * undefined FUN_1800e9d68(void)
 * Address ranges: 1800e9d68-1800e9e47
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e9d68(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_2;
  iVar5 = 0;
  uVar4 = 0;
  if (param_3 != 0) {
    do {
      iVar3 = (int)uVar4;
      plVar1 = (longlong *)(param_4 + uVar4 * 0x10);
      lVar2 = param_1 + (ulonglong)(iVar3 + param_2) * 0x10;
      if (((*(longlong *)(lVar2 + 0x268) != *plVar1) || (*(int *)(lVar2 + 0x270) != (int)plVar1[1]))
         || (*(int *)(lVar2 + 0x274) != *(int *)((longlong)plVar1 + 0xc))) {
        *(longlong *)(lVar2 + 0x268) = *plVar1;
        *(int *)(lVar2 + 0x270) = (int)plVar1[1];
        *(undefined4 *)(lVar2 + 0x274) = *(undefined4 *)((longlong)plVar1 + 0xc);
        if (iVar5 == 0) {
          uVar6 = (ulonglong)(iVar3 + param_2);
          iVar5 = 1;
        }
        else {
          iVar5 = (iVar3 - (int)uVar6) + param_2 + 1;
        }
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < param_3);
    if (iVar5 != 0) {
      FUN_1800e80d8(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x160))
                (*(longlong **)(param_1 + 0x688),uVar6,iVar5,param_1 + uVar6 * 0x10 + 0x268);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

