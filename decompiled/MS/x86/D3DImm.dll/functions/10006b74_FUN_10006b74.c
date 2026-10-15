/*
 * FUN_10006b74 at 10006b74
 * undefined __fastcall FUN_10006b74(int param_1)
 * Address ranges: 10006b74-10006cc4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10006b74(int param_1)

{
  undefined4 *this;
  int iVar1;
  int local_8;
  
  *(undefined4 *)(param_1 + 0x184) = 3;
  this = (undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x188) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  local_8 = param_1;
  thunk_FUN_1005c76c((LPVOID)*this);
  *this = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  iVar1 = 8;
  do {
    local_8 = -1;
    FUN_10008155(this,&local_8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_100065bd(param_1);
  return;
}

