/*
 * _grSstOrigin@4 at 18000170c
 * undefined __fastcall _grSstOrigin@4(uint param_1)
 * Address ranges: 18000170c-18000179a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grSstOrigin_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  
                    /* 0x170c  74  _grSstOrigin@4
                       0x170c  235  grSstOrigin */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if ((param_1 != *(byte *)((longlong)plVar1 + 0x12a)) && (param_1 < 2)) {
      (**(code **)(*plVar1 + 0x80))(plVar1,param_1);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x12a) = (char)param_1;
      plVar1 = *(longlong **)(puVar2 + 0x18);
      if (*(char *)((longlong)plVar1 + 0x112) != '\0') {
        (**(code **)(*plVar1 + 0x188))
                  (plVar1,(*(char *)((longlong)plVar1 + 0x112) == '\x01') + '\x01');
      }
      plVar1 = *(longlong **)(puVar2 + 0x18);
      (**(code **)(*plVar1 + 0x198))(plVar1,(longlong)plVar1 + 0x11a);
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

