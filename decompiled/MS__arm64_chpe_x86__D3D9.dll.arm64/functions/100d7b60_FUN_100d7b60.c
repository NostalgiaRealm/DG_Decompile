/*
 * FUN_100d7b60 at 100d7b60
 * undefined FUN_100d7b60(void)
 * Address ranges: 100d7b60-100d7bdf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_100d7b60(int param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  uVar3 = 0x8876086c;
  if (param_2 != (undefined8 *)0x0) {
    uVar4 = *param_2;
    if (*(char *)(param_1 + -0x62f0) == '\0') {
      *(undefined8 *)(param_1 + 0x6d4) = param_2[1];
      *(undefined8 *)(param_1 + 0x6cc) = uVar4;
      puVar1 = (undefined1 *)(param_1 + 0x5c3c);
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + -0x6300) + *(int *)(param_1 + -0x62f4) * 4);
      *(undefined8 *)(iVar2 + 0x4fc0) = param_2[1];
      *(undefined8 *)(iVar2 + 0x4fb8) = uVar4;
      puVar1 = (undefined1 *)(iVar2 + 0xac22);
    }
    *puVar1 = 1;
    uVar3 = 0;
  }
  return uVar3;
}

