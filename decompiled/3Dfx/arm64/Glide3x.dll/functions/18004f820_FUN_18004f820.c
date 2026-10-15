/*
 * FUN_18004f820 at 18004f820
 * undefined __cdecl FUN_18004f820(longlong param_1, uint param_2, uint param_3, longlong param_4)
 * Address ranges: 18004f820-18004f827
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004f820(longlong param_1,uint param_2,uint param_3,longlong param_4)

{
  longlong lVar1;
  longlong *plVar2;
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
      lVar1 = param_1 + (ulonglong)(iVar3 + param_2) * 0x18;
      plVar2 = (longlong *)(param_4 + uVar4 * 0x18);
      if (((*(longlong *)(lVar1 + 0x478) != *plVar2) || (*(longlong *)(lVar1 + 0x480) != plVar2[1]))
         || (*(longlong *)(lVar1 + 0x488) != plVar2[2])) {
        *(longlong *)(lVar1 + 0x478) = *plVar2;
        *(longlong *)(lVar1 + 0x480) = plVar2[1];
        *(longlong *)(lVar1 + 0x488) = plVar2[2];
        if (iVar5 == 0) {
          iVar5 = 1;
          uVar6 = (ulonglong)(iVar3 + param_2);
        }
        else {
          iVar5 = (iVar3 - (int)uVar6) + param_2 + 1;
        }
      }
      uVar4 = (ulonglong)(iVar3 + 1U);
    } while (iVar3 + 1U < param_3);
    if (iVar5 != 0) {
      FUN_18004e3c0(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0x168))
                (*(longlong **)(param_1 + 0x688),uVar6,iVar5,param_1 + uVar6 * 0x18 + 0x478);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

