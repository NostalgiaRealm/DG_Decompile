/*
 * FUN_1002dfa1 at 1002dfa1
 * uint __fastcall FUN_1002dfa1(void * param_1)
 * Address ranges: 1002dfa1-1002e017
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1002dfa1(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_14;
  undefined4 local_10;
  uint local_c;
  int local_8;
  
  if (((*(uint *)((int)param_1 + 0x34) >> 5 & 1) == 0) && (*(char *)((int)param_1 + 0xad) != '\0'))
  {
    local_14 = 0;
    local_10 = 0;
    local_c = FUN_1002cd85((int)param_1);
    local_8 = *(ushort *)((int)param_1 + 0xe) - 1;
    uVar1 = (**(code **)(**(int **)((int)param_1 + 0x50) + 0x3c))
                      (*(undefined4 *)((int)param_1 + 0x6c),*(undefined4 *)((int)param_1 + 0x70),
                       *(undefined4 *)((int)param_1 + 0xa4),*(undefined4 *)((int)param_1 + 0xa8),
                       &local_14);
    *(bool *)((int)param_1 + 0xad) = (char)uVar1 == '\0';
    uVar2 = CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 != '\0');
  }
  else {
    uVar2 = FUN_1002d0eb(param_1,(uint)*(byte *)((int)param_1 + 0x48));
  }
  return uVar2;
}

