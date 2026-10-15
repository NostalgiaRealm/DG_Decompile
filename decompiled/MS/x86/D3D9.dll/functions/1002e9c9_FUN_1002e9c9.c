/*
 * FUN_1002e9c9 at 1002e9c9
 * undefined __fastcall FUN_1002e9c9(int param_1)
 * Address ranges: 1002e9c9-1002ea8e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1002e9c9(int param_1)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  uint uVar1;
  
  if (*(void **)(param_1 + 0x148) != (void *)0x0) {
    FUN_100b4bd9(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),*(int **)(param_1 + 0x144));
    FUN_100b4bd9(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),*(int **)(param_1 + 0x140));
    FUN_100b4bd9(*(void **)(param_1 + 0x148),*(int *)(param_1 + 0x14c),*(int **)(param_1 + 0x13c));
    FUN_100b4834(extraout_ECX,1,param_1 + 0x138,param_1 + 0x134);
    FUN_100b4945(extraout_ECX_00,extraout_ECX_00,param_1 + 0xd4);
    FUN_100b4a29(extraout_ECX_01,extraout_ECX_01,param_1 + 0x118);
    FUN_100b46f4(extraout_ECX_02,0x12,param_1 + 0x8c);
    uVar1 = 0;
    do {
      thunk_FUN_100cfd6c(*(LPVOID *)(param_1 + 4 + uVar1 * 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < 0x11);
    FUN_100b42a6(*(int **)(param_1 + 0x148));
    *(undefined4 *)(param_1 + 0x148) = 0;
    *(undefined4 *)(param_1 + 0x150) = 0;
  }
  return;
}

