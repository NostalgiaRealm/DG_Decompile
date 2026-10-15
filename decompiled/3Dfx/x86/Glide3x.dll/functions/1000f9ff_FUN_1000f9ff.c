/*
 * FUN_1000f9ff at 1000f9ff
 * undefined2 __stdcall FUN_1000f9ff(int param_1, byte param_2, char param_3, byte param_4)
 * Address ranges: 1000f9ff-1000fa56
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_1000f9ff(int param_1,byte param_2,char param_3,byte param_4)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = -(uint)(*(char *)(param_1 + 0x7d) != '\0') & 2 | (uint)(*(char *)(param_1 + 0x48) != '\0')
          | (uint)param_2 << 2 | (uint)param_4 << 3;
  if (*(char *)(param_1 + 0x7f) != '\0') {
    uVar2 = param_2 ^ 1 | 0x10;
  }
  puVar1 = &DAT_10055d8c;
  if (param_3 == '\0') {
    puVar1 = &DAT_10055d68;
  }
  return *(undefined2 *)(puVar1 + uVar2 * 2);
}

