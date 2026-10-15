/*
 * FUN_18004cdf0 at 18004cdf0
 * undefined __cdecl FUN_18004cdf0(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004cdf0-18004cebf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004cdf0(longlong param_1,uint param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  if (param_2 != 0) {
    do {
      lVar3 = uVar5 * 0x10;
      lVar2 = param_1 + lVar3;
      if ((((*(int *)(lVar2 + 0x5e0) != *(int *)(lVar3 + param_3)) ||
           (*(int *)(lVar2 + 0x5e4) != *(int *)(param_3 + 4 + lVar3))) ||
          (*(int *)(lVar2 + 0x5e8) != *(int *)(param_3 + 8 + lVar3))) ||
         (*(int *)(lVar2 + 0x5ec) != *(int *)(param_3 + 0xc + lVar3))) {
        uVar7 = *(undefined8 *)(lVar3 + param_3);
        iVar6 = (int)uVar5 + 1;
        puVar4 = (undefined8 *)(lVar3 + param_1 + 0x5e0);
        puVar4[1] = ((undefined8 *)(lVar3 + param_3))[1];
        *puVar4 = uVar7;
      }
      uVar1 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar1;
    } while (uVar1 < param_2);
    if (iVar6 != 0) {
      FUN_18004b680(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb0))
                (*(longlong **)(param_1 + 0x688),iVar6,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

