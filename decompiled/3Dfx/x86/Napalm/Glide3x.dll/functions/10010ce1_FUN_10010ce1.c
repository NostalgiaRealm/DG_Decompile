/*
 * FUN_10010ce1 at 10010ce1
 * undefined2 __stdcall FUN_10010ce1(int param_1, byte param_2, char param_3, byte param_4)
 * Address ranges: 10010ce1-10010d38
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_10010ce1(int param_1,byte param_2,char param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = -(uint)(*(char *)(param_1 + 0x7d) != '\0') & 2 | (uint)(*(char *)(param_1 + 0x48) != '\0')
          | (uint)param_2 << 2 | (uint)param_4 << 3;
  if (*(char *)(param_1 + 0x7f) != '\0') {
    uVar2 = param_2 ^ 1 | 0x10;
  }
  puVar1 = &DAT_100590f4;
  if (param_3 == '\0') {
    puVar1 = &DAT_100590d0;
  }
  return *(undefined2 *)(puVar1 + uVar2 * 2);
}

