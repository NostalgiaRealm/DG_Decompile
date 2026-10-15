/*
 * FUN_1800171bc at 1800171bc
 * bool __fastcall FUN_1800171bc(longlong * param_1, longlong param_2)
 * Address ranges: 1800171bc-18001747d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_1800171bc(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 uVar14;
  bool bVar15;
  uint local_res8 [2];
  int local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  
  uVar14 = 0;
  iVar12 = *(int *)((longlong)param_1 + 0x74);
  bVar15 = false;
  if (iVar12 < 0x50) {
    if ((((iVar12 != 0x4f) && (iVar12 != 0x46)) &&
        ((iVar12 != 0x47 && ((iVar12 != 0x49 && (iVar12 != 0x4b)))))) && (iVar12 != 0x4d))
    goto LAB_18001722c;
  }
  else if ((((iVar12 != 0x50) && (iVar12 != 0x34324644)) && (iVar12 != 0x36314644)) &&
          (iVar12 != 0x5a544e49)) goto LAB_18001722c;
  bVar15 = true;
LAB_18001722c:
  if (bVar15) {
    iVar12 = 5 - (uint)((int)param_1[4] != 5);
  }
  else {
    iVar12 = ((int)param_1[4] == 5) + 1;
  }
  if (*(int *)((longlong)param_1 + 0x7c) != 3) {
    local_res8[0] = (uint)*(ushort *)((longlong)param_1 + 0x3c);
    uVar5 = FUN_1800170f0((longlong)param_1,(int *)local_res8);
    if ((*(byte *)(param_1 + 0xe) & 3) == 0) {
      lVar7 = (**(code **)(*(longlong *)param_1[10] + 0x58))
                        ((longlong *)param_1[10],(int)param_1[0xd],
                         *(undefined4 *)((longlong)param_1 + 0x6c),(int)param_1[0xf],local_res8[0],
                         iVar12,uVar5);
    }
    else {
      FUN_1800083fc(param_2,&local_48);
      uVar6 = *(uint *)(param_1 + 0xd);
      uVar10 = *(uint *)((longlong)param_1 + 0x6c);
      uVar11 = (ulonglong)uVar10;
      uVar13 = (ulonglong)uVar6;
      iVar9 = 1;
      if (*(char *)(DAT_180111f20 + 0x9f4) != '\0') {
        uVar13 = (ulonglong)(uVar6 * local_48) / (ulonglong)local_44;
        uVar1 = (ulonglong)(uVar10 * local_40) / (ulonglong)local_3c;
        if (((iVar12 == 2) || (uVar11 = uVar1, iVar12 == 5)) &&
           (uVar11 = uVar13, (uint)uVar1 < (uint)uVar13)) {
          uVar11 = uVar1;
          uVar13 = uVar1;
        }
        uVar14 = 1;
        iVar9 = 1;
        if (*(int *)(DAT_180111f20 + 0x86c) != 0) {
          iVar9 = *(int *)(DAT_180111f20 + 0x86c);
        }
      }
      lVar7 = (**(code **)(*(longlong *)param_1[10] + 0x50))
                        ((longlong *)param_1[10],uVar13,uVar11,(ulonglong)uVar6,uVar10,iVar9,
                         (int)param_1[0xf],local_res8[0],iVar12,uVar5);
    }
    param_1[0xb] = lVar7;
  }
  if ((param_1[0xb] != 0) || (bVar15 = false, *(int *)((longlong)param_1 + 0x7c) == 3)) {
    if (((*(uint *)(param_1 + 0xe) & 0x200) == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    *(undefined1 *)(param_1 + 0x11) = uVar8;
    if (((*(uint *)(param_1 + 0xe) & 0x200) == 0) && (*(int *)((longlong)param_1 + 0x7c) == 0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    uVar5 = 0;
    if ((int)param_1[0x10] == 0) {
      uVar10 = 0;
      uVar6 = 0;
    }
    else {
      do {
        uVar10 = 0;
        if (*(short *)((longlong)param_1 + 0x3c) != 0) {
          do {
            local_48 = *(int *)((longlong)param_1 + 0x74);
            local_44 = *(uint *)(param_1 + 4);
            local_40 = (int)param_1[0xe];
            local_3c = *(uint *)((longlong)param_1 + 0x7c);
            bVar2 = (byte)uVar10 & 0x1f;
            bVar3 = (byte)uVar10 & 0x1f;
            local_30 = 1;
            if (*(uint *)(param_1 + 0xd) >> bVar2 != 0) {
              local_30 = *(uint *)(param_1 + 0xd) >> bVar2;
            }
            local_38 = 0;
            local_2c = 1;
            if (*(uint *)((longlong)param_1 + 0x6c) >> bVar3 != 0) {
              local_2c = *(uint *)((longlong)param_1 + 0x6c) >> bVar3;
            }
            cVar4 = (**(code **)(*param_1 + 0x28))(param_1,uVar5,uVar10,&local_48,uVar8,uVar14);
          } while ((cVar4 != '\0') &&
                  (uVar10 = uVar10 + 1, uVar10 < *(ushort *)((longlong)param_1 + 0x3c)));
        }
        uVar6 = *(uint *)(param_1 + 0x10);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    bVar15 = uVar5 == uVar6;
    if (!bVar15) {
      iVar12 = uVar5 + 1;
      while (iVar12 != 0) {
        iVar12 = iVar12 + -1;
        while (uVar10 != 0) {
          uVar10 = uVar10 - 1;
          (**(code **)(*param_1 + 0x30))(param_1,iVar12,uVar10);
        }
        uVar10 = (uint)*(ushort *)((longlong)param_1 + 0x3c);
      }
      (**(code **)(*(longlong *)param_1[0xb] + 0x20))();
      param_1[0xb] = 0;
    }
  }
  return bVar15;
}

