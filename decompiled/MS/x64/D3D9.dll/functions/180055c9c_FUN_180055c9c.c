/*
 * FUN_180055c9c at 180055c9c
 * bool __fastcall FUN_180055c9c(longlong param_1)
 * Address ranges: 180055c9c-180055d48
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_180055c9c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong local_res8;
  ulonglong local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  if (plVar1 == (longlong *)0x0) {
    bVar6 = false;
  }
  else {
    iVar5 = 0;
    if ((*(byte *)((ulonglong)*(uint *)(plVar1 + 1) * 0x20 + 0x14 + *plVar1) & 1) != 0) {
      plVar2 = *(longlong **)(param_1 + 0x40);
      local_res8 = 0;
      uVar4 = (*(int *)(param_1 + 0x48) + (int)plVar1[5] * 2) * 4;
      local_10 = (ulonglong)uVar4 + 4;
      local_18 = (ulonglong)uVar4;
      iVar3 = (**(code **)(*plVar2 + 0x40))(plVar2,0,&local_18,&local_res8);
      if (-1 < iVar3) {
        iVar5 = *(int *)((ulonglong)uVar4 + local_res8);
        local_10 = 0;
        local_18 = 0;
        (**(code **)(*plVar2 + 0x48))(plVar2,0,&local_18);
      }
    }
    bVar6 = iVar5 == 1;
  }
  return bVar6;
}

