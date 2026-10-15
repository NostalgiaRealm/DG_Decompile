/*
 * FUN_180039e70 at 180039e70
 * undefined8 __cdecl FUN_180039e70(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 180039e70-180039eeb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_180039e70(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b0 [8];
  byte abStack_a8 [136];
  
  puVar3 = auStack_b0;
  iVar1 = FUN_180063ec8(param_1,(byte *)" %s %c",abStack_a8,puVar3,param_5,param_6,param_7,param_8);
  if (((iVar1 != 1) || (uVar2 = FUN_1800637c8(abStack_a8,param_2), uVar2 != 0)) &&
     (iVar1 = FUN_180063ec8(param_1,param_3,param_4,puVar3,param_5,param_6,param_7,param_8),
     iVar1 != 1)) {
    return 0;
  }
  return 1;
}

