/*
 * FUN_180094098 at 180094098
 * undefined FUN_180094098(void)
 * Address ranges: 180094098-1800940fb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180094098(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  ulonglong local_10;
  ulonglong local_8;
  
  if ((*(int *)(param_1 + 0x2c) - 0x24U & 0xfffffffa) != 0) {
    puVar1 = (uint *)(*(longlong *)(param_1 + 0xd4) +
                     (ulonglong)(uint)(param_2 + *(int *)(param_1 + 0x3c) * param_3) * 0x20);
    local_10 = (ulonglong)*puVar1;
    local_8 = (ulonglong)(puVar1[1] + *puVar1);
    (**(code **)(**(longlong **)(param_1 + 0xc4) + 0x48))
              (*(longlong **)(param_1 + 0xc4),0,&local_10);
  }
  return 0;
}

