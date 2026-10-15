/*
 * FUN_180040294 at 180040294
 * undefined8 * __fastcall FUN_180040294(undefined8 param_1, longlong param_2)
 * Address ranges: 180040294-180040339
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180040294(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_18006c870;
  iVar1 = *(int *)(param_2 + 0xd2);
  if ((iVar1 != 0) && (iVar1 != 1)) {
    if (iVar1 == 2) {
      uVar4 = 1;
      goto LAB_1800402dd;
    }
    if (iVar1 == 3) {
      uVar4 = 2;
      goto LAB_1800402dd;
    }
    if (iVar1 == 4) {
      uVar4 = 3;
      goto LAB_1800402dd;
    }
  }
  uVar4 = 0;
LAB_1800402dd:
  puVar3 = (undefined8 *)FUN_18005d6fc(0x490);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_180055e58(puVar3,uVar2,uVar4);
    puVar3[0x90] = 0;
    *puVar3 = &PTR_FUN_180063c48;
    *(undefined4 *)(puVar3 + 0x91) = 0xc000;
    *(undefined1 *)(puVar3 + 0x8f) = 0;
  }
  return puVar3;
}

