/*
 * grTexMaxAddress at 10001cc9
 * int __stdcall grTexMaxAddress(int param_1)
 * Address ranges: 10001cc9-10001d22
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: __stdcall grTexMaxAddress,4
 */

/* __stdcall grTexMaxAddress,4 */

int grTexMaxAddress(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  
                    /* 0x1cc9  82  _grTexMaxAddress@4 */
  puVar3 = FUN_1000504c();
  cVar2 = FUN_1000522d((int)puVar3);
  if (cVar2 == '\0') {
    iVar4 = 0;
  }
  else {
    iVar4 = 0;
    if (param_1 < *(int *)(*(int *)(puVar3 + 0x1c) + 0x797)) {
      if (puVar3[0x3c] == '\0') {
        iVar4 = *(int *)(*(int *)(puVar3 + 0x1c) + 0x793);
      }
      else {
        piVar1 = (int *)(puVar3 + 0x38);
        LOCK();
        *piVar1 = *piVar1 + 1;
        UNLOCK();
        iVar4 = *(int *)(param_1 * 0x4e8 + 800 + *(int *)(puVar3 + 0xc));
        LOCK();
        *piVar1 = *piVar1 + -1;
        UNLOCK();
      }
    }
    iVar4 = iVar4 + -0x10;
  }
  return iVar4;
}

