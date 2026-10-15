/*
 * FUN_10064d64 at 10064d64
 * undefined __stdcall FUN_10064d64(int param_1)
 * Address ranges: 10064d64-10064ebd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064d64(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x52e) != '\0') {
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4dc));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4e0));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4e4));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4e8));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4ec));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4f0));
    FUN_100c2ed2(iVar1,*(uint *)(param_1 + 0x4f4));
  }
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(uint *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  if (*(char *)(param_1 + 0x52f) != '\0') {
    FUN_100c2ed2(param_1 + 0x18,*(uint *)(param_1 + 0x504));
    FUN_100c2ed2(param_1 + 0x18,*(uint *)(param_1 + 0x508));
    FUN_100c2ed2(param_1 + 0x18,*(uint *)(param_1 + 0x50c));
  }
  *(uint *)(param_1 + 0x50c) = 0;
  *(undefined4 *)(param_1 + 0x500) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(uint *)(param_1 + 0x508) = 0;
  *(undefined4 *)(param_1 + 0x504) = 0;
  return;
}

