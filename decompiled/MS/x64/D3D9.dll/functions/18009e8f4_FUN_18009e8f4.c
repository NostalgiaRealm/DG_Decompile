/*
 * FUN_18009e8f4 at 18009e8f4
 * char __fastcall FUN_18009e8f4(longlong param_1, int param_2, int param_3, longlong param_4, uint param_5, uint * param_6)
 * Address ranges: 18009e8f4-18009eab3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_18009e8f4(longlong param_1,int param_2,int param_3,longlong param_4,uint param_5,
                  uint *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  byte local_res8 [32];
  tagRECT local_58 [2];
  
  plVar1 = (longlong *)(param_1 + -0x100);
  if (*(char *)(param_1 + -0xb3) == '\x01') {
    FUN_1800fb1f0(*(longlong *)(param_1 + -0xa8) + 0x12c0);
  }
  lVar6 = (**(code **)(*plVar1 + 0xc0))(plVar1,1);
  if (lVar6 == 0) {
    return '\0';
  }
  local_res8[0] = 0;
  cVar5 = FUN_18009ccf8((longlong)plVar1,lVar6,param_2,param_3,param_4,param_5,param_6,local_58,
                        local_res8);
  bVar4 = local_res8[0];
  if (cVar5 == '\0') {
    return '\0';
  }
  lVar6 = *(longlong *)(param_1 + -0xa8);
  iVar9 = param_2 + param_3 * *(int *)(param_1 + -0xc4);
  piVar2 = (int *)(lVar6 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar6 + 0x14c4) != '\0') {
    puVar7 = (undefined8 *)FUN_1800fab80((longlong)piVar2,0x20);
    if (puVar7 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(lVar6 + 0x14c0) = *(int *)(lVar6 + 0x14c0) + 1;
      UNLOCK();
      puVar7[1] = 0x20;
      puVar7[2] = plVar1;
      puVar8 = (undefined8 *)((longlong)puVar7 + 0x37U & 0xfffffffffffffff8);
      *(int *)(puVar7 + 3) = iVar9;
      *(undefined8 *)((longlong)puVar7 + 0x1c) = local_58[0]._0_8_;
      *(undefined8 *)((longlong)puVar7 + 0x24) = local_58[0]._8_8_;
      *(byte *)((longlong)puVar7 + 0x2c) = bVar4;
      *puVar8 = 0;
      *puVar7 = FUN_18009eab4;
      *(undefined8 **)(lVar6 + 0x1350 + (ulonglong)*(uint *)(lVar6 + 0x14bc) * 0x28) = puVar8;
      if (*(char *)(lVar6 + 0x14c5) != '\0') {
        FUN_1800facb0(piVar2);
        SetEvent(*(HANDLE *)(lVar6 + 0x1340));
        return cVar5;
      }
      goto LAB_18009ea97;
    }
    FUN_1800facb0(piVar2);
    Sleep(100);
    FUN_1800fab60(piVar2);
  }
  plVar3 = *(longlong **)(lVar6 + 0x14a0);
  *plVar3 = (longlong)plVar1;
  *(int *)(plVar3 + 1) = iVar9;
  *(undefined8 *)((longlong)plVar3 + 0xc) = local_58[0]._0_8_;
  *(undefined8 *)((longlong)plVar3 + 0x14) = local_58[0]._8_8_;
  *(byte *)((longlong)plVar3 + 0x1c) = bVar4;
  FUN_18009eab4(plVar3);
LAB_18009ea97:
  FUN_1800facb0(piVar2);
  return cVar5;
}

