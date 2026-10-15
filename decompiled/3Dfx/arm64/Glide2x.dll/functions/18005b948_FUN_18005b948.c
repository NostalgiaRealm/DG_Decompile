/*
 * FUN_18005b948 at 18005b948
 * longlong * __cdecl FUN_18005b948(longlong param_1, undefined4 param_2)
 * Address ranges: 18005b948-18005ba2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_18005b948(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar2 = (longlong *)FUN_18005fb88(0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = param_2;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar3 = *(longlong **)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 0x20);
    iVar1 = (**(code **)(*plVar3 + 0xd8))
                      (plVar3,&DAT_1800661b0,0,&DAT_1800661c8,0x400,0,&DAT_180063c58,plVar2 + 2);
    plVar3 = (longlong *)plVar2[2];
    if (-1 < iVar1) {
      local_38 = 0;
      uStack_30 = 0;
      local_40 = 0;
      (**(code **)(*plVar3 + 0x40))(plVar3,0,&local_38,&local_40);
      return plVar2;
    }
    (**(code **)(*plVar3 + 0x10))();
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    FUN_18005fbc8(plVar2);
  }
  return (longlong *)0x0;
}

