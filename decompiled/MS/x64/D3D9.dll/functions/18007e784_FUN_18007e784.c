/*
 * FUN_18007e784 at 18007e784
 * ulonglong __fastcall FUN_18007e784(longlong * param_1, longlong * param_2, longlong param_3, uint param_4, char param_5)
 * Address ranges: 18007e784-18007e974
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_18007e784(longlong *param_1,longlong *param_2,longlong param_3,uint param_4,
                       char param_5)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_5 != '\0') {
    if ((*(uint *)(param_3 + 0x1ac) & 0x20004) != 0) {
      param_4 = FUN_1800ec8c0(param_3 + 0x20,4,'\x01');
    }
    uVar2 = *(uint *)(param_3 + 0x1ac) & 0x20000;
    if ((*(uint *)(param_3 + 0x1ac) & 4) == 0) {
      if (uVar2 == 0) goto LAB_18007e962;
      uVar1 = (**(code **)*param_1)(param_1,param_2,param_3,0x10,0xf);
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x38,(ulonglong)param_4);
    }
    else {
      if (uVar2 == 0) {
        FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x32,(ulonglong)param_4);
        goto LAB_18007e962;
      }
      uVar1 = (**(code **)*param_1)(param_1,param_2,param_3,0x10,0xf);
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0,(ulonglong)param_4);
      FUN_1800edbe0((uint *)(param_3 + 0x20),param_2,0x32,(ulonglong)param_4);
    }
    (**(code **)(*param_1 + 8))(param_1,param_3,uVar1);
  }
LAB_18007e962:
  return (ulonglong)param_4;
}

