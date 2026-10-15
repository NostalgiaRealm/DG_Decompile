/*
 * FUN_140005aa8 at 140005aa8
 * undefined8 __cdecl FUN_140005aa8(longlong param_1, int param_2)
 * Address ranges: 140005aa8-140005aab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_140005aa8(longlong param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined1 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if ((param_2 - 0x3f2U < 0x1a) && ((0x200026bU >> (ulonglong)(param_2 - 0x3f2U & 0x1f) & 1) != 0))
  {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 == '\0') {
      FUN_140006788(param_1 + -0x78,extraout_x1,in_x2,in_x3,in_x4,in_x5,in_x6,in_x7);
    }
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))(*(longlong **)(param_1 + 0x10),1);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

