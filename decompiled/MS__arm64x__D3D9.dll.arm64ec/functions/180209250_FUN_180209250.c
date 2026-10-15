/*
 * FUN_180209250 at 180209250
 * undefined FUN_180209250(void)
 * Address ranges: 180209250-180209343
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180209250(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  code *extraout_x11;
  int iVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_2;
  iVar6 = 0;
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      iVar4 = (int)uVar5;
      plVar1 = (longlong *)(param_4 + uVar5 * 0x10);
      lVar3 = param_1 + (ulonglong)(iVar4 + param_2) * 0x10;
      if (((*(longlong *)(lVar3 + 0x268) != *plVar1) || (*(int *)(lVar3 + 0x270) != (int)plVar1[1]))
         || (*(int *)(lVar3 + 0x274) != *(int *)((longlong)plVar1 + 0xc))) {
        *(longlong *)(lVar3 + 0x268) = *plVar1;
        *(int *)(lVar3 + 0x270) = (int)plVar1[1];
        *(undefined4 *)(lVar3 + 0x274) = *(undefined4 *)((longlong)plVar1 + 0xc);
        if (iVar6 == 0) {
          iVar6 = 1;
          uVar7 = (ulonglong)(iVar4 + param_2);
        }
        else {
          iVar6 = (iVar4 - (int)uVar7) + param_2 + 1;
        }
      }
      uVar5 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < param_3);
    if (iVar6 != 0) {
      FUN_180206ff8(param_1);
      lVar3 = param_1 + uVar7 * 0x10;
      uVar2 = (*(code *)__hybrid_os_arm64x_dispatch_icall)(0x180224000);
      (*extraout_x11)(uVar2,uVar7,iVar6,lVar3 + 0x268);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

