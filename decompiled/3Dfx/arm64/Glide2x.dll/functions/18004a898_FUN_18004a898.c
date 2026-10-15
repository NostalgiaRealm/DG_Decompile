/*
 * FUN_18004a898 at 18004a898
 * undefined8 * __cdecl FUN_18004a898(longlong param_1, uint param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, char * param_8, undefined8 param_9)
 * Address ranges: 18004a898-18004a93b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004a898(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,char *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  pcVar3 = param_8;
  puVar1 = (undefined8 *)FUN_18005fb88(3000);
  if ((puVar1 != (undefined8 *)0x0) &&
     (puVar1 = FUN_18004a480(puVar1,param_1,param_2,param_3,param_4,param_5,param_7,pcVar3,param_8,
                             param_9), puVar1 != (undefined8 *)0x0)) {
    uVar2 = FUN_18004a940((longlong)puVar1);
    if ((uVar2 & 1) != 0) {
      return puVar1;
    }
    FUN_18004a608(puVar1);
    FUN_18005fbc8(puVar1);
  }
  return (undefined8 *)0x0;
}

