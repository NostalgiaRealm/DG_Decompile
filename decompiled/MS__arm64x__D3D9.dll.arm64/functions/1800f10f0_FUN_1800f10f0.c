/*
 * FUN_1800f10f0 at 1800f10f0
 * undefined FUN_1800f10f0(void)
 * Address ranges: 1800f10f0-1800f1193
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800f10f0(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  char cVar2;
  ulonglong uVar3;
  
  cVar2 = '\x01';
  uVar3 = (**(code **)(**(longlong **)(*param_2 + 0x18) + 0x40))();
  if (uVar3 < (ulonglong)param_2[3]) {
    if ((param_2[1] != -1) && (cVar2 = FUN_1800e8548(param_2[1] + 8,0), cVar2 == '\0')) {
      return '\0';
    }
    if ((param_3 & 1) != 0) {
      plVar1 = *(longlong **)(*param_2 + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1,param_2[3],*(undefined8 *)(*param_2 + 0x20));
      (*__imp_KERNEL32_dll_WaitForSingleObject)(*(undefined8 *)(*param_2 + 0x20),0xffffffff);
    }
  }
  return cVar2;
}

