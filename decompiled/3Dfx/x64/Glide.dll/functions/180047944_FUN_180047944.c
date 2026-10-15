/*
 * FUN_180047944 at 180047944
 * undefined8 * __fastcall FUN_180047944(longlong param_1, uint param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, char * param_8, undefined8 param_9)
 * Address ranges: 180047944-1800479db
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180047944(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,char *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  
  puVar1 = (undefined8 *)FUN_18005db9c(3000);
  if ((puVar1 != (undefined8 *)0x0) &&
     (puVar1 = FUN_1800473a8(puVar1,param_1,param_2,param_3,param_4,param_5,
                             in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,param_8,param_9),
     puVar1 != (undefined8 *)0x0)) {
    uVar2 = FUN_1800479dc((longlong)puVar1);
    if ((char)uVar2 != '\0') {
      return puVar1;
    }
    FUN_180047520(puVar1);
    FUN_18005dbc0(puVar1);
  }
  return (undefined8 *)0x0;
}

