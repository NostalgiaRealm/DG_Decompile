/*
 * FUN_100418d0 at 100418d0
 * undefined FUN_100418d0(void)
 * Address ranges: 100418d0-10041987
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100418d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)FUN_101321c0(0x20);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    *puVar3 = &PTR_FUN_1015eb0c;
    puVar3[1] = uVar2;
    *(undefined8 *)(puVar3 + 2) = 0;
    puVar3[4] = 0;
    puVar3[5] = uVar1;
    puVar3[6] = param_2;
    puVar3[7] = param_3;
    uVar4 = FUN_1004f0f0(puVar3);
    if ((uVar4 & 1) != 0) {
      return puVar3;
    }
    FUN_1004f0b0(puVar3);
    FUN_10132260(puVar3,0x20);
  }
  return (undefined4 *)0x0;
}

