/*
 * FUN_1009887f at 1009887f
 * undefined __fastcall FUN_1009887f(void * param_1)
 * Address ranges: 1009887f-10098916
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1009887f(void *param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x3b8) != 0) {
    do {
      if (*(int *)(*(int *)((int)param_1 + 0x3b4) + uVar1 * 4) != 0) {
        FUN_10006954(param_1,uVar1);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x3b8));
  }
  thunk_FUN_100cfd6c(*(LPVOID *)((int)param_1 + 0x3b4));
  *(undefined4 *)((int)param_1 + 0x3b4) = 0;
  *(undefined4 *)((int)param_1 + 0x3b8) = 0;
  *(undefined4 *)((int)param_1 + 0x3bc) = 0;
  FUN_10091e2c((int)param_1);
  FUN_1009b9d9((undefined4 *)((int)param_1 + 0x6718));
  FUN_1009be4a((undefined4 *)((int)param_1 + 0x6750));
  uVar1 = 0;
  if (*(int *)((int)param_1 + 0x677c) != 0) {
    do {
      FUN_1009e598(*(undefined4 **)(*(int *)((int)param_1 + 0x6774) + 0xc + uVar1 * 0x10));
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)((int)param_1 + 0x677c));
  }
  *(undefined4 *)((int)param_1 + 0x677c) = 0;
  return;
}

