/*
 * FUN_1800a2254 at 1800a2254
 * char __fastcall FUN_1800a2254(longlong param_1, int param_2, int param_3, longlong param_4, uint param_5, uint * param_6)
 * Address ranges: 1800a2254-1800a2437
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_1800a2254(longlong param_1,int param_2,int param_3,longlong param_4,uint param_5,
                  uint *param_6)

{
  longlong lVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte local_res8 [8];
  tagRECT local_48 [2];
  
  lVar1 = param_1 + -0x100;
  uVar9 = FUN_1800a1f60(lVar1,'\x01');
  if (uVar9 == 0) {
    return '\0';
  }
  local_res8[0] = 0;
  cVar8 = FUN_18009ccf8(lVar1,uVar9,param_2,param_3,param_4,param_5,param_6,local_48,local_res8);
  bVar7 = local_res8[0];
  if (cVar8 == '\0') {
    return '\0';
  }
  uVar3 = param_3 * *(int *)(param_1 + -0xc4) + param_2;
  lVar4 = *(longlong *)(param_1 + -0xa8);
  piVar2 = (int *)(lVar4 + 0x12c0);
  FUN_1800fab60(piVar2);
  if (*(char *)(lVar4 + 0x14c4) == '\0') {
LAB_1800a23c4:
    plVar5 = *(longlong **)(lVar4 + 0x14a0);
    *plVar5 = lVar1;
    *(uint *)(plVar5 + 1) = uVar3;
    *(undefined8 *)((longlong)plVar5 + 0xc) = local_48[0]._0_8_;
    *(undefined8 *)((longlong)plVar5 + 0x14) = local_48[0]._8_8_;
    *(byte *)((longlong)plVar5 + 0x1c) = bVar7;
    FUN_1800a2438(plVar5);
  }
  else {
    puVar10 = (undefined8 *)FUN_1800fab80((longlong)piVar2,0x20);
    if (puVar10 == (undefined8 *)0x0) {
      FUN_1800facb0(piVar2);
      Sleep(100);
      FUN_1800fab60(piVar2);
      goto LAB_1800a23c4;
    }
    LOCK();
    *(int *)(lVar4 + 0x14c0) = *(int *)(lVar4 + 0x14c0) + 1;
    UNLOCK();
    puVar10[1] = 0x20;
    puVar10[2] = lVar1;
    puVar11 = (undefined8 *)((longlong)puVar10 + 0x37U & 0xfffffffffffffff8);
    *(uint *)(puVar10 + 3) = uVar3;
    *(undefined8 *)((longlong)puVar10 + 0x1c) = local_48[0]._0_8_;
    *(undefined8 *)((longlong)puVar10 + 0x24) = local_48[0]._8_8_;
    *(byte *)((longlong)puVar10 + 0x2c) = bVar7;
    *puVar11 = 0;
    *puVar10 = FUN_1800a2438;
    *(undefined8 **)(lVar4 + 0x1350 + (ulonglong)*(uint *)(lVar4 + 0x14bc) * 0x28) = puVar11;
    if (*(char *)(lVar4 + 0x14c5) != '\0') {
      FUN_1800facb0(piVar2);
      SetEvent(*(HANDLE *)(lVar4 + 0x1340));
      goto LAB_1800a23e8;
    }
  }
  FUN_1800facb0(piVar2);
LAB_1800a23e8:
  if (((*(char *)(param_1 + 0x14d) != '\0') && (*(char *)(param_1 + 0x14e) != '\0')) &&
     (*(longlong *)(param_1 + 200) != 0)) {
    pbVar6 = (byte *)(param_1 + 0x10 + (ulonglong)(uVar3 >> 6) * 8 +
                     ((longlong)(ulonglong)(uVar3 & 0x3f) >> 3));
    *pbVar6 = *pbVar6 | '\x01' << ((ulonglong)(uVar3 & 0x3f) & 7);
  }
  return cVar8;
}

