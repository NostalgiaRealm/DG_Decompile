/*
 * FUN_10012ee3 at 10012ee3
 * undefined __fastcall FUN_10012ee3(int param_1)
 * Address ranges: 10012ee3-10012f2d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_10012ee3(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = DAT_100dea74;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (*(char *)(iVar1 + 0x7e6) != '\0') {
    uStack_8 = param_1;
    FUN_10003e40((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)(param_1 + 0x2c) + 0xdd0) >> 2) & 1);
    FUN_100076a2(*(int *)(param_1 + 0x2c));
    FUN_10003e89((char *)((int)&uStack_8 + 3));
  }
  return;
}

