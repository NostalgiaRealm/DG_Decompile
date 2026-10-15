/*
 * FUN_180093be0 at 180093be0
 * longlong __fastcall FUN_180093be0(longlong param_1, char param_2)
 * Address ranges: 180093be0-180093ca3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong FUN_180093be0(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int local_28 [8];
  
  if (param_2 != '\0') {
    plVar1 = (longlong *)(param_1 + 0x50);
    if (*plVar1 == 0) {
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x40))(*(longlong **)(param_1 + 0x48),local_28)
      ;
      if (local_28[0] == 0x1c) {
        local_28[0] = 0x1d;
      }
      else if (local_28[0] == 0x47) {
        local_28[0] = 0x48;
      }
      else if (local_28[0] == 0x4a) {
        local_28[0] = 0x4b;
      }
      else {
        bVar3 = local_28[0] != 0x4d;
        local_28[0] = 0x4e;
        if (bVar3) {
          local_28[0] = 0;
        }
      }
      if (local_28[0] == 0) {
        *plVar1 = (longlong)*(longlong **)(param_1 + 0x48);
        (**(code **)(**(longlong **)(param_1 + 0x48) + 8))();
      }
      else {
        plVar2 = *(longlong **)
                  ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0x18c0 + 0x6b0 +
                  *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1cf10));
        (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_1 + 0x40),local_28,plVar1);
      }
    }
    if (*plVar1 != 0) {
      return *plVar1;
    }
  }
  return *(longlong *)(param_1 + 0x48);
}

