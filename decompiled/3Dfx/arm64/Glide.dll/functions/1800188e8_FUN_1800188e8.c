/*
 * FUN_1800188e8 at 1800188e8
 * bool __cdecl FUN_1800188e8(longlong param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5, int param_6, undefined8 param_7)
 * Address ranges: 1800188e8-18001898b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800188e8(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,int param_6,undefined8 param_7)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if (*(char *)(param_1 + 100) != '\0') {
    FUN_180061700((uint *)(param_1 + 0x60));
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe8))
                      (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6 != 0,
                       param_7,0);
    bVar1 = cVar2 != '\0';
    FUN_1800616f0((uint *)(param_1 + 0x60));
  }
  return bVar1;
}

