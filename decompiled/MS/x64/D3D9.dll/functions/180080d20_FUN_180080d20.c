/*
 * FUN_180080d20 at 180080d20
 * uint __fastcall FUN_180080d20(undefined8 param_1, longlong * param_2, longlong param_3, uint param_4)
 * Address ranges: 180080d20-180080e73
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_180080d20(undefined8 param_1,longlong *param_2,longlong param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffffffffff9c;
  
  if (param_4 == 0) {
    puVar1 = (uint *)(param_3 + 0x20);
    param_4 = FUN_1800ec8c0((longlong)puVar1,3,'\x01');
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)param_4);
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)param_4);
    uVar2 = 4;
    FUN_1800edbe0(puVar1,param_2,0x11,(ulonglong)param_4);
    if ((*(uint *)(*(longlong *)(param_3 + 0x1b0) + 0x44) & 0x800000) != 0) {
      FUN_18007eb88(puVar1,param_2,param_3,param_4,CONCAT44(in_stack_ffffffffffffff9c,uVar2),0,0);
    }
  }
  return param_4;
}

