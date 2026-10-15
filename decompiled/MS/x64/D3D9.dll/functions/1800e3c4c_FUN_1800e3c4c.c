/*
 * FUN_1800e3c4c at 1800e3c4c
 * undefined __fastcall FUN_1800e3c4c(longlong param_1, uint param_2, longlong param_3)
 * Address ranges: 1800e3c4c-1800e3cf6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800e3c4c(longlong param_1,uint param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (param_2 != 0) {
    iVar6 = 0;
    uVar4 = 0;
    do {
      uVar5 = (ulonglong)uVar4;
      if ((((*(int *)(param_1 + 0x5e0 + uVar5 * 0x10) != *(int *)(param_3 + uVar5 * 0x10)) ||
           (*(int *)(param_1 + 0x5e4 + uVar5 * 0x10) != *(int *)(param_3 + 4 + uVar5 * 0x10))) ||
          (*(int *)(param_1 + 0x5e8 + uVar5 * 0x10) != *(int *)(param_3 + 8 + uVar5 * 0x10))) ||
         (*(int *)(param_1 + 0x5ec + uVar5 * 0x10) != *(int *)(param_3 + 0xc + uVar5 * 0x10))) {
        puVar1 = (undefined8 *)(param_3 + uVar5 * 0x10);
        uVar3 = puVar1[1];
        iVar6 = uVar4 + 1;
        puVar2 = (undefined8 *)(param_1 + 0x5e0 + uVar5 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = uVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_2);
    if (iVar6 != 0) {
      FUN_1800e2604(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x688) + 0xb0))
                (*(longlong **)(param_1 + 0x688),iVar6,param_3);
      *(undefined1 *)(param_1 + 0x674) = 1;
    }
  }
  return;
}

