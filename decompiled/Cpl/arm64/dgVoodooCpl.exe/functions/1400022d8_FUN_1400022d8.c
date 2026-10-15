/*
 * FUN_1400022d8 at 1400022d8
 * ulonglong __cdecl FUN_1400022d8(longlong * param_1)
 * Address ranges: 1400022d8-1400023df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

ulonglong FUN_1400022d8(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  longlong lVar9;
  CHAR aCStack_40 [16];
  
  FUN_140010038(param_1[1],(int)param_1[2]);
  FUN_14000fe68(param_1[1],(int)param_1[2],0x140026648,1);
  uVar8 = 0;
  uVar3 = FUN_14000fe68(param_1[1],(int)param_1[2],0x140026650,0);
  uVar6 = (ulonglong)uVar3;
  lVar9 = *param_1;
  if (*(int *)(lVar9 + 600) != -1) {
    iVar1 = 0;
    if (*(int *)(lVar9 + 4) != 0) {
      iVar1 = *(int *)(lVar9 + 4) + -1;
    }
    plVar5 = *(longlong **)(lVar9 + (longlong)*(int *)(lVar9 + 600) * 8 + 0x210);
    uVar6 = (**(code **)(*plVar5 + 0x50))(plVar5,iVar1);
    uVar3 = 0;
    uVar2 = (uint)uVar6;
    if (uVar2 != 0) {
      do {
        plVar5 = *(longlong **)(*param_1 + (longlong)*(int *)(*param_1 + 600) * 8 + 0x210);
        uVar7 = (**(code **)(*plVar5 + 0x58))(plVar5,iVar1,uVar3);
        uVar7 = uVar7 & 0xffffffff;
        FUN_140024880(aCStack_40,"%ux",uVar7,uVar8,in_x4,in_x5,in_x6,in_x7);
        uVar4 = FUN_14000fe68(param_1[1],(int)param_1[2],(LPARAM)aCStack_40,uVar7);
        uVar6 = (ulonglong)uVar4;
        uVar3 = uVar3 + 1;
        uVar8 = uVar7;
      } while (uVar3 < uVar2);
    }
  }
  return uVar6;
}

