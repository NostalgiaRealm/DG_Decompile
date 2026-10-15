/*
 * FUN_140005aac at 140005aac
 * undefined8 __cdecl FUN_140005aac(longlong param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined1 * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)
 * Address ranges: 140005aac-140005b1b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8
FUN_140005aac(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined1 *param_5
             ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  
  if ((param_2 - 0x3f2U < 0x1a) && ((0x200026bU >> (ulonglong)(param_2 - 0x3f2U & 0x1f) & 1) != 0))
  {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 == '\0') {
      FUN_140006788(param_1 + -0x78,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

