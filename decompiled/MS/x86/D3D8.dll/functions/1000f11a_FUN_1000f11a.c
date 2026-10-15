/*
 * FUN_1000f11a at 1000f11a
 * undefined __fastcall FUN_1000f11a(int param_1)
 * Address ranges: 1000f11a-1000f164
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_1000f11a(int param_1)

{
  int iVar1;
  undefined4 uStack_8;
  
  iVar1 = DAT_100ba2b4;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  if (*(char *)(iVar1 + 0x7e6) != '\0') {
    uStack_8 = param_1;
    FUN_10003838((void *)((int)&uStack_8 + 3),
                 (byte)(*(uint *)(*(int *)(param_1 + 0x2c) + 0xb0c) >> 2) & 1);
    FUN_10006cd0(*(int *)(param_1 + 0x2c));
    FUN_10003881((char *)((int)&uStack_8 + 3));
  }
  return;
}

