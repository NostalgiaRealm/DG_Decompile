/*
 * FUN_180013794 at 180013794
 * undefined2 __fastcall FUN_180013794(undefined8 param_1, longlong param_2, byte param_3, char param_4, byte param_5)
 * Address ranges: 180013794-1800137f2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_180013794(undefined8 param_1,longlong param_2,byte param_3,char param_4,byte param_5)

{
  undefined *puVar1;
  uint uVar2;
  
  if (*(char *)(param_2 + 0x97) == '\0') {
    uVar2 = -(uint)(*(char *)(param_2 + 0x95) != '\0') & 2 |
            (uint)(*(char *)(param_2 + 0x48) != '\0') | (uint)param_3 * 4 | (uint)param_5 << 3;
  }
  else {
    uVar2 = param_3 ^ 1 | 0x10;
  }
  puVar1 = &DAT_1800647a8;
  if (param_4 == '\0') {
    puVar1 = &DAT_180064780;
  }
  return *(undefined2 *)(puVar1 + (ulonglong)uVar2 * 2);
}

