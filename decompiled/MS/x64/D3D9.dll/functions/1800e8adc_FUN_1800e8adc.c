/*
 * FUN_1800e8adc at 1800e8adc
 * undefined8 * __fastcall FUN_1800e8adc(longlong param_1, undefined8 * param_2, int param_3)
 * Address ranges: 1800e8adc-1800e8b7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 * FUN_1800e8adc(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  undefined8 local_10;
  
  if (param_3 != 1) {
    if (*(longlong **)(param_1 + -0x28) != (longlong *)0x0) {
      uVar2 = (**(code **)(**(longlong **)(param_1 + -0x28) + 0x40))();
      if (*(ulonglong *)(param_1 + -0x20) <= uVar2) goto LAB_1800e8b14;
    }
    FUN_1800eaba8(*(longlong *)(param_1 + 0x10),param_1 - 0x40);
  }
LAB_1800e8b14:
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  local_18 = 0;
  local_10 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                    (*(longlong **)(param_1 + 8),0,&local_18);
  if (-1 < iVar1) {
    uVar3 = (**(code **)(**(longlong **)(param_1 + 8) + 0x58))();
    *param_2 = uVar3;
    param_2[2] = *(undefined8 *)(param_1 + 8);
    *(int *)(param_1 + -0xc) = *(int *)(param_1 + -0xc) + 1;
  }
  return param_2;
}

