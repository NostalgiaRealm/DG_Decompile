/*
 * FUN_1800167d8 at 1800167d8
 * bool __fastcall FUN_1800167d8(longlong param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined4 param_5, int param_6, undefined8 param_7)
 * Address ranges: 1800167d8-18001683a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800167d8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6,undefined8 param_7)

{
  char cVar1;
  bool bVar2;
  
  bVar2 = false;
  if (*(char *)(param_1 + 100) != '\0') {
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0xe8))
                      (*(longlong **)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6 != 0,
                       param_7,0);
    bVar2 = cVar1 != '\0';
    LOCK();
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
    UNLOCK();
  }
  return bVar2;
}

