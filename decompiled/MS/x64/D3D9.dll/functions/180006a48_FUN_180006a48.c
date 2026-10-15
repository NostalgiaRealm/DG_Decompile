/*
 * FUN_180006a48 at 180006a48
 * undefined __fastcall FUN_180006a48(longlong param_1, char param_2)
 * Address ranges: 180006a48-180006d91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_180006a48(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  char cVar11;
  uint uVar12;
  uint uVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  uint local_res10 [6];
  longlong *plVar13;
  
  FUN_18001b8f4(param_1);
  plVar16 = (longlong *)0x0;
  uVar6 = 0;
  plVar13 = plVar16;
  do {
    uVar7 = (ulonglong)plVar13 >> 6;
    puVar1 = (ulonglong *)(param_1 + 0xd20 + uVar7 * 8);
    uVar9 = 0;
    bVar17 = *puVar1 != 0;
    if (bVar17) {
      for (; (*puVar1 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
      }
    }
    if (bVar17) goto LAB_180006ac2;
    uVar12 = (int)plVar13 + 0x40;
    plVar13 = (longlong *)(ulonglong)uVar12;
  } while (uVar12 < 0x10a);
  iVar8 = -1;
  while (iVar8 != -1) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0xa8))
              (*(longlong **)(param_1 + 0x28),iVar8,
               (longlong)iVar8 * 0x40 + *(longlong *)(param_1 + 0xe10));
    while( true ) {
      if (0x109 < (uint)plVar13) goto LAB_180006ad4;
      uVar7 = (ulonglong)plVar13 >> 6;
      puVar1 = (ulonglong *)(param_1 + 0xd20 + uVar7 * 8);
      uVar9 = 0;
      bVar17 = *puVar1 != 0;
      if (bVar17) {
        for (; (*puVar1 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
      if (bVar17) break;
      plVar13 = (longlong *)(ulonglong)((uint)plVar13 + 0x40);
    }
LAB_180006ac2:
    pbVar3 = (byte *)(param_1 + 0xd20 + uVar7 * 8 + ((longlong)(uVar9 & 0xffffffff) >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar9 & 7));
    iVar8 = (int)uVar9 + (int)plVar13;
  }
LAB_180006ad4:
  if (*(char *)(param_1 + 0xd12) != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x58))
              (*(longlong **)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x3f4));
    *(undefined1 *)(param_1 + 0xd12) = 0;
  }
  if (((*(char *)(param_1 + 0x40d) == '\0') && (*(char *)(param_1 + 0x410) == '\0')) ||
     (cVar11 = '\x01', *(char *)(param_1 + 0x40f) == '\0')) {
    cVar11 = '\0';
  }
  if (cVar11 != *(char *)(param_1 + 0x40e)) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x60))(*(longlong **)(param_1 + 0x28),cVar11);
    *(char *)(param_1 + 0x40e) = cVar11;
  }
  local_res10[0] = *(uint *)(param_1 + 0xd18);
  uVar12 = 0;
  if (local_res10[0] != 0) {
    for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
    }
  }
  if (local_res10[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar12 & 7));
    while( true ) {
      plVar13 = *(longlong **)(param_1 + 0x1338 + (ulonglong)(uVar12 & 0xff) * 8);
      if ((plVar13 != (longlong *)0x0) &&
         (((iVar8 = (int)plVar13[4], iVar8 == 3 || (iVar8 == 4)) || (iVar8 == 5)))) {
        (**(code **)(*plVar13 + 0x20))();
      }
      uVar12 = 0;
      if (local_res10[0] != 0) {
        for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      if (local_res10[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar12 & 7));
    }
  }
  local_res10[0] = *(uint *)(param_1 + 0x67fc);
  uVar12 = 0;
  if (local_res10[0] != 0) {
    for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
    }
  }
  *(undefined4 *)(param_1 + 0xd18) = 0;
  if (local_res10[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar12 & 7));
    while( true ) {
      plVar13 = *(longlong **)(param_1 + 0x13b8 + (ulonglong)(uVar12 & 0xff) * 8);
      if ((plVar13 != (longlong *)0x0) &&
         (((iVar8 = (int)plVar13[4], iVar8 == 3 || (iVar8 == 4)) || (iVar8 == 5)))) {
        (**(code **)(*plVar13 + 0x20))();
      }
      uVar12 = 0;
      if (local_res10[0] != 0) {
        for (; (local_res10[0] >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
        }
      }
      if (local_res10[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar12 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar12 & 7));
    }
  }
  *(undefined4 *)(param_1 + 0x67fc) = 0;
  if ((*(uint *)(param_1 + 0x67f8) != 0) || (*(int *)(param_1 + 0x6804) != 0)) {
    uVar12 = *(uint *)(param_1 + 0xf30);
    plVar13 = plVar16;
    if (uVar12 != 0) {
      uVar9 = (ulonglong)*(uint *)(param_1 + 0x67f0);
      lVar2 = *(longlong *)(param_1 + 0xf28);
      uVar14 = uVar12;
      do {
        uVar5 = uVar14 + uVar6 >> 1;
        uVar7 = *(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18);
        uVar4 = uVar5;
        if (uVar7 <= uVar9) {
          if (uVar9 <= uVar7) break;
          uVar6 = uVar5 + 1;
          uVar4 = uVar14;
          uVar5 = uVar6;
        }
        uVar14 = uVar4;
      } while (uVar14 != uVar6);
      if ((uVar5 != uVar12) && (*(ulonglong *)(lVar2 + (ulonglong)uVar5 * 0x18) == uVar9)) {
        plVar13 = (longlong *)(lVar2 + 0x10 + (ulonglong)uVar5 * 0x18);
      }
    }
    local_res10[0] = *(uint *)(param_1 + 0x67f8) & *(uint *)(param_1 + 0x67f4);
    uVar6 = 0;
    if (local_res10[0] != 0) {
      for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    if (local_res10[0] == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      uVar6 = uVar6 & 0xff;
    }
    if (uVar6 != 0xffffffff) {
      while( true ) {
        plVar10 = plVar16;
        plVar15 = (longlong *)(param_1 + 0xf38);
        if (plVar13 != (longlong *)0x0) {
          plVar10 = (longlong *)*plVar13;
          plVar15 = (longlong *)*plVar13;
        }
        FUN_180016e58(*(undefined8 **)(param_1 + 0x1338 + (longlong)(int)uVar6 * 8),
                      (longlong)plVar10,plVar15);
        uVar6 = 0;
        if (local_res10[0] != 0) {
          for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (local_res10[0] == 0) break;
        pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
        uVar6 = uVar6 & 0xff;
      }
    }
    local_res10[0] = *(uint *)(param_1 + 0x6804) & *(uint *)(param_1 + 0x6800);
    uVar6 = 0;
    if (local_res10[0] != 0) {
      for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    *(undefined4 *)(param_1 + 0x67f8) = 0;
    if (local_res10[0] != 0) {
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      while( true ) {
        plVar10 = plVar16;
        plVar15 = (longlong *)(param_1 + 0xf38);
        if (plVar13 != (longlong *)0x0) {
          plVar10 = (longlong *)*plVar13;
          plVar15 = (longlong *)*plVar13;
        }
        FUN_180016e58(*(undefined8 **)(param_1 + 0x1338 + (ulonglong)(uVar6 & 0xff) * 8),
                      (longlong)plVar10,plVar15);
        uVar6 = 0;
        if (local_res10[0] != 0) {
          for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
          }
        }
        if (local_res10[0] == 0) break;
        pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
      }
    }
    *(undefined4 *)(param_1 + 0x6804) = 0;
  }
  local_res10[0] = *(uint *)(&DAT_00006808 + param_1);
  uVar6 = 0;
  if (local_res10[0] != 0) {
    for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (local_res10[0] != 0) {
    pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
    *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
    while( true ) {
      if (*(undefined8 **)(&DAT_000066c8 + (ulonglong)(uVar6 & 0xff) * 8 + param_1) !=
          (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(&DAT_000066c8 + (ulonglong)(uVar6 & 0xff) * 8 + param_1))();
      }
      uVar6 = 0;
      if (local_res10[0] != 0) {
        for (; (local_res10[0] >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
      if (local_res10[0] == 0) break;
      pbVar3 = (byte *)((longlong)local_res10 + ((longlong)(int)uVar6 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar6 & 7));
    }
  }
  *(undefined4 *)(&DAT_00006808 + param_1) = 0;
  if ((&DAT_00006818)[param_1] != '\0') {
    if (*(undefined8 **)(&DAT_000066c0 + param_1) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(&DAT_000066c0 + param_1))();
    }
    (&DAT_00006818)[param_1] = 0;
  }
  if (param_2 != '\0') {
    FUN_18001b6ec(param_1);
  }
  return;
}

