/*
 * FUN_180023808 at 180023808
 * undefined FUN_180023808(void)
 * Address ranges: 180023808-180023a1f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined8 FUN_180023808(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined4 local_40;
  int iStack_3c;
  
  if ((*(uint *)(param_1 + 9) & 1) == 0) {
    return 0;
  }
  if (param_1[6] == 0) {
    FUN_180023780();
    (**(code **)(*param_1 + 0x18))(param_1);
    if (*(char *)((longlong)param_1 + 0x27) == '\0') {
      local_48 = 0;
      if ((param_2 & 1) == 0) {
        local_40 = func_0x00018012faf0();
        iStack_3c = *(ushort *)((longlong)param_1 + 0x16) - 1;
        (**(code **)(*param_1 + 0x38))(param_1,&local_48);
      }
      else {
        local_50[0] = 0;
        lVar6 = param_1[5];
        cVar3 = (**(code **)(*param_1 + 0x50))(param_1,&local_48,local_50);
        if (cVar3 != '\0') {
          (**(code **)(*param_1 + 0x28))
                    (param_1,lVar6,local_48,(short)param_1[2],
                     *(undefined2 *)((longlong)param_1 + 0x12),(int)param_1[3],local_50[0]);
          pcVar4 = *(code **)(*param_1 + 0x58);
          goto LAB_1800239dc;
        }
      }
    }
    else {
      pcVar4 = *(code **)(*param_1 + 0x48);
LAB_1800239dc:
      (*pcVar4)(param_1);
    }
    iVar5 = 0;
    iVar8 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x18))();
    uVar9 = 0x80;
    iVar8 = 0;
    iVar5 = 0;
    uVar7 = 0;
    if ((int)param_1[8] == 0) goto LAB_1800239f4;
    do {
      if ((*(byte *)(param_1[6] + uVar7) & uVar9) == 0) {
        if (iVar8 != iVar5) {
          FUN_180023a20(param_1,&local_48,iVar8,iVar5);
          (**(code **)(*param_1 + 0x38))(param_1,&local_48);
          FUN_1800236b0(param_1,iVar8,iVar5);
          iVar8 = iVar5;
        }
        iVar8 = iVar8 + 1;
      }
      iVar5 = iVar5 + 1;
      *(byte *)(param_1[6] + uVar7) = *(byte *)(param_1[6] + uVar7) & ~(byte)uVar9;
      bVar2 = uVar9 < 2;
      uVar1 = (uint)uVar7;
      if (bVar2) {
        uVar1 = (uint)uVar7 + 1;
      }
      uVar7 = (ulonglong)uVar1;
      uVar9 = uVar9 >> 1;
      if (bVar2) {
        uVar9 = 0x80;
      }
    } while (uVar1 < *(uint *)(param_1 + 8));
    if (iVar8 == iVar5) goto LAB_1800239f4;
    FUN_180023a20(param_1,&local_48,iVar8,iVar5);
    (**(code **)(*param_1 + 0x38))(param_1,&local_48);
  }
  FUN_1800236b0(param_1,iVar8,iVar5);
LAB_1800239f4:
  *(uint *)(param_1 + 9) = *(uint *)(param_1 + 9) & 0xfffffffe;
  return 1;
}

