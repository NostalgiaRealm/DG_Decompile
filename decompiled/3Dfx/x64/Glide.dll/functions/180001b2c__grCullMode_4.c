/*
 * _grCullMode@4 at 180001b2c
 * undefined __fastcall _grCullMode@4(uint param_1)
 * Address ranges: 180001b2c-180001b9e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCullMode_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  
                    /* 0x1b2c  26  _grCullMode@4
                       0x1b2c  187  grCullMode */
  puVar2 = FUN_180015384();
  if (puVar2[100] != '\0') {
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + 1;
    UNLOCK();
    plVar1 = *(longlong **)(puVar2 + 0x18);
    if (param_1 != *(byte *)((longlong)plVar1 + 0x112)) {
      uVar3 = 0;
      if ((param_1 != 0) && (uVar3 = param_1, *(char *)((longlong)plVar1 + 0x12a) == '\x01')) {
        uVar3 = (param_1 == 1) + 1;
      }
      (**(code **)(*plVar1 + 0x188))(plVar1,uVar3);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x112) = (char)uVar3;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

