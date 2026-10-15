/*
 * FUN_1400151c0 at 1400151c0
 * undefined8 __cdecl FUN_1400151c0(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 1400151c0-14001523b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_1400151c0(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b0 [8];
  byte abStack_a8 [136];
  
  puVar3 = auStack_b0;
  iVar1 = FUN_1400248b0(param_1,(byte *)" %s %c",abStack_a8,puVar3,param_5,param_6,param_7,param_8);
  if (((iVar1 != 1) || (uVar2 = FUN_140024ce0(abStack_a8,param_2), uVar2 != 0)) &&
     (iVar1 = FUN_1400248b0(param_1,param_3,param_4,puVar3,param_5,param_6,param_7,param_8),
     iVar1 != 1)) {
    return 0;
  }
  return 1;
}

