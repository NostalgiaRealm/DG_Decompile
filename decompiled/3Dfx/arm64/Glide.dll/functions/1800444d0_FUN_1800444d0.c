/*
 * FUN_1800444d0 at 1800444d0
 * undefined8 * __cdecl FUN_1800444d0(undefined8 param_1, longlong param_2)
 * Address ranges: 1800444d0-18004456b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800444d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_18006c860;
  uVar1 = *(uint *)(param_2 + 0xd2);
  if (1 < uVar1) {
    if (uVar1 == 2) {
      uVar4 = 1;
      goto LAB_180044524;
    }
    if (uVar1 == 3) {
      uVar4 = 2;
      goto LAB_180044524;
    }
    if (uVar1 == 4) {
      uVar4 = 3;
      goto LAB_180044524;
    }
  }
  uVar4 = 0;
LAB_180044524:
  puVar3 = (undefined8 *)FUN_1800609d8(0x490);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_180058860(puVar3,uVar2,uVar4);
    *puVar3 = &PTR_FUN_180065c60;
    puVar3[0x90] = 0;
    *(undefined4 *)(puVar3 + 0x91) = 0xc000;
    *(undefined1 *)(puVar3 + 0x8f) = 0;
  }
  return puVar3;
}

