/*
 * FUN_100065bd at 100065bd
 * undefined __fastcall FUN_100065bd(int param_1)
 * Address ranges: 100065bd-10006690
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100065bd(int param_1)

{
  int *this;
  uint uVar1;
  int local_c;
  int local_8;
  
  local_c = param_1;
  local_8 = param_1;
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x14c));
  uVar1 = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  thunk_FUN_1005c76c(*(LPVOID *)(param_1 + 0x15c));
  *(undefined4 *)(param_1 + 0x15c) = 0;
  this = (int *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  local_8 = 8;
  if (*(uint *)(param_1 + 0x17c) < 9) {
    do {
      if (*(int *)(*this + uVar1 * 4) != -1) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(uVar1,0);
        *(undefined4 *)(*this + uVar1 * 4) = 0xffffffff;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
  }
  else {
    do {
      if (*(int *)(*this + uVar1 * 4) != -1) {
        (**(code **)(**(int **)(param_1 + 0x14) + 0x6c))(uVar1,0);
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    thunk_FUN_1005c76c((LPVOID)*this);
    *this = 0;
    *(undefined4 *)(param_1 + 0x17c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
    do {
      local_c = -1;
      FUN_10008155(this,&local_c);
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  return;
}

