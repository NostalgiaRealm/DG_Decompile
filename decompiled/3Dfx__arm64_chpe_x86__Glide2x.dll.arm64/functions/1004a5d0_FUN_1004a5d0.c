/*
 * FUN_1004a5d0 at 1004a5d0
 * undefined FUN_1004a5d0(void)
 * Address ranges: 1004a5d0-1004a617
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_1004a5d0(ushort param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf00) == 0) {
    puVar2 = &DAT_10096fa8;
  }
  else {
    if (uVar1 != 0x100) goto LAB_1004a608;
    puVar2 = &DAT_10096fb0;
  }
  uVar1 = *(ushort *)(puVar2 + (param_2 >> 8 & 0xff) * 2);
LAB_1004a608:
  return param_1 & 0xf0ff | uVar1;
}

