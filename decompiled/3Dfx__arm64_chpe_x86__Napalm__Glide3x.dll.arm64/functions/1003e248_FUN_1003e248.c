/*
 * FUN_1003e248 at 1003e248
 * undefined FUN_1003e248(void)
 * Address ranges: 1003e248-1003e28f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_1003e248(ushort param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf00) == 0) {
    puVar2 = &DAT_100a0568;
  }
  else {
    if (uVar1 != 0x100) goto LAB_1003e280;
    puVar2 = &DAT_100a0570;
  }
  uVar1 = *(ushort *)(puVar2 + (param_2 >> 8 & 0xff) * 2);
LAB_1003e280:
  return param_1 & 0xf0ff | uVar1;
}

