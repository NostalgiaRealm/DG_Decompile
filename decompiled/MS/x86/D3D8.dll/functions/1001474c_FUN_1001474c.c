/*
 * FUN_1001474c at 1001474c
 * undefined __fastcall FUN_1001474c(int param_1)
 * Address ranges: 1001474c-1001489c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1001474c(int param_1)

{
  undefined4 *this;
  int iVar1;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x180) = 3;
  this = (undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x1e8) = 0;
  local_8 = param_1;
  thunk_FUN_100ad48c((LPVOID)*this);
  *this = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  iVar1 = 8;
  do {
    local_8 = -1;
    FUN_10003787(this,&local_8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_1001415e(param_1);
  return;
}

