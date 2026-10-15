/*
 * FUN_18004e428 at 18004e428
 * undefined8 * __cdecl FUN_18004e428(longlong param_1, uint param_2, undefined8 param_3, undefined4 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, char * param_8, undefined8 param_9)
 * Address ranges: 18004e428-18004e4cb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 *
FUN_18004e428(longlong param_1,uint param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
             ,undefined8 param_6,undefined8 param_7,char *param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  
  pcVar3 = param_8;
  puVar1 = (undefined8 *)FUN_1800636c0(3000);
  if ((puVar1 != (undefined8 *)0x0) &&
     (puVar1 = FUN_18004e010(puVar1,param_1,param_2,param_3,param_4,param_5,param_7,pcVar3,param_8,
                             param_9), puVar1 != (undefined8 *)0x0)) {
    uVar2 = FUN_18004e4d0((longlong)puVar1);
    if ((uVar2 & 1) != 0) {
      return puVar1;
    }
    FUN_18004e198(puVar1);
    FUN_180063700(puVar1);
  }
  return (undefined8 *)0x0;
}

