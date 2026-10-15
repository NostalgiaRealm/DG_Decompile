/*
 * FUN_10027309 at 10027309
 * undefined8 __fastcall FUN_10027309(char param_1, char param_2, uint param_3, char param_4, char param_5, char param_6, uint param_7)
 * Address ranges: 10027309-10027357
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 __fastcall
FUN_10027309(char param_1,char param_2,uint param_3,char param_4,char param_5,char param_6,
            uint param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (param_1 != '\0') {
    uVar2 = param_3;
  }
  uVar3 = 0;
  if (param_2 != '\0') {
    uVar1 = uVar2 | 0x100;
    if (param_4 != '\0') {
      uVar1 = uVar2 | 0x300;
    }
    if (param_5 != '\0') {
      uVar1 = uVar1 | 0x400;
    }
    if (param_6 != '\0') {
      uVar1 = uVar1 | 0x800;
    }
    uVar3 = param_7 >> 0x14;
    uVar2 = uVar1 | param_7 << 0xc;
  }
  return CONCAT44(uVar3,uVar2);
}

