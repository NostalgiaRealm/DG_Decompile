/*
 * _grQueryResolutions@8 at 180003680
 * int __cdecl _grQueryResolutions@8(int * param_1, uint * param_2)
 * Address ranges: 180003680-180003a77
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int _grQueryResolutions_8(int *param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong extraout_x10;
  longlong lVar13;
  longlong extraout_x13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  longlong extraout_d17;
  uint local_60;
  int iStack_5c;
  longlong lStack_58;
  int local_50;
  
                    /* 0x3680  59  _grQueryResolutions@8
                       0x3680  159  grQueryResolutions */
  lVar8 = FUN_180008ce0();
  iVar14 = 0;
  bVar2 = FUN_180009768(lVar8);
  if ((bVar2 & 1) == 0) {
    return 0;
  }
  if (((*param_1 != 0x7fff7fff) || (param_1[1] != 0x7fff7fff)) ||
     (uVar4 = FUN_18000a930(lVar8), uVar4 != 4)) {
    lVar13 = 0;
    do {
      iVar5 = *param_1;
      if ((iVar5 == 0xff || iVar5 == -1) || (iVar5 == (&DAT_180066890)[lVar13])) {
        lVar12 = 0;
        do {
          iVar5 = param_1[1];
          if ((iVar5 == 0xff || iVar5 == -1) || (iVar5 == (&DAT_180066860)[lVar12])) {
            uVar4 = 2;
            do {
              if (param_1[2] == 0xffffffff || param_1[2] == uVar4) {
                uVar7 = 0;
                do {
                  if ((param_1[3] == 0xffffffff || param_1[3] == uVar7) &&
                     ((uint)(ushort)(&DAT_180066822)[lVar13 * 2] *
                      (uint)(ushort)(&DAT_180066820)[lVar13 * 2] * (uVar7 + uVar4) * 2 <=
                      *(uint *)(*(longlong *)(lVar8 + 0x30) + 0x82b))) {
                    if (param_2 != (uint *)0x0) {
                      uVar15 = (&DAT_180066890)[lVar13];
                      param_2[2] = uVar4;
                      param_2[3] = uVar7;
                      uVar16 = (&DAT_180066860)[lVar12];
                      *param_2 = uVar15;
                      param_2[1] = uVar16;
                      param_2 = param_2 + 4;
                    }
                    iVar14 = iVar14 + 0x10;
                  }
                  uVar7 = uVar7 + 1;
                } while (uVar7 <= (uVar4 == 2));
              }
              uVar4 = uVar4 + 1;
            } while (uVar4 < 4);
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 9);
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x10);
    return iVar14;
  }
  if (*(longlong *)(lVar8 + 0x28) != 0) {
    uVar6 = *(undefined4 *)(lVar8 + 0x20);
    iVar5 = *(int *)(lVar8 + 0x24);
    goto LAB_1800038bc;
  }
  uVar4 = *(uint *)(*(longlong *)(lVar8 + 0x30) + 0x800);
  if ((uVar4 < 7) && ((0x69U >> (ulonglong)(uVar4 & 0x1f) & 1) != 0)) {
    *(undefined1 *)(*(longlong *)(lVar8 + 0x30) + 0x826) = 1;
  }
  uVar11 = DAT_18006f9c0;
  lVar13 = *(longlong *)(lVar8 + 0x30);
  if ((*(int *)(lVar13 + 0x800) - 5U < 2) || (*(int *)(lVar13 + 0x800) == 0)) {
    plVar10 = FUN_1800472e0(4,lVar13 + 0x800);
  }
  else {
    FUN_180047380(&local_60,(int *)(lVar13 + 0x800));
    uVar4 = *(uint *)(extraout_x13 + 0x8d2);
    if (uVar4 < 2) {
LAB_180003778:
      uVar6 = 0;
    }
    else if (uVar4 == 2) {
      uVar6 = 1;
    }
    else if (uVar4 == 3) {
      uVar6 = 2;
    }
    else {
      if (uVar4 != 4) goto LAB_180003778;
      uVar6 = 3;
    }
    puVar9 = (undefined8 *)FUN_1800636c0(0x4a0);
    if (puVar9 == (undefined8 *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = (longlong *)FUN_18005b2e0(puVar9,uVar11,uVar6);
      *plVar10 = (longlong)&PTR_FUN_180068fb8;
      plVar10[0x90] = 0;
      plVar10[0x92] = lStack_58;
      plVar10[0x91] = extraout_d17;
      plVar10[0x93] = extraout_x10;
      *(undefined8 *)((longlong)plVar10 + 0x43c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x434) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x44c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x444) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x45c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x454) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x46c) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)plVar10 + 0x464) = 0xffffffffffffffff;
      *(bool *)(plVar10 + 0x8f) = (int)plVar10[0x91] == 5;
    }
  }
  *(longlong **)(lVar8 + 0x28) = plVar10;
  if (plVar10 == (longlong *)0x0) {
    return 0;
  }
  lVar13 = *plVar10;
  uVar11 = (**(code **)(**(longlong **)(lVar8 + 0x30) + 0x60))
                     (*(longlong **)(lVar8 + 0x30),&DAT_180065470);
  cVar3 = (**(code **)(lVar13 + 8))(plVar10,*(longlong *)(lVar8 + 0x30) + 0x800,uVar11);
  if (cVar3 == '\0') {
    return 0;
  }
  cVar3 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x10))();
  if ((cVar3 == '\0') || (iVar5 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x68))(), iVar5 == 0)
     ) {
    puVar9 = *(undefined8 **)(lVar8 + 0x28);
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,1);
    }
    *(undefined8 *)(lVar8 + 0x28) = 0;
    return 0;
  }
  uVar6 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0x70))(*(longlong **)(lVar8 + 0x28),0);
  *(undefined4 *)(lVar8 + 0x20) = uVar6;
  iVar1 = *(int *)(*(longlong *)(lVar8 + 0x30) + 0x808);
  iVar5 = 0;
  if (iVar1 != 0) {
    iVar5 = iVar1 + -1;
  }
  *(int *)(lVar8 + 0x24) = iVar5;
LAB_1800038bc:
  uVar7 = (**(code **)(**(longlong **)(lVar8 + 0x28) + 0xa0))
                    (*(longlong **)(lVar8 + 0x28),uVar6,iVar5,
                     *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + 0x818));
  uVar4 = 0;
  if (uVar7 != 0) {
    do {
      uVar15 = 2;
      do {
        uVar16 = 0;
        do {
          if (param_2 != (uint *)0x0) {
            (**(code **)(**(longlong **)(lVar8 + 0x28) + 0xa8))
                      (*(longlong **)(lVar8 + 0x28),&local_60,*(undefined4 *)(lVar8 + 0x20),
                       *(undefined4 *)(lVar8 + 0x24),
                       *(undefined4 *)(*(longlong *)(lVar8 + 0x30) + 0x818),uVar4);
            param_2[2] = uVar15;
            param_2[3] = uVar16;
            *param_2 = local_60 | iStack_5c << 0x10;
            param_2[1] = local_50 << 0x10;
            param_2 = param_2 + 4;
          }
          uVar16 = uVar16 + 1;
          iVar14 = iVar14 + 0x10;
        } while (uVar16 <= (uVar15 == 2));
        uVar15 = uVar15 + 1;
      } while (uVar15 < 4);
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar7);
  }
  return iVar14;
}

