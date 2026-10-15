/*
 * FUN_1800d8920 at 1800d8920
 * undefined8 * __fastcall FUN_1800d8920(undefined8 param_1, longlong param_2)
 * Address ranges: 1800d8920-1800d89c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800d8920(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_1801123b0;
  iVar1 = *(int *)(param_2 + 0xd2);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 == 2) {
      uVar4 = 1;
      goto LAB_1800d8969;
    }
    if (iVar1 == 3) {
      uVar4 = 2;
      goto LAB_1800d8969;
    }
    if (iVar1 == 4) {
      uVar4 = 3;
      goto LAB_1800d8969;
    }
  }
  uVar4 = 0;
LAB_1800d8969:
  puVar3 = (undefined8 *)FUN_1800fbccc(0x490);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1800d923c(puVar3,uVar2,uVar4);
    puVar3[0x90] = 0;
    *puVar3 = &PTR_FUN_180106108;
    *(undefined4 *)(puVar3 + 0x91) = 0xc000;
    *(undefined1 *)(puVar3 + 0x8f) = 0;
  }
  return puVar3;
}

