/*
 * FUN_1000367b at 1000367b
 * undefined __thiscall FUN_1000367b(void * this, HWND param_1, LONG param_2)
 * Address ranges: 1000367b-1000385f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_1000367b(void *this,HWND param_1,LONG param_2)

{
  uint uVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  piVar3 = FUN_10003897(this,(int)param_1);
  uVar11 = 0;
  if (*(int *)((int)this + 0xd4) == 0) {
    return;
  }
  while( true ) {
    iVar8 = uVar11 * 0x48;
    piVar9 = (int *)(iVar8 + *(int *)((int)this + 0xd0));
    if (((HWND)*piVar9 == param_1) && (piVar9[2] == param_2)) break;
    uVar11 = uVar11 + 1;
    if (*(uint *)((int)this + 0xd4) <= uVar11) {
      return;
    }
  }
  if ((piVar9[5] == 0) ||
     (*(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + -1, piVar3 != piVar9))
  goto LAB_10003827;
  iVar5 = piVar9[10];
  while (iVar5 != 0) {
    ShowCursor(0);
    piVar3 = piVar9 + 10;
    *piVar3 = *piVar3 + -1;
    iVar5 = *piVar3;
  }
  iVar5 = *(int *)((int)this + 0xd0);
  param_2 = *(LONG *)(iVar5 + 0x14 + iVar8);
  for (uVar6 = uVar11; uVar6 != 0; uVar6 = uVar6 - 1) {
    if (*(HWND *)(iVar5 + -0x48 + uVar6 * 0x48) == param_1) {
      param_2 = *(LONG *)(iVar5 + -0x30 + uVar6 * 0x48);
      goto LAB_1000373b;
    }
  }
  KillTimer(param_1,0xaaaa);
LAB_1000373b:
  if (param_2 == 0) goto LAB_10003827;
  uVar1 = *(uint *)(*(int *)((int)this + 0xd0) + 0x20 + iVar8);
  iVar8 = FUN_100033ed(param_1);
  iVar7 = uVar1 * DAT_1005a044;
  iVar4 = *(int *)((int)this + 0xc0) + iVar7;
  iVar5 = FUN_10003860(this,(int)param_1);
  if (iVar5 == -1) {
LAB_100037ab:
    if (iVar8 == iVar4) {
      FUN_10003414(param_1,param_2);
      pbVar2 = (byte *)((int)this + ((int)(uVar1 & 0x1f) >> 3) + (uVar1 >> 5) * 4 + 0xe8);
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar1 & 7));
      goto LAB_10003827;
    }
  }
  else {
    iVar5 = iVar5 * DAT_1005a034;
    *(LONG *)(*(int *)((int)this + 0xbc) + iVar5 + DAT_1005a038) = param_2;
    if (uVar6 == 0) {
      iVar4 = *(int *)((int)this + 0xbc) + iVar5;
      goto LAB_100037ab;
    }
  }
  *(LONG *)(*(int *)((int)this + 0xc0) + iVar7 + DAT_1005a050) = param_2;
  uVar6 = 0;
  if (*(int *)((int)this + 0xe0) != 0) {
    do {
      if (*(HWND *)(*(int *)((int)this + 0xdc) + uVar6 * 0x10) == param_1) {
        *(undefined4 *)(*(int *)((int)this + 0xdc) + 8 + uVar6 * 0x10) =
             *(undefined4 *)((int)this + 0xf0);
        *(int *)((int)this + 0xf0) = *(int *)((int)this + 0xf0) + 1;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)((int)this + 0xe0));
  }
LAB_10003827:
  uVar6 = *(uint *)((int)this + 0xd4);
  if (uVar6 <= uVar11) {
    return;
  }
  while (uVar11 = uVar11 + 1, uVar11 < uVar6) {
    puVar10 = (undefined4 *)(uVar11 * 0x48 + *(int *)((int)this + 0xd0));
    puVar12 = puVar10 + -0x12;
    for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    uVar6 = *(uint *)((int)this + 0xd4);
  }
  *(uint *)((int)this + 0xd4) = uVar6 - 1;
  return;
}

