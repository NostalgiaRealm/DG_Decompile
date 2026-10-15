/*
 * FUN_14000bf2c at 14000bf2c
 * undefined __fastcall FUN_14000bf2c(longlong param_1, undefined8 param_2, int param_3, int param_4)
 * Address ranges: 14000bf2c-14000c29d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_14000bf2c(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  byte *pbVar1;
  ushort *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort *puVar8;
  uint uVar9;
  int iVar10;
  HRESULT HVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  byte *pbVar16;
  ushort *puVar17;
  longlong *plVar18;
  byte *pbVar19;
  longlong lVar20;
  bool bVar21;
  longlong local_res8 [4];
  longlong *local_368;
  short *local_360;
  longlong *local_358 [2];
  byte local_348 [520];
  undefined1 local_140;
  
  uVar15 = 0xffffffff;
  if (*(HMENU *)(param_1 + 0x268) != (HMENU)0x0) {
    uVar9 = TrackPopupMenuEx(*(HMENU *)(param_1 + 0x268),0x100,param_3,param_4,
                             *(HWND *)(param_1 + 0x18),(LPTPMPARAMS)0x0);
    uVar15 = 0xffffffff;
    if (uVar9 != 0) {
      uVar15 = (ulonglong)uVar9;
    }
  }
  iVar10 = (int)uVar15;
  local_res8[0] = param_1;
  if (iVar10 == *(int *)(param_1 + 0x278)) {
    if (*(longlong *)(param_1 + 0x1b48) == 0) {
      FUN_1400098a8((undefined8 *)local_348);
      pbVar1 = (byte *)(param_1 + 0x1b60);
      iVar10 = FUN_1400250f8(local_348,pbVar1,0x20c);
      if (iVar10 != 0) {
        FUN_14002511c(local_348,0,0x20c);
        puVar12 = FUN_1400098a8((undefined8 *)local_348);
        lVar20 = 4;
        pbVar19 = pbVar1;
        do {
          pbVar16 = pbVar19;
          puVar13 = puVar12;
          uVar4 = puVar13[1];
          *(undefined8 *)pbVar16 = *puVar13;
          *(undefined8 *)(pbVar16 + 8) = uVar4;
          uVar4 = puVar13[3];
          *(undefined8 *)(pbVar16 + 0x10) = puVar13[2];
          *(undefined8 *)(pbVar16 + 0x18) = uVar4;
          uVar4 = puVar13[5];
          *(undefined8 *)(pbVar16 + 0x20) = puVar13[4];
          *(undefined8 *)(pbVar16 + 0x28) = uVar4;
          uVar4 = puVar13[7];
          *(undefined8 *)(pbVar16 + 0x30) = puVar13[6];
          *(undefined8 *)(pbVar16 + 0x38) = uVar4;
          uVar4 = puVar13[9];
          *(undefined8 *)(pbVar16 + 0x40) = puVar13[8];
          *(undefined8 *)(pbVar16 + 0x48) = uVar4;
          uVar4 = puVar13[0xb];
          *(undefined8 *)(pbVar16 + 0x50) = puVar13[10];
          *(undefined8 *)(pbVar16 + 0x58) = uVar4;
          uVar4 = puVar13[0xd];
          *(undefined8 *)(pbVar16 + 0x60) = puVar13[0xc];
          *(undefined8 *)(pbVar16 + 0x68) = uVar4;
          uVar4 = puVar13[0xf];
          *(undefined8 *)(pbVar16 + 0x70) = puVar13[0xe];
          *(undefined8 *)(pbVar16 + 0x78) = uVar4;
          lVar20 = lVar20 + -1;
          puVar12 = puVar13 + 0x10;
          pbVar19 = pbVar16 + 0x80;
        } while (lVar20 != 0);
        uVar4 = *(undefined8 *)((longlong)puVar13 + 0x84);
        *(undefined8 *)(pbVar16 + 0x7c) = *(undefined8 *)((longlong)puVar13 + 0x7c);
        *(undefined8 *)(pbVar16 + 0x84) = uVar4;
        FUN_140009a68((longlong)pbVar1);
        plVar18 = (longlong *)(param_1 + 0x80);
        (**(code **)*plVar18)(plVar18);
        (**(code **)(*plVar18 + 8))(plVar18);
        (**(code **)(*plVar18 + 0x10))(plVar18,0);
      }
    }
  }
  else if (iVar10 == *(int *)(param_1 + 0x27c)) {
    *(byte *)(param_1 + 0x490) = *(byte *)(param_1 + 0x490) ^ 1;
    FUN_14000c2a0(local_res8,uVar15);
  }
  else {
    if (iVar10 == *(int *)(param_1 + 0x280)) {
      HVar11 = CoCreateInstance((IID *)&DAT_1400263a8,(LPUNKNOWN)0x0,1,(IID *)&DAT_1400285b0,
                                &local_368);
      if (HVar11 < 0) {
        return;
      }
      bVar21 = false;
      iVar10 = (**(code **)(*local_368 + 0x50))(local_368,local_res8);
      if (-1 < iVar10) {
        (**(code **)(*local_368 + 0x48))(local_368,(uint)local_res8[0] | 0x20);
      }
      iVar10 = (**(code **)(*local_368 + 0x18))(local_368,0);
      if ((-1 < iVar10) &&
         (iVar10 = (**(code **)(*local_368 + 0xa0))(local_368,local_358), -1 < iVar10)) {
        iVar10 = (**(code **)(*local_358[0] + 0x28))(local_358[0],0x80028000,&local_360);
        bVar21 = -1 < iVar10;
        if (bVar21) {
          FUN_1400250dc((short *)(param_1 + 0x288),local_360);
          CoTaskMemFree(local_360);
        }
        (**(code **)(*local_358[0] + 0x10))();
      }
      (**(code **)(*local_368 + 0x10))();
      if (!bVar21) {
        return;
      }
    }
    else {
      if (iVar10 != *(int *)(param_1 + 0x284)) {
        return;
      }
      puVar17 = (ushort *)(param_1 + 0x1318);
      puVar2 = (ushort *)(param_1 + 0x288);
      iVar10 = FUN_1400250a0(puVar2,puVar17);
      cVar3 = *(char *)(param_1 + 0x490);
      local_140 = 0;
      lVar20 = 4;
      local_348[0] = 0;
      local_348[1] = 0;
      puVar8 = puVar2;
      pbVar1 = local_348;
      do {
        pbVar19 = pbVar1;
        puVar14 = puVar8;
        uVar4 = *(undefined8 *)(pbVar19 + 8);
        uVar5 = *(undefined8 *)(pbVar19 + 0x10);
        uVar6 = *(undefined8 *)(pbVar19 + 0x18);
        *(undefined8 *)puVar14 = *(undefined8 *)pbVar19;
        *(undefined8 *)(puVar14 + 4) = uVar4;
        uVar4 = *(undefined8 *)(pbVar19 + 0x20);
        uVar7 = *(undefined8 *)(pbVar19 + 0x28);
        *(undefined8 *)(puVar14 + 8) = uVar5;
        *(undefined8 *)(puVar14 + 0xc) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x30);
        uVar6 = *(undefined8 *)(pbVar19 + 0x38);
        *(undefined8 *)(puVar14 + 0x10) = uVar4;
        *(undefined8 *)(puVar14 + 0x14) = uVar7;
        uVar4 = *(undefined8 *)(pbVar19 + 0x40);
        uVar7 = *(undefined8 *)(pbVar19 + 0x48);
        *(undefined8 *)(puVar14 + 0x18) = uVar5;
        *(undefined8 *)(puVar14 + 0x1c) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x50);
        uVar6 = *(undefined8 *)(pbVar19 + 0x58);
        *(undefined8 *)(puVar14 + 0x20) = uVar4;
        *(undefined8 *)(puVar14 + 0x24) = uVar7;
        uVar4 = *(undefined8 *)(pbVar19 + 0x60);
        uVar7 = *(undefined8 *)(pbVar19 + 0x68);
        *(undefined8 *)(puVar14 + 0x28) = uVar5;
        *(undefined8 *)(puVar14 + 0x2c) = uVar6;
        uVar5 = *(undefined8 *)(pbVar19 + 0x70);
        uVar6 = *(undefined8 *)(pbVar19 + 0x78);
        *(undefined8 *)(puVar14 + 0x30) = uVar4;
        *(undefined8 *)(puVar14 + 0x34) = uVar7;
        *(undefined8 *)(puVar14 + 0x38) = uVar5;
        *(undefined8 *)(puVar14 + 0x3c) = uVar6;
        lVar20 = lVar20 + -1;
        puVar8 = puVar14 + 0x40;
        pbVar1 = pbVar19 + 0x80;
      } while (lVar20 != 0);
      uVar4 = *(undefined8 *)(pbVar19 + 0x82);
      *(undefined8 *)(puVar14 + 0x3d) = *(undefined8 *)(pbVar19 + 0x7a);
      *(undefined8 *)(puVar14 + 0x41) = uVar4;
      FUN_1400250dc((short *)puVar2,(short *)puVar17);
      if (cVar3 != *(char *)(param_1 + 0x490)) {
        FUN_14000c2a0(local_res8,puVar17);
      }
      if (iVar10 == 0) {
        return;
      }
    }
    WideCharToMultiByte(0,0x200,(LPCWSTR)(param_1 + 0x288),-1,(LPSTR)local_348,0x30a,(LPCSTR)0x0,
                        (LPBOOL)0x0);
    FUN_14000b1b4(param_1);
  }
  return;
}

