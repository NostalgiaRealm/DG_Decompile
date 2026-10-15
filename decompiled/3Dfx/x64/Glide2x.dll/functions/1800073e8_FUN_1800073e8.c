/*
 * FUN_1800073e8 at 1800073e8
 * bool __fastcall FUN_1800073e8(byte * param_1, byte * param_2, byte * param_3, undefined8 param_4)
 * Address ranges: 1800073e8-180007455
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800073e8(byte *param_1,byte *param_2,byte *param_3,undefined8 param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 local_b8 [16];
  byte local_a8 [128];
  
  puVar2 = local_b8;
  iVar1 = FUN_18005f390(param_1,(byte *)" %s %c",local_a8,puVar2);
  if ((iVar1 == 1) && (iVar1 = FUN_18005d788(local_a8,param_2), iVar1 == 0)) {
    return true;
  }
  iVar1 = FUN_18005f390(param_1,param_3,param_4,puVar2);
  return iVar1 == 1;
}

