/*
 * FUN_10064c40 at 10064c40
 * undefined __stdcall FUN_10064c40(int param_1)
 * Address ranges: 10064c40-10064d63
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10064c40(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_1 + 0x18;
  if (*(char *)(param_1 + 0x52e) != '\0') {
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_1 + 0x4ac);
    *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(param_1 + 0x4b0);
    *(undefined4 *)(param_1 + 0x4d8) = *(undefined4 *)(param_1 + 0x4b4);
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4dc) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4e0) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4e4) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4e8) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4ec) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4f0) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x4f4) = uVar2;
  }
  if (*(char *)(param_1 + 0x52f) != '\0') {
    *(undefined4 *)(param_1 + 0x4f8) = *(undefined4 *)(param_1 + 0x4b8);
    *(undefined4 *)(param_1 + 0x4fc) = *(undefined4 *)(param_1 + 0x4bc);
    *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x4c0);
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x504) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x508) = uVar2;
    uVar2 = FUN_100c2e34(iVar1,3,'\x01');
    *(uint *)(param_1 + 0x50c) = uVar2;
  }
  return;
}

