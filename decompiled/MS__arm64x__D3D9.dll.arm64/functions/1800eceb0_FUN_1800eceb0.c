/*
 * FUN_1800eceb0 at 1800eceb0
 * undefined FUN_1800eceb0(void)
 * Address ranges: 1800eceb0-1800ecf37
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_1800eceb0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  longlong local_68;
  
  puVar1 = PTR_s_DGD3D12ROOT_18024b1a0;
  uVar3 = (*__imp_KERNEL32_dll_GetModuleHandleW)(0);
  iVar2 = (*__imp_USER32_dll_GetClassInfoExA)(uVar3,puVar1,auStack_70);
  if (((iVar2 != 0) && (local_68 != 0)) ||
     (local_68 = (*(code *)PTR_FUN_18024b1a8)(param_1,param_2), local_68 != 0)) {
    FUN_1800015a0(local_68 + 8);
  }
  return local_68;
}

