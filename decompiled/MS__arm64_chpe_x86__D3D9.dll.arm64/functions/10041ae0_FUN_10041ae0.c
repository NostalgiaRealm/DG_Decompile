/*
 * FUN_10041ae0 at 10041ae0
 * undefined FUN_10041ae0(void)
 * Address ranges: 10041ae0-10041b77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10041ae0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)FUN_101321c0(0x14);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    *puVar3 = &PTR_FUN_1015eae4;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    uVar4 = FUN_1004ef30(puVar3,param_2);
    if ((uVar4 & 1) != 0) {
      return puVar3;
    }
    FUN_1004eeb0(puVar3);
    FUN_10132260(puVar3,0x14);
  }
  return (undefined4 *)0x0;
}

