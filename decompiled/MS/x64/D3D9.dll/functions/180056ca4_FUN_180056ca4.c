/*
 * FUN_180056ca4 at 180056ca4
 * undefined __fastcall FUN_180056ca4(longlong param_1, longlong * param_2)
 * Address ranges: 180056ca4-180056d96
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180056ca4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  char cVar6;
  longlong local_res8;
  longlong local_28;
  longlong local_20;
  
  lVar3 = *param_2;
  iVar2 = *(int *)(lVar3 + 0x10);
  local_res8 = param_1;
  if (iVar2 == 8) {
    lVar5 = param_2[1];
    cVar6 = '\x01';
    uVar4 = 1;
  }
  else if ((iVar2 == 9) || (iVar2 == 10)) {
    plVar1 = (longlong *)param_2[4];
    uVar4 = 0;
    local_res8 = 0;
    lVar3 = (ulonglong)*(uint *)(param_2 + 5) * 8;
    local_20 = (ulonglong)(*(uint *)(param_2 + 5) + 1) << 3;
    local_28 = lVar3;
    iVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,0,&local_28,&local_res8);
    if (-1 < iVar2) {
      uVar4 = *(ulonglong *)(lVar3 + local_res8);
      local_20 = 0;
      local_28 = 0;
      (**(code **)(*plVar1 + 0x48))(plVar1,0,&local_28);
    }
    cVar6 = *(char *)((longlong)param_2 + 0x3c);
    lVar5 = param_2[1];
    lVar3 = *param_2;
  }
  else {
    if (iVar2 != 0xb) {
      return;
    }
    cVar6 = *(char *)((longlong)param_2 + 0x3c);
    lVar5 = param_2[1];
    uVar4 = (ulonglong)(cVar6 == '\0');
  }
  FUN_180055c0c(lVar3,uVar4,lVar5,cVar6);
  return;
}

