/*
 * _guTexMemQueryAvail@4 at 180003148
 * int __fastcall _guTexMemQueryAvail@4(int param_1)
 * Address ranges: 180003148-180003193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _guTexMemQueryAvail_4(int param_1)

{
  int iVar1;
  undefined *puVar2;
  
                    /* 0x3148  139  _guTexMemQueryAvail@4
                       0x3148  300  guTexMemQueryAvail */
  puVar2 = FUN_180015384();
  iVar1 = 0;
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    if (param_1 < *(int *)(*(longlong *)(puVar2 + 0x30) + 0x833)) {
      iVar1 = FUN_18001706c((longlong)puVar2,param_1);
      iVar1 = iVar1 - *(int *)(puVar2 + (longlong)param_1 * 4 + 0xac);
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return iVar1;
}

