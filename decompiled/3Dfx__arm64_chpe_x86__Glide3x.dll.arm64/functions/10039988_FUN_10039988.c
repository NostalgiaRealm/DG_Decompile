/*
 * FUN_10039988 at 10039988
 * undefined FUN_10039988(void)
 * Address ranges: 10039988-100399cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ushort FUN_10039988(ushort param_1,uint param_2)

{
  ushort uVar1;
  undefined *puVar2;
  
  uVar1 = param_1 & 0xf00;
  if ((param_1 & 0xf00) == 0) {
    puVar2 = &DAT_10099d58;
  }
  else {
    if (uVar1 != 0x100) goto LAB_100399c0;
    puVar2 = &DAT_10099d60;
  }
  uVar1 = *(ushort *)(puVar2 + (param_2 >> 8 & 0xff) * 2);
LAB_100399c0:
  return param_1 & 0xf0ff | uVar1;
}

