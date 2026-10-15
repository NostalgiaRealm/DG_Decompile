/*
 * FUN_1003cb24 at 1003cb24
 * undefined __fastcall FUN_1003cb24(int param_1, int param_2)
 * Address ranges: 1003cb24-1003cba6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1003cb24(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  *(undefined4 *)(param_2 + 4) = 0x1ff;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x34);
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(param_1 + 0x50);
  puVar3 = (undefined4 *)(param_1 + 0x54);
  puVar4 = (undefined4 *)(param_2 + 0x2c);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x8c);
  puVar4 = (undefined4 *)(param_2 + 100);
  for (iVar2 = 0xe; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(param_2 + 0x9c) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_2 + 0xa0) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)(param_2 + 0xa4) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)(param_2 + 0xa8) = *(undefined4 *)(param_1 + 0xd0);
  return;
}

