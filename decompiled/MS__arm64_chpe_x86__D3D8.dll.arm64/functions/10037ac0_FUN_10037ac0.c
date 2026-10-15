/*
 * FUN_10037ac0 at 10037ac0
 * undefined FUN_10037ac0(void)
 * Address ranges: 10037ac0-10037b8b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_10037ac0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)FUN_100febf0(0x24);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0x14c);
    uVar2 = *(undefined4 *)(param_1 + 0x148);
    *puVar3 = &PTR_FUN_10129668;
    puVar3[1] = uVar2;
    puVar3[2] = uVar1;
    *(undefined8 *)(puVar3 + 3) = 0;
    puVar3[5] = param_2;
    puVar3[6] = 0;
    puVar3[7] = param_3;
    *(undefined1 *)(puVar3 + 8) = param_4;
    uVar4 = FUN_100415b0(puVar3);
    if ((uVar4 & 1) != 0) {
      return puVar3;
    }
    FUN_10041570(puVar3);
    FUN_100fec90(puVar3,0x24);
  }
  return (undefined4 *)0x0;
}

