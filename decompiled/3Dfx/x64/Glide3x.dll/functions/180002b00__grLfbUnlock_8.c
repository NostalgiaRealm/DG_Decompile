/*
 * _grLfbUnlock@8 at 180002b00
 * bool __fastcall _grLfbUnlock@8(undefined8 param_1, int param_2)
 * Address ranges: 180002b00-180002b92
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool _grLfbUnlock_8(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined *puVar2;
  longlong *plVar3;
  bool bVar4;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  
                    /* 0x2b00  54  _grLfbUnlock@8
                       0x2b00  154  grLfbUnlock */
  puVar2 = FUN_1800069ac();
  bVar4 = false;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(puVar2 + 0x18);
    local_res20[0] = 0;
    local_res18[0] = 0;
    FUN_18000ad08((longlong)plVar3,param_2,local_res20,local_res18);
    cVar1 = (**(code **)(*plVar3 + 0x110))();
    bVar4 = cVar1 != '\0';
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return bVar4;
}

