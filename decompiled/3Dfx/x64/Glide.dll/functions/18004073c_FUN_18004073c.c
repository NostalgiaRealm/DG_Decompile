/*
 * FUN_18004073c at 18004073c
 * undefined8 * __fastcall FUN_18004073c(undefined8 param_1, longlong param_2)
 * Address ranges: 18004073c-1800407e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_18004073c(undefined8 param_1,longlong param_2)

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
      goto LAB_180040785;
    }
    if (iVar1 == 3) {
      uVar4 = 2;
      goto LAB_180040785;
    }
    if (iVar1 == 4) {
      uVar4 = 3;
      goto LAB_180040785;
    }
  }
  uVar4 = 0;
LAB_180040785:
  puVar3 = (undefined8 *)FUN_18005db9c(0x490);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_180056300(puVar3,uVar2,uVar4);
    puVar3[0x90] = 0;
    *puVar3 = &PTR_FUN_180063c48;
    *(undefined4 *)(puVar3 + 0x91) = 0xc000;
    *(undefined1 *)(puVar3 + 0x8f) = 0;
  }
  return puVar3;
}

