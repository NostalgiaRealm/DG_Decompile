/*
 * FUN_1800f4268 at 1800f4268
 * undefined FUN_1800f4268(void)
 * Address ranges: 1800f4268-1800f42cf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1800f4268(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong *local_10 [2];
  
  if (*(code **)(param_1 + 0x2d0) != (code *)0x0) {
    local_10[0] = (longlong *)0x0;
    iVar1 = (**(code **)(param_1 + 0x2d0))(param_2,param_3,2,0,local_10);
    if (-1 < iVar1) {
      (**(code **)(*local_10[0] + 0x18))();
      (*__imp_KERNEL32_dll_OutputDebugStringA)();
      (**(code **)(*local_10[0] + 0x10))();
    }
  }
  return;
}

