/*
 * FUN_1003e364 at 1003e364
 * undefined __fastcall FUN_1003e364(int param_1)
 * Address ranges: 1003e364-1003e3ba
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003e364(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x508);
  if (((*(char *)(param_1 + 0xa89) != '\0') && (*(char *)(param_1 + 0xa84) != '\0')) &&
     (*(int **)(param_1 + 0x14d4) != (int *)0x0)) {
    iVar3 = (**(code **)(**(int **)(param_1 + 0x14d4) + 0x38))();
    uVar2 = *(uint *)(iVar3 + 0x4c);
    *(undefined1 *)(param_1 + 0xa89) = 0;
    *(uint *)(param_1 + 0x934) = *(uint *)(param_1 + 0x934) | 1;
    *(uint *)(param_1 + 0x508) = (uVar2 & 1) * 2;
  }
  FUN_100061d3(param_1);
  *(undefined4 *)(param_1 + 0x508) = uVar1;
  return;
}

