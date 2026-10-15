/*
 * FUN_180050a68 at 180050a68
 * undefined FUN_180050a68(void)
 * Address ranges: 180050a68-180050b43
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180050a68(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  longlong local_40;
  longlong local_38;
  longlong lStack_30;
  
  lVar2 = *param_2;
  iVar1 = *(int *)(lVar2 + 0x10);
  if (iVar1 - 9U < 2) {
    local_40 = 0;
    plVar5 = (longlong *)param_2[4];
    uVar3 = 0;
    lVar2 = (ulonglong)*(uint *)(param_2 + 5) * 8;
    lStack_30 = (ulonglong)(*(uint *)(param_2 + 5) + 1) << 3;
    local_38 = lVar2;
    iVar1 = (**(code **)(*plVar5 + 0x40))(plVar5,0,&local_38,&local_40);
    if (-1 < iVar1) {
      uVar3 = *(ulonglong *)(lVar2 + local_40);
      local_38 = 0;
      lStack_30 = 0;
      (**(code **)(*plVar5 + 0x48))(plVar5,0,&local_38);
    }
    cVar4 = *(char *)((longlong)param_2 + 0x3c);
    lVar2 = *param_2;
  }
  else if (iVar1 == 8) {
    cVar4 = '\x01';
    uVar3 = 1;
  }
  else {
    if (iVar1 != 0xb) {
      return;
    }
    cVar4 = *(char *)((longlong)param_2 + 0x3c);
    uVar3 = (ulonglong)(cVar4 == '\0');
  }
  FUN_18004e178(lVar2,uVar3,param_2[1],cVar4);
  return;
}

