/*
 * FUN_18002356c at 18002356c
 * undefined __fastcall FUN_18002356c(longlong param_1)
 * Address ranges: 18002356c-180023616
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_18002356c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x2984);
  uVar4 = 1;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else if (iVar1 == 1) {
    uVar3 = 1;
  }
  else {
    if (iVar1 != 2) {
      return;
    }
    uVar3 = 2;
  }
  lVar2 = (**(code **)(**(longlong **)(param_1 + 0x3180) + 0x58))
                    (*(longlong **)(param_1 + 0x3180),uVar3);
  if ((*(int *)(lVar2 + 0x28) == *(int *)(lVar2 + 0x20)) &&
     (*(int *)(lVar2 + 0x2c) == *(int *)(lVar2 + 0x24))) {
    uVar4 = 0;
  }
  *(undefined1 *)(param_1 + 0x2bea) = uVar4;
  *(float *)(param_1 + 0x2bd8) = (float)*(uint *)(lVar2 + 0x28) / (float)*(uint *)(lVar2 + 0x20);
  *(float *)(param_1 + 0x2bdc) = (float)*(uint *)(lVar2 + 0x2c) / (float)*(uint *)(lVar2 + 0x24);
  return;
}

