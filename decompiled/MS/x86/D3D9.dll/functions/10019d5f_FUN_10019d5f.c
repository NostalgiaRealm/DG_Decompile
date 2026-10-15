/*
 * FUN_10019d5f at 10019d5f
 * undefined __fastcall FUN_10019d5f(int param_1)
 * Address ranges: 10019d5f-10019ddf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10019d5f(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (*(char *)(iVar1 + 0x7e9) != *(char *)(iVar1 + 0x5d1)) {
    (**(code **)(**(int **)(param_1 + 0x14) + 0x34))(*(char *)(iVar1 + 0x5d1));
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x7e9) = *(undefined1 *)(iVar1 + 0x5d1);
  }
  iVar2 = *(int *)(param_1 + 0xc);
  if (((*(int *)(iVar2 + 0x7dc) != *(int *)(iVar1 + 0x5c4)) ||
      (*(char *)(iVar2 + 0x7eb) != *(char *)(iVar1 + 0x5d3))) ||
     (*(int *)(iVar2 + 0x7e0) != *(int *)(iVar1 + 0x5c8))) {
    *(int *)(iVar2 + 0x7dc) = *(int *)(iVar1 + 0x5c4);
    *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x7eb) = *(undefined1 *)(iVar1 + 0x5d3);
    *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x7e0) = *(undefined4 *)(iVar1 + 0x5c8);
  }
  return;
}

