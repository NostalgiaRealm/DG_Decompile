/*
 * FUN_10095e1a at 10095e1a
 * undefined __fastcall FUN_10095e1a(int param_1)
 * Address ranges: 10095e1a-10095e5a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10095e1a(int param_1)

{
  int iVar1;
  int extraout_EDX;
  undefined4 in_XMM0_Da;
  undefined4 in_XMM1_Da;
  
  iVar1 = *(int *)(&DAT_00006704 + param_1);
  *(undefined4 *)(param_1 + 0xc2d0) = in_XMM1_Da;
  if ((*(uint *)(iVar1 + 0x1c) & 0x1000000) != 0) {
    FUN_10017abe();
    (**(code **)(**(int **)(extraout_EDX + 0x14) + 0x9c))
              (in_XMM0_Da,*(int *)(*(int *)(extraout_EDX + 0xc) + 0x94f) != 0);
  }
  return;
}

