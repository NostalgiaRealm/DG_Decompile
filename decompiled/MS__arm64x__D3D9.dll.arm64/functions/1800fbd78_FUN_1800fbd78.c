/*
 * FUN_1800fbd78 at 1800fbd78
 * undefined FUN_1800fbd78(void)
 * Address ranges: 1800fbd78-1800fbe5f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

longlong * FUN_1800fbd78(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar2 = (longlong *)FUN_180102f80(0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = param_1;
    *(undefined4 *)(plVar2 + 1) = param_2;
    plVar2[2] = 0;
    *(undefined4 *)(plVar2 + 3) = 0;
    plVar3 = *(longlong **)(*plVar2 + (ulonglong)*(uint *)(plVar2 + 1) * 0x20);
    iVar1 = (**(code **)(*plVar3 + 0xd8))
                      (plVar3,&DAT_18023c560,0,&DAT_18023c578,0x400,0,&DAT_180235458,plVar2 + 2);
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
    FUN_180102fc0(plVar2,0x20);
  }
  return (longlong *)0x0;
}

