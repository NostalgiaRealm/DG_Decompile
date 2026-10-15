/*
 * FUN_1001cd40 at 1001cd40
 * undefined FUN_1001cd40(void)
 * Address ranges: 1001cd40-1001ce33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_1001cd40(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  
  puVar3 = (undefined4 *)FUN_10081cb0(0x3c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)(param_1 + 0xd0);
    uVar2 = *(undefined4 *)(param_1 + 0xcc);
    puVar3[2] = param_1;
    puVar3[3] = uVar2;
    puVar3[4] = 0;
    puVar3[5] = uVar1;
    puVar3[6] = param_2;
    puVar3[7] = param_3;
    puVar3[8] = 0xffffffff;
    *(undefined2 *)(puVar3 + 9) = 0;
    *(undefined8 *)(puVar3 + 10) = 0;
    *(undefined8 *)(puVar3 + 0xc) = 0;
    puVar3[0xe] = 0;
    *puVar3 = &PTR_FUN_1009c84c;
    puVar3[1] = &PTR_FUN_1009c79c;
    uVar4 = FUN_1001d0b0(puVar3 + 1);
    if ((uVar4 & 1) != 0) {
      return puVar3;
    }
    FUN_10030e80(puVar3);
    FUN_10081d50(puVar3,0x3c);
  }
  return (undefined4 *)0x0;
}

