/*
 * FUN_10011f37 at 10011f37
 * undefined __thiscall FUN_10011f37(void * this, int param_1)
 * Address ranges: 10011f37-1001220c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_10011f37(void *this,int param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 auStack_12c [7];
  undefined4 uStack_110;
  undefined4 local_f0 [6];
  int local_d8;
  int local_d4;
  uint local_ac;
  byte local_a6;
  int local_8c;
  int local_88;
  undefined4 local_4c [4];
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined1 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  uint local_8;
  
  uVar6 = 0;
  do {
    iVar4 = 0;
    if (uVar6 == 0) {
      if (*(int *)((int)this + 0x2b1c) == 6) {
        iVar4 = (int)this + 0x2b54;
      }
    }
    else if ((uVar6 == 1) && (iVar4 = 0, *(int *)((int)this + 0x2b20) == 7)) {
      iVar4 = (int)this + 0x2b68;
    }
    if (iVar4 != 0) {
      uStack_110 = 0x10011f92;
      FUN_10011a38(*(void **)((int)this + 0x365c),*(uint *)(iVar4 + 8),*(uint *)(iVar4 + 0xc),
                   *(int *)(iVar4 + 0x10),'\x01');
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 2);
  local_14 = -1;
  local_18 = 0;
  do {
    uVar7 = local_18;
    uVar6 = local_1c >> 8;
    local_1c = local_1c & 0xffffff00;
    local_10 = (undefined4 *)0x0;
    if (local_18 == 0) {
      if ((param_1 == 6) || ((param_1 == -1 && (*(int *)((int)this + 0x2b1c) == 6)))) {
        local_14 = 6;
        local_10 = (undefined4 *)((int)this + 0x2b54);
      }
    }
    else {
      local_10 = (undefined4 *)0x0;
      if ((local_18 == 1) &&
         ((param_1 == 7 ||
          ((local_10 = (undefined4 *)0x0, param_1 == -1 &&
           (local_10 = (undefined4 *)0x0, *(int *)((int)this + 0x2b20) == 7)))))) {
        local_10 = (undefined4 *)((int)this + 0x2b68);
        local_1c = CONCAT31((int3)uVar6,1);
        local_14 = 7;
      }
    }
    if ((local_10 != (undefined4 *)0x0) &&
       (local_c = FUN_100118f8(*(void **)((int)this + 0x365c),local_14), local_c == 0xffffffff)) {
      local_8 = 3;
      do {
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x365c) + 0x2c))();
        puVar8 = local_f0;
        for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        if (local_d8 == local_d4) {
          local_c = local_8;
          goto LAB_10012129;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 7);
      local_20 = 0;
      local_8 = 3;
      do {
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x365c) + 0x2c))();
        puVar8 = local_f0;
        for (iVar4 = 0x29; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        if (((local_20 <= local_ac) && (local_8c == 0)) && (local_88 == 0)) {
          local_20 = local_ac;
          local_c = local_8;
        }
        local_8 = local_8 + 1;
      } while (local_8 < 7);
      uVar7 = local_18;
      if (local_c != 0xffffffff) {
        puVar3 = (undefined4 *)(**(code **)(**(int **)((int)this + 0x365c) + 0x2c))();
        puVar8 = local_f0;
        for (iVar4 = 0x29; uVar6 = local_c, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        if ((local_a6 & 2) != 0) {
          uStack_110 = 0x1001210d;
          (**(code **)(**(int **)((int)this + 0x365c) + 0x20))();
          FUN_1001fade(this,uVar6);
        }
        (**(code **)(**(int **)((int)this + 0x365c) + 0x34))();
LAB_10012129:
        local_34 = local_10[4];
        iVar4 = local_34;
        if (local_34 == 0xff) {
          iVar4 = 0xff;
        }
        local_4c[0] = *local_10;
        local_4c[3] = local_4c[0];
        local_38 = local_4c[0];
        local_4c[1] = local_10[1];
        local_4c[2] = 1;
        local_3c = local_10[1];
        if ((char)local_1c == '\0') {
          local_30 = *(undefined4 *)(&UNK_10057b98 + iVar4 * 4);
        }
        else {
          local_30 = 7;
        }
        local_2c = (local_1c & 0xff) * 2 + 6;
        if ((char)local_1c == '\0') {
          local_28 = *(undefined4 *)(&UNK_10057c08 + iVar4 * 4);
        }
        else {
          local_28 = 7;
        }
        local_24 = *(undefined1 *)(*(int *)((int)this + 4) + 0x54);
        iVar4 = **(int **)((int)this + 0x365c);
        puVar3 = local_4c;
        puVar8 = auStack_12c;
        for (iVar5 = 0xb; uVar6 = local_c, iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar8 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar8 = puVar8 + 1;
        }
        cVar2 = (**(code **)(iVar4 + 0x30))(local_c);
        uVar7 = local_18;
        if (cVar2 != '\0') {
          iVar4 = (**(code **)(**(int **)((int)this + 0x365c) + 0x2c))();
          uVar7 = local_10[2];
          *(uint *)(iVar4 + 0x18) = uVar7;
          uVar1 = local_10[3];
          *(uint *)(iVar4 + 0x1c) = uVar1;
          FUN_1001fc37(this,uVar6,uVar7,uVar1);
          uVar7 = local_18;
        }
      }
    }
    local_18 = uVar7 + 1;
    if (1 < local_18) {
      return;
    }
  } while( true );
}

