/*
 * _grLfbLock@24 at 1800024a4
 * bool __fastcall _grLfbLock@24(undefined4 param_1, undefined4 param_2, uint param_3, undefined4 param_4, int param_5, undefined8 param_6)
 * Address ranges: 1800024a4-180002526
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbLock_24(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5
                  ,undefined8 param_6)

{
  char cVar1;
  undefined *puVar2;
  ulonglong uVar3;
  bool bVar4;
  
                    /* 0x24a4  54  _grLfbLock@24
                       0x24a4  211  grLfbLock */
  uVar3 = (ulonglong)param_3;
  puVar2 = FUN_180015044();
  bVar4 = false;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    cVar1 = (**(code **)(**(longlong **)(puVar2 + 0x18) + 0xe8))
                      (*(longlong **)(puVar2 + 0x18),param_1,param_2,uVar3 & 0xffffffff,param_4,
                       param_5 != 0,param_6,0);
    bVar4 = cVar1 != '\0';
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return bVar4;
}

