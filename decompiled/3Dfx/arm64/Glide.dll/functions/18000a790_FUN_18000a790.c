/*
 * FUN_18000a790 at 18000a790
 * undefined8 __cdecl FUN_18000a790(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 18000a790-18000a80b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_18000a790(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_b0 [8];
  byte abStack_a8 [136];
  
  puVar3 = auStack_b0;
  iVar1 = FUN_1800611e0(param_1,(byte *)" %s %c",abStack_a8,puVar3,param_5,param_6,param_7,param_8);
  if (((iVar1 != 1) || (uVar2 = FUN_180060ae0(abStack_a8,param_2), uVar2 != 0)) &&
     (iVar1 = FUN_1800611e0(param_1,param_3,param_4,puVar3,param_5,param_6,param_7,param_8),
     iVar1 != 1)) {
    return 0;
  }
  return 1;
}

