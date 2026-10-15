/*
 * FUN_100310b8 at 100310b8
 * undefined __fastcall FUN_100310b8(int param_1)
 * Address ranges: 100310b8-100311ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_100310b8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 local_20 [4];
  undefined4 local_10;
  undefined4 local_c;
  bool local_8;
  undefined1 local_7;
  byte local_6;
  
  local_10 = 1;
  iVar1 = *(int *)(param_1 + 4);
  local_20[0] = *(undefined4 *)(param_1 + 0x15c);
  local_20[1] = *(undefined4 *)(param_1 + 0x158);
  local_20[2] = *(undefined4 *)(iVar1 + 0x6c);
  local_20[3] = *(undefined4 *)(iVar1 + 0x70);
  local_c = FUN_100321a7(param_1 + 0x150);
  local_8 = (*(uint *)(param_1 + 0x1b8) & 0x2001) != 0;
  if ((*(int *)(param_1 + 0x1cc) == 0x19) || (local_7 = 0, *(int *)(param_1 + 0x1cc) == 0x1a)) {
    local_7 = 1;
  }
  local_6 = (byte)(*(uint *)(param_1 + 0x1b8) >> 0xf) & 1;
  puVar6 = local_20;
  puVar7 = (undefined4 *)(iVar1 + 100);
  for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 0x1ac);
  uVar3 = *(undefined4 *)(param_1 + 0x1b0);
  uVar4 = *(undefined4 *)(param_1 + 0x1a8);
  *(undefined4 *)(iVar1 + 0x80) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(iVar1 + 0x88) = uVar2;
  *(undefined4 *)(iVar1 + 0x84) = uVar4;
  *(undefined4 *)(iVar1 + 0x8c) = uVar3;
  if ((*(uint *)(param_1 + 0x154) >> 0xb & 1) == 0) {
    iVar1 = *(int *)(param_1 + 4);
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x174);
    *(undefined4 *)(iVar1 + 0xa0) = uVar2;
  }
  return;
}

