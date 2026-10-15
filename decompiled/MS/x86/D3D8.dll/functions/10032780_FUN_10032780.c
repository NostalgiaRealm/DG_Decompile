/*
 * FUN_10032780 at 10032780
 * uint __fastcall FUN_10032780(void * param_1)
 * Address ranges: 10032780-10032baf
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint __fastcall FUN_10032780(void *param_1)

{
  int *piVar1;
  void *this;
  byte *pbVar2;
  undefined1 uVar3;
  uint in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  byte bVar10;
  uint uVar11;
  bool bVar12;
  uint *puVar13;
  uint local_30;
  uint local_2c;
  int iStack_28;
  uint local_24;
  uint uStack_20;
  undefined1 uStack_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined4 uStack_17;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_10;
  undefined4 uStack_f;
  undefined2 uStack_b;
  
  if (*(char *)((int)param_1 + 0x5955) == '\0') {
    if (*(char *)((int)param_1 + 0xde5f) == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = *(uint *)((int)param_1 + 0xdce8);
    }
    uVar11 = (*(uint *)((int)param_1 + 0xdce4) | uVar4) & ~*(uint *)((int)param_1 + 0xd970);
    local_30 = uVar11;
    uVar4 = 0;
    bVar12 = uVar11 == 0;
    if (!bVar12) {
      for (; (uVar11 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
    while (!bVar12) {
      pbVar2 = (byte *)((int)&local_30 + ((int)uVar4 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar4 & 7));
      FUN_10032380(param_1,*(uint *)((int)param_1 + (uVar4 & 0xff) * 4 + 0xdc60));
      uVar4 = 0;
      bVar12 = local_30 == 0;
      if (!bVar12) {
        for (; (local_30 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
        }
      }
    }
    *(uint *)((int)param_1 + 0xd970) = *(uint *)((int)param_1 + 0xd970) | uVar11;
    local_30 = *(uint *)((int)param_1 + 0xd970);
    *(undefined4 *)((int)param_1 + 0xdce4) = 0;
    *(byte *)((int)param_1 + 0xd979) = *(byte *)((int)param_1 + 0xd979) | uVar11 != 0;
    in_EAX = 0;
    if (local_30 != 0) {
      for (; (local_30 >> in_EAX & 1) == 0; in_EAX = in_EAX + 1) {
      }
    }
    if (local_30 != 0) {
      do {
        uVar11 = in_EAX & 0xff;
        pbVar2 = (byte *)((int)&local_30 + ((int)in_EAX >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (in_EAX & 7));
        piVar1 = *(int **)((int)param_1 + uVar11 * 4 + 0xdc20);
        local_2c = uVar11;
        uVar4 = *(uint *)(*(int *)((int)param_1 + 0xd9c4) + 0xc0);
        if (piVar1 == (int *)0x0) {
          iVar5 = *(int *)((int)param_1 + uVar11 * 4 + 0xdc40);
          if ((iVar5 != 0) && (uVar4 = *(uint *)(iVar5 + 0x38), uVar4 != 0xffffffff)) {
            local_24 = *(uint *)(iVar5 + 0x34);
            *(uint *)((int)param_1 + uVar11 * 4 + 0xdc60) = local_24;
            uStack_20 = (int)local_24 >> 0x1f;
            uStack_1c = (undefined1)local_24;
            uStack_1b = (undefined2)(local_24 >> 8);
            uStack_19 = (undefined1)(local_24 >> 0x18);
            uVar7 = FUN_10038970((void *)((int)param_1 + 0xdb38),local_24,uStack_20);
            if ((uVar7 != *(uint *)((int)param_1 + 0xdb40)) &&
               ((iVar5 = *(int *)((int)param_1 + 0xdb3c),
                *(int *)(iVar5 + uVar7 * 0x18) == CONCAT13(uStack_19,CONCAT21(uStack_1b,uStack_1c))
                && (*(uint *)(iVar5 + 4 + uVar7 * 0x18) == uStack_20)))) {
              iVar5 = iVar5 + uVar7 * 0x18;
              pcVar8 = (char *)(iVar5 + 0xc);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = *pcVar8 + '\x01';
                *(undefined1 *)(iVar5 + 0x12) = 1;
                goto LAB_10032a53;
              }
            }
            puVar13 = (uint *)&uStack_10;
            uStack_f = 0;
            uStack_10 = 1;
            puVar9 = &local_24;
            uStack_b = 0x100;
            goto LAB_10032a47;
          }
        }
        else {
          bVar10 = *(byte *)((int)piVar1 + 0x12e);
          local_24 = *(uint *)((int)param_1 + 0xdce8);
          if ((((*(byte *)((int)&local_24 + ((int)uVar11 >> 3)) >> (in_EAX & 7) & 1) != 0) &&
              ((bVar10 & 1) != 0)) &&
             ((*(int *)((int)param_1 + 0x410) == 0 || (*(int *)((int)param_1 + 0x414) == 0)))) {
            bVar10 = bVar10 & 0xfe;
          }
          if (bVar10 == 1) {
            uVar4 = (**(code **)(*piVar1 + 0x7c))();
            this = *(void **)(*(int *)((int)param_1 + 0xd9b8) + 0x1304);
            if ((((*(int *)((int)this + 0x8e0) != 0) && (uVar4 != 0)) &&
                (iVar5 = FUN_1009ed73(*(void **)((int)this + 0x8e4),uVar4,0,0,
                                      *(int *)((int)this + 0x8e0),(int)this,0,
                                      *(int *)((int)this + 0x938),*(int *)((int)this + 0x93c)),
                *(int *)(*(int *)((int)this + 0x8e0) + 0x20) != 3)) && (iVar5 != 0)) {
              FUN_100981d0(this,uVar4,0,iVar5,0);
            }
            *(undefined1 *)((int)param_1 + 0xde5b) = 1;
            pbVar2 = (byte *)((int)param_1 + ((int)local_2c >> 3) + 0xdce4);
            *pbVar2 = *pbVar2 | '\x01' << (local_2c & 7);
          }
          uVar11 = local_2c;
          uVar4 = (**(code **)(**(int **)((int)param_1 + local_2c * 4 + 0xdc20) + 0x8c))(0,0);
          if (uVar4 != 0xffffffff) {
            uVar6 = (**(code **)(**(int **)((int)param_1 + uVar11 * 4 + 0xdc20) + 0x7c))();
            *(undefined4 *)((int)param_1 + uVar11 * 4 + 0xdc60) = uVar6;
            uVar3 = (**(code **)(**(int **)((int)param_1 + uVar11 * 4 + 0xdc20) + 0x88))();
            local_24 = *(uint *)((int)param_1 + uVar11 * 4 + 0xdc60);
            uStack_1c = (undefined1)local_24;
            uStack_1b = (undefined2)(local_24 >> 8);
            uStack_19 = (undefined1)(local_24 >> 0x18);
            uStack_20 = (int)local_24 >> 0x1f;
            uVar7 = FUN_10038970((void *)((int)param_1 + 0xdb38),local_24,uStack_20);
            if (((uVar7 != *(uint *)((int)param_1 + 0xdb40)) &&
                (iVar5 = *(int *)((int)param_1 + 0xdb3c),
                *(uint *)(iVar5 + uVar7 * 0x18) == local_24)) &&
               (*(uint *)(iVar5 + 4 + uVar7 * 0x18) == uStack_20)) {
              iVar5 = iVar5 + uVar7 * 0x18;
              pcVar8 = (char *)(iVar5 + 0xc);
              if (pcVar8 != (char *)0x0) {
                *pcVar8 = *pcVar8 + '\x01';
                *(undefined1 *)(iVar5 + 0x12) = 1;
                goto LAB_10032a53;
              }
            }
            puVar13 = (uint *)&uStack_18;
            uStack_17 = 0;
            puVar9 = (uint *)&uStack_1c;
            uStack_18 = 1;
            uStack_12 = 1;
            uStack_13 = uVar3;
LAB_10032a47:
            FUN_10038740((void *)((int)param_1 + 0xdb38),puVar9,puVar13);
          }
        }
LAB_10032a53:
        if (uVar11 < 8) {
          *(undefined4 *)((int)param_1 + uVar11 * 4 + 0xdb68) =
               *(undefined4 *)((int)param_1 + 0xda64);
        }
        iVar5 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x15d8);
        piVar1 = *(int **)(*(int *)(iVar5 + 0x34) + (uVar4 >> 0x10) * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,&iStack_28);
        iStack_28 = iStack_28 + (uVar4 & 0xffff) * *(int *)(iVar5 + 0x18);
        *(int *)((int)param_1 + local_2c * 4 + 0xdb88) = iStack_28;
        in_EAX = 0;
        if (local_30 != 0) {
          for (; (local_30 >> in_EAX & 1) == 0; in_EAX = in_EAX + 1) {
          }
        }
        if (local_30 == 0) {
          return in_EAX & 0xffffff00;
        }
      } while( true );
    }
  }
  else if (((*(char *)((int)param_1 + 0xd979) != '\0') &&
           (*(int **)((int)param_1 + 0xdbe0) != (int *)0x0)) &&
          (in_EAX = (**(code **)(**(int **)((int)param_1 + 0xdbe0) + 0x8c))(0,0),
          in_EAX != 0xffffffff)) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0xd9b8) + 0x15d8);
    piVar1 = *(int **)(*(int *)(iVar5 + 0x34) + (in_EAX >> 0x10) * 8);
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_24);
    *(uint *)((int)param_1 + 0xdba8) = local_2c + (in_EAX & 0xffff) * *(int *)(iVar5 + 0x18);
    uVar4 = (**(code **)(**(int **)((int)param_1 + 0xdbe0) + 0x7c))();
    *(uint *)((int)param_1 + 0xdc80) = uVar4;
    local_2c = uVar4;
    uVar11 = FUN_10038970((void *)((int)param_1 + 0xdb38),uVar4,(int)uVar4 >> 0x1f);
    if (((uVar11 != *(uint *)((int)param_1 + 0xdb40)) &&
        (iVar5 = *(int *)((int)param_1 + 0xdb3c), *(uint *)(iVar5 + uVar11 * 0x18) == uVar4)) &&
       (*(uint *)(iVar5 + 4 + uVar11 * 0x18) == (int)uVar4 >> 0x1f)) {
      iVar5 = iVar5 + uVar11 * 0x18;
      pcVar8 = (char *)(iVar5 + 0xc);
      if (pcVar8 != (char *)0x0) {
        *pcVar8 = *pcVar8 + '\x01';
        *(undefined1 *)(iVar5 + 0x12) = 1;
        return (uint)pcVar8 & 0xffffff00;
      }
    }
    uStack_1c = 0;
    uStack_20 = 1;
    uStack_1b = 0x100;
    in_EAX = FUN_10038740((void *)((int)param_1 + 0xdb38),&local_2c,&uStack_20);
  }
  return in_EAX & 0xffffff00;
}

