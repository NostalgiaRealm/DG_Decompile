/*
 * grLfbUnlock at 10001fb4
 * bool __stdcall grLfbUnlock(undefined4 param_1, int param_2)
 * Address ranges: 10001fb4-1000200f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grLfbUnlock,8
 */

/* __stdcall grLfbUnlock,8 */

bool grLfbUnlock(undefined4 param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  int *extraout_ECX;
  bool bVar4;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x1fb4  54  _grLfbUnlock@8 */
  puVar3 = FUN_10012760();
  bVar4 = false;
  if (puVar3[0x3c] != '\0') {
    piVar1 = (int *)(puVar3 + 0x38);
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_c = 0;
    local_8 = 0;
    FUN_10019d7b(*(void **)(puVar3 + 0xc),param_2,&local_c,&local_8);
    cVar2 = (**(code **)(*extraout_ECX + 0x78))(param_1,param_2,1,0,0,local_c,local_8,0);
    bVar4 = cVar2 != '\0';
    LOCK();
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return bVar4;
}

