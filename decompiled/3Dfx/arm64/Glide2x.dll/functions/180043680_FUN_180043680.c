/*
 * FUN_180043680 at 180043680
 * undefined8 * __cdecl FUN_180043680(undefined8 param_1, longlong param_2)
 * Address ranges: 180043680-18004371b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_180043680(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar2 = DAT_18006b860;
  uVar1 = *(uint *)(param_2 + 0xd2);
  if (1 < uVar1) {
    if (uVar1 == 2) {
      uVar4 = 1;
      goto LAB_1800436d4;
    }
    if (uVar1 == 3) {
      uVar4 = 2;
      goto LAB_1800436d4;
    }
    if (uVar1 == 4) {
      uVar4 = 3;
      goto LAB_1800436d4;
    }
  }
  uVar4 = 0;
LAB_1800436d4:
  puVar3 = (undefined8 *)FUN_18005fb88(0x490);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    puVar3 = (undefined8 *)FUN_180057a10(puVar3,uVar2,uVar4);
    *puVar3 = &PTR_FUN_180064c60;
    puVar3[0x90] = 0;
    *(undefined4 *)(puVar3 + 0x91) = 0xc000;
    *(undefined1 *)(puVar3 + 0x8f) = 0;
  }
  return puVar3;
}

