/*
 * FUN_1001d630 at 1001d630
 * undefined1 __thiscall FUN_1001d630(void * this, char param_1)
 * Address ranges: 1001d630-1001da7a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 __thiscall FUN_1001d630(void *this,char param_1)

{
  int *piVar1;
  void *this_00;
  byte *pbVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  undefined1 local_2c;
  undefined4 local_2b;
  undefined1 local_27;
  undefined1 local_26;
  uint local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  undefined1 local_6;
  undefined1 local_5;
  
  local_5 = 0;
  if (*(char *)((int)this + 0x1905) == '\0') {
    uVar9 = ~*(uint *)((int)this + 0x1d30) & *(uint *)((int)this + 0x2070);
    local_c = uVar9;
    uVar7 = 0;
    bVar10 = uVar9 == 0;
    if (!bVar10) {
      for (; (uVar9 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    while (!bVar10) {
      pbVar2 = (byte *)((int)&local_c + ((int)uVar7 >> 3));
      *pbVar2 = *pbVar2 & ~('\x01' << (uVar7 & 7));
      FUN_1001d230(this,*(uint *)((int)this + (uVar7 & 0xff) * 4 + 0x1fc8));
      uVar7 = 0;
      bVar10 = local_c == 0;
      if (!bVar10) {
        for (; (local_c >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    }
    *(uint *)((int)this + 0x1d30) = *(uint *)((int)this + 0x1d30) | uVar9;
    local_10 = *(uint *)((int)this + 0x1d30);
    *(undefined4 *)((int)this + 0x2070) = 0;
    *(byte *)((int)this + 0x1d39) = *(byte *)((int)this + 0x1d39) | uVar9 != 0;
    uVar7 = 0;
    if (local_10 != 0) {
      for (; (local_10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
      }
    }
    if (local_10 != 0) {
      do {
        uVar9 = uVar7 & 0xff;
        pbVar2 = (byte *)((int)&local_10 + ((int)uVar7 >> 3));
        *pbVar2 = *pbVar2 & ~('\x01' << (uVar7 & 7));
        piVar1 = *(int **)((int)this + uVar9 * 4 + 0x1fa8);
        local_c = *(uint *)(*(int *)((int)this + 0x1d60) + 200);
        local_1c = uVar9;
        if (piVar1 != (int *)0x0) {
          if (*(char *)((int)piVar1 + 0x12e) == '\x01') {
            local_c = (**(code **)(*piVar1 + 0x7c))();
            this_00 = *(void **)(*(int *)((int)this + 0x1d54) + 0x1304);
            if (((*(int *)((int)this_00 + 0x8e0) != 0) && (local_c != 0)) &&
               ((iVar3 = FUN_10055a43(*(void **)((int)this_00 + 0x8e4),local_c,0,0,
                                      *(int *)((int)this_00 + 0x8e0),(int)this_00,0,
                                      *(int *)((int)this_00 + 0x938),*(int *)((int)this_00 + 0x93c))
                , *(int *)(*(int *)((int)this_00 + 0x8e0) + 0x20) != 3 && (iVar3 != 0)))) {
              FUN_10051f2d(this_00,local_c,0,iVar3,0);
            }
            *(undefined1 *)((int)this + 0x21d3) = 1;
            pbVar2 = (byte *)((int)this + ((int)uVar9 >> 3) + 0x2070);
            *pbVar2 = *pbVar2 | '\x01' << (uVar7 & 7);
          }
          local_c = (**(code **)(**(int **)((int)this + uVar9 * 4 + 0x1fa8) + 0x8c))(0,0);
          if (local_c != 0xffffffff) {
            uVar4 = (**(code **)(**(int **)((int)this + uVar9 * 4 + 0x1fa8) + 0x7c))();
            *(undefined4 *)((int)this + uVar9 * 4 + 0x1fc8) = uVar4;
            local_6 = (**(code **)(**(int **)((int)this + uVar9 * 4 + 0x1fa8) + 0x88))();
            local_24 = *(uint *)((int)this + uVar9 * 4 + 0x1fc8);
            uVar8 = (int)local_24 >> 0x1f;
            local_20 = local_24;
            uVar5 = FUN_10023740((void *)((int)this + 0x1ec0),local_24,uVar8);
            if (((uVar5 != *(uint *)((int)this + 0x1ec8)) &&
                (iVar3 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar3 + uVar5 * 0x18) == local_20))
               && (*(uint *)(iVar3 + 4 + uVar5 * 0x18) == uVar8)) {
              iVar3 = iVar3 + uVar5 * 0x18;
              pcVar6 = (char *)(iVar3 + 0xc);
              if (pcVar6 != (char *)0x0) {
                *pcVar6 = *pcVar6 + '\x01';
                *(undefined1 *)(iVar3 + 0x12) = 1;
                goto LAB_1001d80f;
              }
            }
            local_27 = local_6;
            local_2b = 0;
            local_2c = 1;
            local_26 = 1;
            FUN_100235a0((void *)((int)this + 0x1ec0),&local_24,(uint *)&local_2c);
          }
        }
LAB_1001d80f:
        if (uVar9 < 8) {
          if (((uVar9 == 0) && (param_1 != (char)uVar7)) && (local_c != 0xffffffff)) {
            uVar7 = (**(code **)(**(int **)((int)this + 0x1fa8) + 0x90))();
            iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15d8);
            piVar1 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar7 >> 0x10) * 8);
            (**(code **)(*piVar1 + 0x24))(piVar1,&local_14);
            local_14 = local_14 + (uVar7 & 0xffff) * *(int *)(iVar3 + 0x18);
            *(int *)((int)this + 0x1ef0) = local_14;
            uVar7 = (**(code **)(**(int **)((int)this + 0x1fa8) + 0x80))();
            *(uint *)((int)this + 0x1fec) = uVar7;
            local_24 = uVar7;
            uVar9 = FUN_10023740((void *)((int)this + 0x1ec0),uVar7,(int)uVar7 >> 0x1f);
            if (((uVar9 == *(uint *)((int)this + 0x1ec8)) ||
                (iVar3 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar3 + uVar9 * 0x18) != uVar7)) ||
               (*(uint *)(iVar3 + 4 + uVar9 * 0x18) != (int)uVar7 >> 0x1f)) {
LAB_1001d8cd:
              local_33 = 0;
              local_34 = 1;
              local_2f = 0x100;
              FUN_100235a0((void *)((int)this + 0x1ec0),&local_24,(uint *)&local_34);
            }
            else {
              iVar3 = iVar3 + uVar9 * 0x18;
              pcVar6 = (char *)(iVar3 + 0xc);
              if (pcVar6 == (char *)0x0) goto LAB_1001d8cd;
              *pcVar6 = *pcVar6 + '\x01';
              *(undefined1 *)(iVar3 + 0x12) = 1;
            }
            uVar4 = (**(code **)(**(int **)((int)this + 0x1fa8) + 100))
                              ((int)this + 0x1e98,(int)this + 0x1ea0,(int)this + 0x1ea8,
                               (int)this + 0x1eb0);
            *(undefined4 *)((int)this + 0x200c) = uVar4;
            local_5 = 1;
            uVar9 = local_1c;
          }
          else {
            *(undefined4 *)((int)this + uVar9 * 4 + 0x1ef0) = *(undefined4 *)((int)this + 0x1dec);
          }
        }
        iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15d8);
        piVar1 = *(int **)(*(int *)(iVar3 + 0x34) + (local_c >> 0x10) * 8);
        (**(code **)(*piVar1 + 0x24))(piVar1,&local_18);
        local_18 = local_18 + (local_c & 0xffff) * *(int *)(iVar3 + 0x18);
        *(int *)((int)this + uVar9 * 4 + 0x1f10) = local_18;
        uVar7 = 0;
        if (local_10 != 0) {
          for (; (local_10 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
          }
        }
        if (local_10 == 0) {
          return local_5;
        }
      } while( true );
    }
  }
  else if (((*(char *)((int)this + 0x1d39) != '\0') && (*(int **)((int)this + 0x1f68) != (int *)0x0)
           ) && (uVar7 = (**(code **)(**(int **)((int)this + 0x1f68) + 0x8c))(0,0),
                uVar7 != 0xffffffff)) {
    iVar3 = *(int *)(*(int *)((int)this + 0x1d54) + 0x15d8);
    piVar1 = *(int **)(*(int *)(iVar3 + 0x34) + (uVar7 >> 0x10) * 8);
    (**(code **)(*piVar1 + 0x24))(piVar1,&local_24);
    *(uint *)((int)this + 0x1f30) = local_24 + (uVar7 & 0xffff) * *(int *)(iVar3 + 0x18);
    uVar7 = (**(code **)(**(int **)((int)this + 0x1f68) + 0x7c))();
    *(uint *)((int)this + 0x1fe8) = uVar7;
    local_24 = uVar7;
    uVar9 = FUN_10023740((void *)((int)this + 0x1ec0),uVar7,(int)uVar7 >> 0x1f);
    if (((uVar9 != *(uint *)((int)this + 0x1ec8)) &&
        (iVar3 = *(int *)((int)this + 0x1ec4), *(uint *)(iVar3 + uVar9 * 0x18) == uVar7)) &&
       (*(uint *)(iVar3 + 4 + uVar9 * 0x18) == (int)uVar7 >> 0x1f)) {
      iVar3 = iVar3 + uVar9 * 0x18;
      pcVar6 = (char *)(iVar3 + 0xc);
      if (pcVar6 != (char *)0x0) {
        *pcVar6 = *pcVar6 + '\x01';
        *(undefined1 *)(iVar3 + 0x12) = 1;
        return 0;
      }
    }
    local_33 = 0;
    local_34 = 1;
    local_2f = 0x100;
    FUN_100235a0((void *)((int)this + 0x1ec0),&local_24,(uint *)&local_34);
  }
  return 0;
}

