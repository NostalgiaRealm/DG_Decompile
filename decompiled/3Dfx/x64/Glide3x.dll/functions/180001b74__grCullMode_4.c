/*
 * _grCullMode@4 at 180001b74
 * undefined __fastcall _grCullMode@4(uint param_1)
 * Address ranges: 180001b74-180001be4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void _grCullMode_4(uint param_1)

{
  longlong *plVar1;
  undefined *puVar2;
  uint uVar3;
  
                    /* 0x1b74  19  _grCullMode@4
                       0x1b74  119  grCullMode */
  puVar2 = FUN_1800069ac();
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
      (**(code **)(*plVar1 + 0x1a8))(plVar1,uVar3);
      *(char *)(*(longlong *)(puVar2 + 0x18) + 0x112) = (char)uVar3;
    }
    LOCK();
    *(int *)(puVar2 + 0x60) = *(int *)(puVar2 + 0x60) + -1;
    UNLOCK();
  }
  return;
}

