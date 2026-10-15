/*
 * FUN_1005e480 at 1005e480
 * undefined __stdcall FUN_1005e480(HWND param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 1005e480-1005e6d4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1005e480(HWND param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  byte *pbVar2;
  void *this;
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
  uint local_58;
  uint local_54;
  HWND local_50 [5];
  undefined4 local_3c;
  undefined4 *local_38;
  uint local_30;
  bool local_23;
  
  this = DAT_1006c210;
  if (*(int *)((int)DAT_1006c210 + 0xd4) == 0) {
    pHVar3 = GetActiveWindow();
    *(bool *)((int)this + 0x970) = pHVar3 != (HWND)0x0;
  }
  piVar4 = FUN_1005e8f7(this,(int)param_1);
  if ((piVar4 != (int *)0x0) && (piVar4[5] != 0)) {
    FUN_1005e456(param_1,piVar4[5]);
  }
  FUN_10060d45((int *)local_50,0,0x48);
  local_50[2] = (HWND)param_3;
  local_58 = ~*(uint *)((int)this + 0xe8);
  local_50[0] = param_1;
  local_50[1] = (HWND)0x0;
  local_54 = 0;
  uVar7 = 0;
  bVar12 = local_58 == 0;
  if (!bVar12) {
    for (; (local_58 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  while (local_30 = 0xffffffff, bVar12) {
    local_54 = local_54 + 0x20;
    if (0x3f < local_54) goto LAB_1005e54e;
    local_58 = ~(-(uint)(0x40 - local_54 < 0x20) | *(uint *)((int)this + (local_54 >> 5) * 4 + 0xe8)
                );
    uVar7 = 0;
    bVar12 = local_58 == 0;
    if (!bVar12) {
      for (; (local_58 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
  }
  pbVar2 = (byte *)((int)&local_58 + ((int)uVar7 >> 3));
  *pbVar2 = *pbVar2 & ~('\x01' << (uVar7 & 7));
  local_30 = local_54 + uVar7;
LAB_1005e54e:
  pbVar2 = (byte *)((int)this + ((int)(local_30 & 0x1f) >> 3) + (local_30 >> 5) * 4 + 0xe8);
  *pbVar2 = *pbVar2 | '\x01' << (local_30 & 7);
  uVar1 = *(undefined4 *)((int)this + 0xb8);
  puVar10 = (undefined4 *)(local_30 * DAT_10069054 + *(int *)((int)this + 0xc0));
  FUN_10060d80(puVar10,(undefined4 *)PTR_LAB_10069050,DAT_10069054);
  *(undefined4 *)((int)puVar10 + DAT_1006905c) = uVar1;
  *(code **)((int)puVar10 + DAT_10069058) = FUN_1005e926;
  *(undefined4 *)((int)puVar10 + DAT_10069060) = 0;
  local_3c = FUN_1005e456(param_1,(LONG)puVar10);
  local_38 = puVar10;
  pHVar3 = GetActiveWindow();
  iVar8 = *(int *)((int)this + 0xd8);
  local_23 = pHVar3 == param_1;
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
    puVar10 = (undefined4 *)FUN_10060bfe(SVar5);
    if (puVar10 == (undefined4 *)0x0) goto LAB_1005e65e;
    FUN_10060d80(puVar10,*(undefined4 **)((int)this + 0xd0),*(int *)((int)this + 0xd8) * 0x48);
    thunk_FUN_10060be1(*(LPVOID *)((int)this + 0xd0));
    *(undefined4 **)((int)this + 0xd0) = puVar10;
    *(uint *)((int)this + 0xd8) = uVar7;
  }
  ppHVar11 = local_50;
  puVar10 = (undefined4 *)(*(int *)((int)this + 0xd4) * 0x48 + *(int *)((int)this + 0xd0));
  for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
    *puVar10 = *ppHVar11;
    ppHVar11 = ppHVar11 + 1;
    puVar10 = puVar10 + 1;
  }
  *(int *)((int)this + 0xd4) = *(int *)((int)this + 0xd4) + 1;
LAB_1005e65e:
  iVar8 = FUN_1005e8c0(this,(int)param_1);
  if (iVar8 != -1) {
    if (*(char *)(*(int *)((int)this + 0xdc) + 0xc + iVar8 * 0x10) == '\0') {
      LVar6 = GetWindowLongA(param_1,-4);
      iVar9 = 0xb4;
    }
    else {
      LVar6 = GetWindowLongW(param_1,-4);
      iVar9 = 0xb8;
    }
    puVar10 = FUN_1005e306(*(int *)((int)this + 0xbc),iVar8,*(undefined4 *)(iVar9 + (int)this),LVar6
                          );
    FUN_1005e456(param_1,(LONG)puVar10);
  }
  SetTimer(param_1,0xaaaa,2000,(TIMERPROC)0x0);
  *(int *)((int)this + 0xcc) = *(int *)((int)this + 0xcc) + 1;
  return;
}

