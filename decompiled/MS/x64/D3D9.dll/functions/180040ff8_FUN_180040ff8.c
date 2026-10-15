/*
 * FUN_180040ff8 at 180040ff8
 * undefined __fastcall FUN_180040ff8(longlong * param_1)
 * Address ranges: 180040ff8-180041031
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180040ff8(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1800ea030(*(longlong *)(*param_1 + 0x1b500),(ulonglong)puVar1,(undefined *)0x0,'\0');
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}

