/*
 * FUN_1800a4d10 at 1800a4d10
 * undefined __fastcall FUN_1800a4d10(longlong * param_1, longlong param_2, undefined8 param_3, undefined8 param_4, uint param_5)
 * Address ranges: 1800a4d10-1800a4e65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800a4d10(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  uint *puVar1;
  
  puVar1 = (uint *)(param_2 + 0x10);
  FUN_1800edbe0(puVar1,param_1,0x2d,(ulonglong)param_5);
  if ((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) {
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x201);
  }
  if ((*(char *)(param_2 + 6) != '\0') || (*(char *)(param_2 + 8) != '\0')) {
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2001);
  }
  if (((*(char *)(param_2 + 5) != '\0') || (*(char *)(param_2 + 7) != '\0')) &&
     ((*(char *)(param_2 + 6) != '\0' || (*(char *)(param_2 + 8) != '\0')))) {
    FUN_1800edbe0(puVar1,param_1,0x8000002d,0x2201);
  }
  return;
}

