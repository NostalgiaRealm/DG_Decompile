/*
 * FUN_1003d1d0 at 1003d1d0
 * uint __fastcall FUN_1003d1d0(void * param_1)
 * Address ranges: 1003d1d0-1003d981
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_1003d1d0(void *param_1)

{
  int *piVar1;
  void *pvVar2;
  byte *pbVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint *puVar7;
  char *pcVar8;
  uint *puVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_2c;
  undefined8 local_28;
  uint uStack_20;
  uint local_1c;
  undefined8 uStack_18;
  int7 iStack_10;
  undefined1 uStack_9;
  
  if (*(char *)((int)param_1 + 0x7642) == '\0') {
    if (*(char *)((int)param_1 + 0xf6a2) != '\0') {
      iVar5 = *(int *)((int)param_1 + 0xf750);
      if (iVar5 == 0) {
        iVar11 = 0;
        uVar4 = 0;
      }
      else {
        iVar11 = *(int *)(iVar5 + 4);
        uVar4 = *(uint *)(iVar5 + 0x48);
      }
      FUN_10057b79(param_1,-(uint)(*(int *)((int)param_1 + 0xf7f4) != 0) &
                           *(int *)((int)param_1 + 0xf7f4) + 0x18U,iVar11,uVar4);
      *(undefined1 *)((int)param_1 + 0xf6a2) = 0;
    }
    if (*(char *)((int)param_1 + 0xfd9f) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((int)param_1 + 0xfc28);
    }
    uVar12 = (*(uint *)((int)param_1 + 0xfc24) | uVar4) & ~*(uint *)((int)param_1 + 0xf698);
    local_2c = uVar12;
    uVar4 = 0;
    bVar14 = uVar12 == 0;
    if (!bVar14) {
      for (; (uVar12 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (!bVar14) {
      pbVar3 = (byte *)((int)&local_2c + ((int)uVar4 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
      FUN_1003cdd0(param_1,*(uint *)((int)param_1 + (uVar4 & 0xff) * 4 + 0xfba8));
      uVar4 = 0;
      bVar14 = local_2c == 0;
      if (!bVar14) {
        for (; (local_2c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    *(uint *)((int)param_1 + 0xf698) = *(uint *)((int)param_1 + 0xf698) | uVar12;
    *(undefined4 *)((int)param_1 + 0xfc24) = 0;
    *(byte *)((int)param_1 + 0xf6a0) = *(byte *)((int)param_1 + 0xf6a0) | uVar12 != 0;
    local_2c = *(uint *)((int)param_1 + 0xf698) & 0xf;
    uVar4 = 0;
    bVar14 = local_2c == 0;
    if (!bVar14) {
      for (; (local_2c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (!bVar14) {
      uVar13 = uVar4 & 0xff;
      pbVar3 = (byte *)((int)&local_2c + ((int)uVar4 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
      uVar6 = local_28._4_4_;
      piVar1 = *(int **)((int)param_1 + uVar13 * 4 + 0xfb80);
      local_28 = CONCAT44(local_28._4_4_,uVar4) & 0xffffffff000000ff;
      uVar12 = *(uint *)(*(int *)((int)param_1 + 0xf6c4) + 0xc0);
      local_1c = *(uint *)((int)param_1 + 0xe78);
      local_28._5_3_ = SUB43(uVar6,1);
      local_28 = CONCAT35(local_28._5_3_,
                          CONCAT14((*(byte *)((int)&local_1c + ((int)uVar13 >> 3)) >> (uVar4 & 7) &
                                   1) != 0,uVar4)) & 0xffffffff000000ff;
      if (piVar1 == (int *)0x0) {
        pvVar2 = *(void **)((int)param_1 + uVar13 * 4 + 0xfb94);
        if ((pvVar2 != (void *)0x0) &&
           (uVar12 = FUN_10088a84(pvVar2,(char)(local_28 >> 0x20)), uVar12 != 0xffffffff)) {
          local_1c = *(uint *)(*(int *)((int)param_1 + uVar13 * 4 + 0xfb94) + 0x34);
          *(uint *)((int)param_1 + uVar13 * 4 + 0xfba8) = local_1c;
          uVar13 = (int)local_1c >> 0x1f;
          uStack_18 = CONCAT44(uStack_18._4_4_,local_1c);
          uVar4 = FUN_10043ff0((void *)((int)param_1 + 0xf8f0),local_1c,uVar13);
          if (uVar4 != *(uint *)((int)param_1 + 0xf8f8)) {
            iVar5 = *(int *)((int)param_1 + 0xf8f4);
            if (((*(uint *)(iVar5 + uVar4 * 0x18) == (uint)uStack_18) &&
                (*(uint *)(iVar5 + 4 + uVar4 * 0x18) == uVar13)) &&
               (iVar5 = uVar4 * 0x18 + 0xc + iVar5, iVar5 != 0)) {
              *(char *)(iVar5 + 1) = *(char *)(iVar5 + 1) + '\x01';
              *(undefined1 *)(iVar5 + 7) = 1;
              goto LAB_1003d4fd;
            }
          }
          _iStack_10 = 0x100000000000000;
          puVar7 = &local_1c;
LAB_1003d4ec:
          _iStack_10 = CONCAT62(stack0xfffffff2,0x100);
          FUN_10043dd0((void *)((int)param_1 + 0xf8f0),puVar7,(uint *)&iStack_10);
        }
      }
      else {
        bVar10 = *(byte *)((int)piVar1 + 0x12e);
        local_1c = *(uint *)((int)param_1 + 0xfc28);
        if ((((*(byte *)((int)&local_1c + ((int)uVar13 >> 3)) >> (uVar4 & 7) & 1) != 0) &&
            ((bVar10 & 1) != 0)) &&
           ((*(int *)((int)param_1 + 0x790) == 0 || (*(int *)((int)param_1 + 0x794) == 0)))) {
          bVar10 = bVar10 & 0xfe;
        }
        if (bVar10 == 1) {
          uVar4 = (**(code **)(*piVar1 + 0x7c))();
          pvVar2 = *(void **)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
          if (((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar4 != 0)) &&
             ((iVar5 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar4,0,0,
                                    *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0,
                                    *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
              *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3 && (iVar5 != 0)))) {
            FUN_100ba7a8(pvVar2,uVar4,0,iVar5,0);
          }
          *(undefined1 *)((int)param_1 + 0xfd9b) = 1;
          pbVar3 = (byte *)((int)param_1 + ((int)(uint)local_28 >> 3) + 0xfc24);
          *pbVar3 = *pbVar3 | '\x01' << ((uint)local_28 & 7);
          uVar13 = (uint)local_28;
        }
        uVar12 = (**(code **)(**(int **)((int)param_1 + uVar13 * 4 + 0xfb80) + 0x8c))
                           (local_28._4_4_,1);
        if (uVar12 != 0xffffffff) {
          uVar6 = (**(code **)(**(int **)((int)param_1 + uVar13 * 4 + 0xfb80) + 0x7c))();
          *(undefined4 *)((int)param_1 + uVar13 * 4 + 0xfba8) = uVar6;
          bVar10 = (**(code **)(**(int **)((int)param_1 + uVar13 * 4 + 0xfb80) + 0x88))();
          local_1c = *(uint *)((int)param_1 + uVar13 * 4 + 0xfba8);
          uStack_18 = CONCAT44(uStack_18._4_4_,local_1c);
          uVar13 = (int)local_1c >> 0x1f;
          uVar4 = FUN_10043ff0((void *)((int)param_1 + 0xf8f0),local_1c,uVar13);
          if ((((uVar4 == *(uint *)((int)param_1 + 0xf8f8)) ||
               (iVar5 = *(int *)((int)param_1 + 0xf8f4), *(uint *)(iVar5 + uVar4 * 0x18) != local_1c
               )) || (*(uint *)(iVar5 + 4 + uVar4 * 0x18) != uVar13)) ||
             (iVar5 = uVar4 * 0x18 + 0xc + iVar5, iVar5 == 0)) {
            _iStack_10 = CONCAT17(1,(uint7)bVar10 << 0x30);
            puVar7 = (uint *)&uStack_18;
            goto LAB_1003d4ec;
          }
          *(char *)(iVar5 + 1) = *(char *)(iVar5 + 1) + '\x01';
          *(undefined1 *)(iVar5 + 7) = 1;
        }
      }
LAB_1003d4fd:
      iVar5 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x15d8);
      piVar1 = *(int **)(*(int *)(iVar5 + 0x34) + (uVar12 >> 0x10) * 8);
      (**(code **)(*piVar1 + 0x24))(piVar1,&uStack_20);
      uStack_20 = uStack_20 + (uVar12 & 0xffff) * *(int *)(iVar5 + 0x18);
      *(uint *)((int)param_1 + (uint)local_28 * 4 + 0xfa08) = uStack_20;
      uVar4 = 0;
      bVar14 = local_2c == 0;
      if (!bVar14) {
        for (; (local_2c >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    if (*(char *)((int)param_1 + 0xfd9f) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((int)param_1 + 0xfc20);
    }
    uVar12 = (*(uint *)((int)param_1 + 0xfc1c) | uVar4) & ~*(uint *)((int)param_1 + 0xf660);
    local_28._0_4_ = uVar12;
    uVar4 = 0;
    bVar14 = uVar12 == 0;
    if (!bVar14) {
      for (; (uVar12 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (!bVar14) {
      pbVar3 = (byte *)((int)&local_28 + ((int)uVar4 >> 3));
      *pbVar3 = *pbVar3 & ~('\x01' << (uVar4 & 7));
      FUN_1003ccc0(param_1,*(uint *)((int)param_1 + (uVar4 & 0xff) * 4 + 0xfb3c));
      uVar4 = 0;
      bVar14 = (uint)local_28 == 0;
      if (!bVar14) {
        for (; ((uint)local_28 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    *(uint *)((int)param_1 + 0xf660) = *(uint *)((int)param_1 + 0xf660) | uVar12;
    uVar4 = *(uint *)((int)param_1 + 0xf660);
    *(undefined4 *)((int)param_1 + 0xfc1c) = 0;
    *(byte *)((int)param_1 + 0xf669) = *(byte *)((int)param_1 + 0xf669) | uVar12 != 0;
    in_EAX = 0;
    if (uVar4 != 0) {
      for (; (uVar4 >> in_EAX & 1) == 0; in_EAX = in_EAX + 1) {
      }
    }
    local_28 = CONCAT44(local_28._4_4_,uVar4);
    if (uVar4 != 0) {
      do {
        uVar12 = in_EAX & 0xff;
        pbVar3 = (byte *)((int)&local_28 + ((int)in_EAX >> 3));
        *pbVar3 = *pbVar3 & ~('\x01' << (in_EAX & 7));
        piVar1 = *(int **)((int)param_1 + uVar12 * 4 + 0xfabc);
        local_2c = uVar12;
        uVar4 = *(uint *)(*(int *)((int)param_1 + 0xf6c4) + 0xc0);
        uStack_18 = CONCAT44(uStack_18._4_4_,*(undefined4 *)((int)param_1 + 0xe74));
        bVar14 = (*(byte *)((int)&uStack_18 + ((int)uVar12 >> 3)) >> (in_EAX & 7) & 1) != 0;
        uStack_20 = CONCAT31(uStack_20._1_3_,bVar14);
        if (piVar1 == (int *)0x0) {
          pvVar2 = *(void **)((int)param_1 + uVar12 * 4 + 0xfafc);
          if ((pvVar2 != (void *)0x0) && (uVar4 = FUN_10088a84(pvVar2,bVar14), uVar4 != 0xffffffff))
          {
            local_1c = *(uint *)(*(int *)((int)param_1 + uVar12 * 4 + 0xfafc) + 0x34);
            *(uint *)((int)param_1 + uVar12 * 4 + 0xfb3c) = local_1c;
            _iStack_10 = CONCAT44(stack0xfffffff4,local_1c);
            uStack_18 = CONCAT44(uStack_18._4_4_,(int)local_1c >> 0x1f);
            uVar13 = FUN_10043ff0((void *)((int)param_1 + 0xf8f0),local_1c,(int)local_1c >> 0x1f);
            if (uVar13 != *(uint *)((int)param_1 + 0xf8f8)) {
              iVar5 = *(int *)((int)param_1 + 0xf8f4);
              if ((*(uint *)(iVar5 + uVar13 * 0x18) == (uint)iStack_10) &&
                 (*(uint *)(iVar5 + 4 + uVar13 * 0x18) == (uint)uStack_18)) {
                iVar5 = iVar5 + uVar13 * 0x18;
                pcVar8 = (char *)(iVar5 + 0xc);
                if (pcVar8 != (char *)0x0) {
                  *pcVar8 = *pcVar8 + '\x01';
                  *(undefined1 *)(iVar5 + 0x13) = 1;
                  goto LAB_1003d824;
                }
              }
            }
            puVar7 = (uint *)&iStack_10;
            puVar9 = &local_1c;
            _iStack_10 = 0x100000000000001;
            goto LAB_1003d818;
          }
        }
        else {
          bVar10 = *(byte *)((int)piVar1 + 0x12e);
          uStack_18 = CONCAT44(uStack_18._4_4_,*(undefined4 *)((int)param_1 + 0xfc20));
          if ((((*(byte *)((int)&uStack_18 + ((int)uVar12 >> 3)) >> (in_EAX & 7) & 1) != 0) &&
              ((bVar10 & 1) != 0)) &&
             ((*(int *)((int)param_1 + 0x790) == 0 || (*(int *)((int)param_1 + 0x794) == 0)))) {
            bVar10 = bVar10 & 0xfe;
          }
          if (bVar10 == 1) {
            uVar4 = (**(code **)(*piVar1 + 0x7c))();
            pvVar2 = *(void **)(*(int *)((int)param_1 + 0xf6b8) + 0x1304);
            if ((((*(int *)((int)pvVar2 + 0x8e0) != 0) && (uVar4 != 0)) &&
                (iVar5 = FUN_100c133b(*(void **)((int)pvVar2 + 0x8e4),uVar4,0,0,
                                      *(int *)((int)pvVar2 + 0x8e0),(int)pvVar2,0,
                                      *(int *)((int)pvVar2 + 0x938),*(int *)((int)pvVar2 + 0x93c)),
                *(int *)(*(int *)((int)pvVar2 + 0x8e0) + 0x20) != 3)) && (iVar5 != 0)) {
              FUN_100ba7a8(pvVar2,uVar4,0,iVar5,0);
            }
            *(undefined1 *)((int)param_1 + 0xfd9b) = 1;
            pbVar3 = (byte *)((int)param_1 + ((int)local_2c >> 3) + 0xfc1c);
            *pbVar3 = *pbVar3 | '\x01' << (local_2c & 7);
          }
          uVar12 = local_2c;
          uVar4 = (**(code **)(**(int **)((int)param_1 + local_2c * 4 + 0xfabc) + 0x8c))
                            (uStack_20,0);
          if (uVar4 != 0xffffffff) {
            uVar6 = (**(code **)(**(int **)((int)param_1 + uVar12 * 4 + 0xfabc) + 0x7c))();
            *(undefined4 *)((int)param_1 + uVar12 * 4 + 0xfb3c) = uVar6;
            bVar10 = (**(code **)(**(int **)((int)param_1 + uVar12 * 4 + 0xfabc) + 0x88))();
            uVar13 = *(uint *)((int)param_1 + uVar12 * 4 + 0xfb3c);
            _iStack_10 = CONCAT44(stack0xfffffff4,uVar13);
            local_1c = (int)uVar13 >> 0x1f;
            uStack_18 = CONCAT44(uStack_18._4_4_,uVar13);
            uVar13 = FUN_10043ff0((void *)((int)param_1 + 0xf8f0),uVar13,local_1c);
            if (uVar13 != *(uint *)((int)param_1 + 0xf8f8)) {
              iVar5 = *(int *)((int)param_1 + 0xf8f4);
              if ((*(uint *)(iVar5 + uVar13 * 0x18) == (uint)uStack_18) &&
                 (*(uint *)(iVar5 + 4 + uVar13 * 0x18) == local_1c)) {
                iVar5 = iVar5 + uVar13 * 0x18;
                pcVar8 = (char *)(iVar5 + 0xc);
                if (pcVar8 != (char *)0x0) {
                  *pcVar8 = *pcVar8 + '\x01';
                  *(undefined1 *)(iVar5 + 0x13) = 1;
                  goto LAB_1003d824;
                }
              }
            }
            puVar7 = (uint *)&uStack_18;
            uStack_18 = CONCAT71((uint7)bVar10 << 0x28,1);
            puVar9 = (uint *)&iStack_10;
            uStack_18 = CONCAT17(1,(undefined7)uStack_18);
LAB_1003d818:
            FUN_10043dd0((void *)((int)param_1 + 0xf8f0),puVar9,puVar7);
          }
        }
LAB_1003d824:
        if (uVar12 < 8) {
          *(undefined4 *)((int)param_1 + uVar12 * 4 + 0xf940) =
               *(undefined4 *)((int)param_1 + 0xf7f8);
        }
        iVar5 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x15d8);
        piVar1 = *(int **)(*(int *)(iVar5 + 0x34) + (uVar4 >> 0x10) * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,(int)&local_28 + 4);
        iVar5 = local_28._4_4_ + (uVar4 & 0xffff) * *(int *)(iVar5 + 0x18);
        local_28 = CONCAT44(iVar5,(uint)local_28);
        *(int *)((int)param_1 + local_2c * 4 + 0xf960) = iVar5;
        in_EAX = 0;
        if ((uint)local_28 != 0) {
          for (; ((uint)local_28 >> in_EAX & 1) == 0; in_EAX = in_EAX + 1) {
          }
        }
        if ((uint)local_28 == 0) {
          return in_EAX & 0xffffff00;
        }
      } while( true );
    }
  }
  else if (((*(char *)((int)param_1 + 0xf669) != '\0') &&
           (*(int **)((int)param_1 + 0xfa7c) != (int *)0x0)) &&
          (in_EAX = (**(code **)(**(int **)((int)param_1 + 0xfa7c) + 0x8c))(0,0),
          in_EAX != 0xffffffff)) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xf6b8) + 0x15d8);
    piVar1 = *(int **)(*(int *)(iVar5 + 0x34) + (in_EAX >> 0x10) * 8);
    (**(code **)(*piVar1 + 0x24))(piVar1,&uStack_18);
    *(uint *)((int)param_1 + 0xf9a0) = uStack_20 + (in_EAX & 0xffff) * *(int *)(iVar5 + 0x18);
    uVar4 = (**(code **)(**(int **)((int)param_1 + 0xfa7c) + 0x7c))();
    *(uint *)((int)param_1 + 0xfb7c) = uVar4;
    uStack_20 = uVar4;
    uVar12 = FUN_10043ff0((void *)((int)param_1 + 0xf8f0),uVar4,(int)uVar4 >> 0x1f);
    if (((uVar12 != *(uint *)((int)param_1 + 0xf8f8)) &&
        (iVar5 = *(int *)((int)param_1 + 0xf8f4), *(uint *)(iVar5 + uVar12 * 0x18) == uVar4)) &&
       (*(uint *)(iVar5 + 4 + uVar12 * 0x18) == (int)uVar4 >> 0x1f)) {
      iVar5 = iVar5 + uVar12 * 0x18;
      pcVar8 = (char *)(iVar5 + 0xc);
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = *pcVar8 + '\x01';
        *(undefined1 *)(iVar5 + 0x13) = 1;
        return (uint)pcVar8 & 0xffffff00;
      }
    }
    local_28 = 0x100000000000001;
    in_EAX = FUN_10043dd0((void *)((int)param_1 + 0xf8f0),&uStack_20,(uint *)&local_28);
  }
  return in_EAX & 0xffffff00;
}

