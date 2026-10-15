/*
 * FUN_10055e0e at 10055e0e
 * undefined __stdcall FUN_10055e0e(int param_1)
 * Address ranges: 10055e0e-10055ea6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10055e0e(int param_1)

{
  bool bVar1;
  uint uVar2;
  
  if ((*(char *)(param_1 + 0xc9) == '\0') || (*(char *)(*(int *)(param_1 + 0x10) + 0x442) == '\0'))
  {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar2 = FUN_100a05ed(param_1 + 0x18,4,'\x01');
  *(uint *)(param_1 + 0x1e8) = uVar2;
  if (bVar1) {
    uVar2 = FUN_100a05ed(param_1 + 0x18,4,'\x01');
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1bc);
  }
  *(uint *)(param_1 + 0x1ec) = uVar2;
  uVar2 = 0;
  *(undefined4 *)(param_1 + 0x1f0) = *(undefined4 *)(param_1 + 0x1bc);
  *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1b4);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_1 + 0x1b8);
  do {
    *(undefined4 *)(param_1 + 0x1fc + uVar2 * 4) = *(undefined4 *)(param_1 + 0x1c0 + uVar2 * 4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 8);
  return;
}

