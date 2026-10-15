/*
 * FUN_180049aa8 at 180049aa8
 * undefined8 * __fastcall FUN_180049aa8(longlong param_1, uint param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, char * param_8, undefined8 param_9)
 * Address ranges: 180049aa8-180049b3f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_180049aa8(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,char *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined8 in_stack_ffffffffffffffc0;
  
  puVar1 = (undefined8 *)FUN_180060a9c(3000);
  if ((puVar1 != (undefined8 *)0x0) &&
     (puVar1 = FUN_18004950c(puVar1,param_1,param_2,param_3,param_4,param_5,
                             in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,param_8,param_9),
     puVar1 != (undefined8 *)0x0)) {
    uVar2 = FUN_180049b40((longlong)puVar1);
    if ((char)uVar2 != '\0') {
      return puVar1;
    }
    FUN_180049684(puVar1);
    FUN_180060ac0(puVar1);
  }
  return (undefined8 *)0x0;
}

