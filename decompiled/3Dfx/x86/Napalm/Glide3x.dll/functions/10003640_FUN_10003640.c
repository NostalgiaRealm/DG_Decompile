/*
 * FUN_10003640 at 10003640
 * undefined __thiscall FUN_10003640(void * this, HWND param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 10003640-1000387c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10003640(void *this,HWND param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  HWND pHVar3;
  int *piVar4;
  SIZE_T SVar5;
  LONG LVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  HWND *ppHVar11;
  bool bVar12;
  HWND local_5c [5];
  undefined4 local_48;
  undefined4 *local_44;
  uint local_3c;
  bool local_2f;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  if (*(int *)((int)this + 0xd4) == 0) {
    pHVar3 = GetActiveWindow();
    *(bool *)((int)this + 0x970) = pHVar3 != (HWND)0x0;
  }
  piVar4 = FUN_10003a99(this,(int)param_1);
  if ((piVar4 != (int *)0x0) && (piVar4[5] != 0)) {
    FUN_10003616(param_1,piVar4[5]);
  }
  FUN_100561f1((int *)local_5c,0,0x48);
  local_5c[1] = (HWND)param_2;
  local_5c[2] = (HWND)param_3;
  local_10 = (uint *)((int)this + 0xe8);
  local_c = ~*(uint *)((int)this + 0xe8);
  local_5c[0] = param_1;
  local_8 = 0;
  uVar7 = 0;
  bVar12 = local_c == 0;
  if (!bVar12) {
    for (; (local_c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  while (local_3c = 0xffffffff, bVar12) {
    local_8 = local_8 + 0x20;
    if (0x3f < local_8) goto LAB_10003702;
    local_c = ~(-(uint)(0x40 - local_8 < 0x20) | *(uint *)((int)this + (local_8 >> 5) * 4 + 0xe8));
    uVar7 = 0;
    bVar12 = local_c == 0;
    if (!bVar12) {
      for (; (local_c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
  }
  pbVar2 = (byte *)((int)&local_c + ((int)uVar7 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar7 & 7));
  local_3c = local_8 + uVar7;
LAB_10003702:
  pbVar2 = (byte *)((int)this + ((int)(local_3c & 0x1f) >> 3) + (local_3c >> 5) * 4 + 0xe8);
  *pbVar2 = *pbVar2 | '\x01' << (local_3c & 7);
  uVar1 = *(undefined4 *)((int)this + 0xb8);
  puVar10 = (undefined4 *)(local_3c * DAT_1005e044 + *(int *)((int)this + 0xc0));
  FUN_10055d40(puVar10,(undefined4 *)PTR_LAB_1005e040,DAT_1005e044);
  *(undefined4 *)((int)puVar10 + DAT_1005e04c) = uVar1;
  *(code **)((int)puVar10 + DAT_1005e048) = FUN_10003ae4;
  *(undefined4 *)((int)puVar10 + DAT_1005e050) = 0;
  local_48 = FUN_10003616(param_1,(LONG)puVar10);
  local_44 = puVar10;
  pHVar3 = GetActiveWindow();
  iVar8 = *(int *)((int)this + 0xd8);
  local_2f = pHVar3 == param_1;
  if (*(int *)((int)this + 0xd4) == iVar8) {
    if (iVar8 == 0) {
      uVar7 = 0x10;
    }
    else {
      uVar7 = iVar8 * 2;
    }
    SVar5 = (SIZE_T)((ulonglong)uVar7 * 0x48);
    if ((int)((ulonglong)uVar7 * 0x48 >> 0x20) != 0) {
      SVar5 = 0xffffffff;
    }
    puVar10 = (undefined4 *)FUN_100556a3(SVar5);
    if (puVar10 == (undefined4 *)0x0) goto LAB_10003808;
    FUN_10055d40(puVar10,*(undefined4 **)((int)this + 0xd0),*(int *)((int)this + 0xd8) * 0x48);
    thunk_FUN_10055686(*(LPVOID *)((int)this + 0xd0));
    *(undefined4 **)((int)this + 0xd0) = puVar10;
    *(uint *)((int)this + 0xd8) = uVar7;
  }
  ppHVar11 = local_5c;
  puVar10 = (undefined4 *)(*(int *)((int)this + 0xd4) * 0x48 + *(int *)((int)this + 0xd0));
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *ppHVar11;
    ppHVar11 = ppHVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
LAB_10003808:
  iVar8 = FUN_10003a62(this,(int)param_1);
  if (iVar8 != -1) {
    if (*(char *)(*(int *)((int)this + 0xdc) + 0xc + iVar8 * 0x10) == '\0') {
      LVar6 = GetWindowLongA(param_1,-4);
      iVar9 = 0xb4;
    }
    else {
      LVar6 = GetWindowLongW(param_1,-4);
      iVar9 = 0xb8;
    }
    puVar10 = FUN_100035b2(*(int *)((int)this + 0xbc),iVar8,*(undefined4 *)(iVar9 + (int)this),LVar6
                          );
    FUN_10003616(param_1,(LONG)puVar10);
  }
  SetTimer(param_1,0xaaaa,2000,(TIMERPROC)0x0);
  *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
  return;
}

