/*
 * FUN_1800398c4 at 1800398c4
 * undefined8 * __cdecl FUN_1800398c4(undefined8 param_1, undefined4 * param_2)
 * Address ranges: 1800398c4-18003996b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800398c4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1800636c0(0xa8);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (param_2 == (undefined4 *)0x0) {
      *(undefined4 *)(puVar3 + 2) = 0;
      *puVar3 = &PTR_FUN_180067fd8;
      puVar3[1] = 0;
      puVar3[3] = 0;
    }
    else {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      *(undefined4 *)(puVar3 + 1) = *param_2;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uVar1;
      puVar3[3] = "[dgVoodoo IniParser] ";
      *(undefined4 *)(puVar3 + 2) = uVar2;
      *puVar3 = &PTR_FUN_180067fd8;
    }
    *(undefined4 *)(puVar3 + 0x14) = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined4 *)(puVar3 + 0x11) = 0;
    puVar3[0x10] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    *(undefined4 *)(puVar3 + 0xd) = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 0;
    *(undefined1 *)(puVar3 + 10) = 1;
    puVar3[9] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 4) = 0;
  }
  return puVar3;
}

