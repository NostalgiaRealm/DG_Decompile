/*
 * FUN_1005213c at 1005213c
 * undefined __stdcall FUN_1005213c(int param_1)
 * Address ranges: 1005213c-1005225f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005213c(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x49e) != '\0') {
    *(undefined4 *)(param_1 + 0x440) = *(undefined4 *)(param_1 + 0x41c);
    *(undefined4 *)(param_1 + 0x444) = *(undefined4 *)(param_1 + 0x420);
    *(undefined4 *)(param_1 + 0x448) = *(undefined4 *)(param_1 + 0x424);
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x44c) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x450) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x454) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x458) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x45c) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x460) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x464) = uVar2;
  }
  if (*(char *)(param_1 + 0x49f) != '\0') {
    *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x428);
    *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x42c);
    *(undefined4 *)(param_1 + 0x470) = *(undefined4 *)(param_1 + 0x430);
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x474) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x478) = uVar2;
    uVar2 = FUN_100a05ed(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x47c) = uVar2;
  }
  return;
}

