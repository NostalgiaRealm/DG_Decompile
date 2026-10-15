/*
 * FUN_180046608 at 180046608
 * ulonglong __cdecl FUN_180046608(undefined8 param_1, longlong * param_2, ulonglong param_3)
 * Address ranges: 180046608-1800466ab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_180046608(undefined8 param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 1;
  uVar2 = (**(code **)(**(longlong **)(*param_2 + 0x18) + 0x40))();
  if (uVar2 < (ulonglong)param_2[3]) {
    if (param_2[1] != -1) {
      uVar2 = FUN_18004baf0(param_2[1] + 8,0);
      uVar3 = uVar2 & 0xff;
      if ((uVar2 & 0xff) == 0) {
        return uVar3;
      }
    }
    if ((param_3 & 1) != 0) {
      plVar1 = *(longlong **)(*param_2 + 0x18);
      (**(code **)(*plVar1 + 0x48))(plVar1,param_2[3],*(undefined8 *)(*param_2 + 0x20));
      WaitForSingleObject(*(HANDLE *)(*param_2 + 0x20),0xffffffff);
    }
  }
  return uVar3;
}

