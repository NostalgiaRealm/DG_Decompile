/*
 * FUN_18004886c at 18004886c
 * undefined __fastcall FUN_18004886c(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 18004886c-18004893d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18004886c(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    iVar4 = 0;
    uVar6 = 0;
    do {
      if ((((*(int *)(param_1 + 0x520 + uVar6 * 0x18) != *(int *)(param_3 + uVar6 * 0x18)) ||
           (*(int *)(param_1 + 0x524 + uVar6 * 0x18) != *(int *)(param_3 + 4 + uVar6 * 0x18))) ||
          (*(int *)(param_1 + 0x528 + uVar6 * 0x18) != *(int *)(param_3 + 8 + uVar6 * 0x18))) ||
         (((*(int *)(param_1 + 0x52c + uVar6 * 0x18) != *(int *)(param_3 + 0xc + uVar6 * 0x18) ||
           (*(int *)(param_1 + 0x530 + uVar6 * 0x18) != *(int *)(param_3 + 0x10 + uVar6 * 0x18))) ||
          (*(int *)(param_1 + 0x534 + uVar6 * 0x18) != *(int *)(param_3 + 0x14 + uVar6 * 0x18))))) {
        puVar1 = (undefined8 *)(param_3 + uVar6 * 0x18);
        uVar3 = puVar1[1];
        iVar4 = (int)uVar6 + 1;
        puVar2 = (undefined8 *)(param_1 + 0x520 + uVar6 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
        *(undefined8 *)(param_1 + 0x530 + uVar6 * 0x18) =
             *(undefined8 *)(param_3 + 0x10 + uVar6 * 0x18);
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < param_2);
    if (iVar4 != 0) {
      FUN_180047348(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0xa8))
                (*(longlong **)(param_1 + 0x688),iVar4,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

