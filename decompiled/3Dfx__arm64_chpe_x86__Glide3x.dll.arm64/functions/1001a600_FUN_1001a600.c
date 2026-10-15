/*
 * FUN_1001a600 at 1001a600
 * undefined FUN_1001a600(void)
 * Address ranges: 1001a600-1001a677
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_1001a600(undefined8 param_1,int param_2,byte param_3,char param_4,uint param_5)

{
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (*(char *)(param_2 + 0x7d) == '\0') {
    uVar2 = 0;
  }
  if (*(char *)(param_2 + 0x7f) == '\0') {
    uVar2 = (param_5 & 0xff) << 3 | (uint)param_3 << 2 | (uint)(*(char *)(param_2 + 0x48) != '\0') |
            uVar2;
  }
  else {
    uVar2 = (param_3 ^ 1) + 0x10;
  }
  puVar1 = &DAT_10099b90;
  if (param_4 != '\0') {
    puVar1 = &DAT_10099bc8;
  }
  return *(undefined2 *)(puVar1 + uVar2 * 2);
}

