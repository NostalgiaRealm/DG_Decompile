/*
 * FUN_1800d2320 at 1800d2320
 * bool __fastcall FUN_1800d2320(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4)
 * Address ranges: 1800d2320-1800d238d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800d2320(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_b8 [16];
  byte local_a8 [128];
  
  puVar2 = local_b8;
  iVar1 = FUN_1800fc950(param_1,(byte *)" %s %c",local_a8,puVar2);
  if ((iVar1 == 1) && (iVar1 = FUN_1800fc514(local_a8,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_1800fc950(param_1,param_3,param_4,puVar2);
  return iVar1 == 1;
}

