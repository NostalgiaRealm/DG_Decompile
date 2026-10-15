/*
 * FUN_10096e29 at 10096e29
 * undefined4 __fastcall FUN_10096e29(int param_1)
 * Address ranges: 10096e29-10096e6f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10096e29(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (((((*(int *)(param_1 + 0x6d0) == 0) ||
        (in_EAX = *(uint *)(param_1 + 0x18), *(int *)(in_EAX + 0x28) == 0x4c4c554e)) &&
       ((*(int *)(param_1 + 0x1c) == 0 || (*(int *)(*(int *)(param_1 + 0x1c) + 0x28) == 0x4c4c554e))
       )) && ((*(int *)(param_1 + 0x20) == 0 ||
              (*(int *)(*(int *)(param_1 + 0x20) + 0x28) == 0x4c4c554e)))) &&
     ((*(int *)(param_1 + 0x24) == 0 || (*(int *)(*(int *)(param_1 + 0x24) + 0x28) == 0x4c4c554e))))
  {
    uVar1 = in_EAX & 0xffffff00;
  }
  else {
    uVar1 = CONCAT31((int3)(in_EAX >> 8),1);
  }
  return uVar1;
}

