/*
 * FUN_10031350 at 10031350
 * undefined4 __fastcall FUN_10031350(int param_1)
 * Address ranges: 10031350-10031379
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_10031350(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  if ((*(uint *)(iVar1 + 0x34) >> 3 & 1) != 0) {
    uVar2 = thunk_FUN_10060be1(*(LPVOID *)(iVar1 + 0x20));
    *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) & 0xfffffff7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return (*(uint *)(iVar1 + 0x34) >> 0xb) << 8;
}

