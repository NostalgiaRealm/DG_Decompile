/*
 * FUN_10061146 at 10061146
 * undefined __stdcall FUN_10061146(int param_1)
 * Address ranges: 10061146-100611e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10061146(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x208 + uVar1 * 4));
    *(undefined4 *)(param_1 + 0x208 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x20);
  uVar1 = 0;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x288 + uVar1 * 4));
    *(undefined4 *)(param_1 + 0x288 + uVar1 * 4) = 0;
    uVar1 = uVar1 + 1;
  } while (uVar1 < 10);
  FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x2fc));
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  iVar2 = 0;
  do {
    FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x2d4 + iVar2 * 4));
    *(undefined4 *)(param_1 + 0x2d4 + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x300));
  *(undefined4 *)(param_1 + 0x300) = 0;
  FUN_100c2ed2(param_1,*(uint *)(param_1 + 0x304));
  *(undefined4 *)(param_1 + 0x304) = 0;
  return;
}

