/*
 * FUN_1001452f at 1001452f
 * undefined __fastcall FUN_1001452f(int param_1)
 * Address ranges: 1001452f-100145e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001452f(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  uint uVar1;
  
  if (*(void **)(param_1 + 0x130) != (void *)0x0) {
    FUN_1004f9b0(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134),*(int **)(param_1 + 300));
    FUN_1004f9b0(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134),*(int **)(param_1 + 0x128));
    FUN_1004f9b0(*(void **)(param_1 + 0x130),*(int *)(param_1 + 0x134),*(int **)(param_1 + 0x124));
    FUN_1004f7df(extraout_ECX,extraout_ECX,(int *)(param_1 + 0x120),(int *)(param_1 + 0x11c));
    FUN_1004f8d0(extraout_ECX_00,extraout_ECX_00,param_1 + 0xe4);
    FUN_1004f6ee(extraout_ECX_01,extraout_ECX_01,param_1 + 0x6c);
    uVar1 = 0;
    do {
      thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 4 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0xd);
    FUN_1004f60d(*(int **)(param_1 + 0x130));
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}

